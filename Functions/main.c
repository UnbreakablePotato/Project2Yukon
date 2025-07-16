int main(void) {
    srand(time(NULL));
    Initial();

    //define our variables for the inputs
    char Input[100];
    char Operation[20];
    char ExtraOperation[20];

    char playInput[100];
    char playOperation[20];
    char playExtraOperation[20];


    //exit program if operation is QQ
    while (strcmp(Operation, "QQ") != 0) {

        //resests the variables
        memset(Operation,0,sizeof(Operation));
        memset(ExtraOperation,0,sizeof(ExtraOperation));

        //Takes inputs from the terminal and puts it in our Input array
        if (fgets(Input, sizeof(Input), stdin) != NULL) {

            //returns the number of inputs succesfully assigned and matched from our input array.
            //If there is only one string in our Input, then will Operation only be assigned, and it
            //will return 1.
            int Operations = sscanf(Input, "%s %s", Operation, ExtraOperation);

            if ((Operations == 1) && (strcmp(Operation, "LD") == 0)) {
                LD("None");
                ClearList(&SRHead);
            } else if ((Operations == 2) && (strcmp(Operation, "LD") == 0)) {
                LD(ExtraOperation);
                ClearList(&SRHead);
            }else if ((Operations == 1) && (strcmp(Operation, "SW") == 0)) {
                SW();
            }else if ((Operations == 1) && (strcmp(Operation, "SD") == 0)) {
                SD("None");
            }else if ((Operations == 2) && (strcmp(Operation, "SD") == 0)) {
                SD(ExtraOperation);
            }else if ((Operations == 1) && (strcmp(Operation, "SI") == 0)) {
                deckSplit(0);
            } else if ((Operations == 2) && (strcmp(Operation, "SI") == 0)) {
                int num = atoi(ExtraOperation); //function to convert string to int
                deckSplit(num);
            } else if ((Operations == 1) && (strcmp(Operation, "SR") == 0)) {
                shuffleRandom(head);
            } else if ((Operations == 1) && (strcmp(Operation, "P") == 0)){


                //save deck to use later if you want to restart
                if (SRHead == NULL) {
                    SavedDeck = saveDeck(head);
                }else {
                    SavedDeck = saveDeck(SRHead);
                }

                P();

                //PlayPhase while loop
                memset(playOperation,0,sizeof(playOperation)); //Deletes old playphase operations
                memset(playExtraOperation,0,sizeof(playExtraOperation));

                while (strcmp(playOperation, "Q") != 0) {

                    memset(playOperation,0,sizeof(playOperation));
                    memset(playExtraOperation,0,sizeof(playExtraOperation));

                    if (fgets(playInput, sizeof(playInput), stdin) != NULL) {

                        int playOperations = sscanf(playInput, "%s %s", playOperation, playExtraOperation);



                        if (playOperation[0] == 'C' || playOperation[0] == 'F'){
                            GameMoves(playOperation);
                        }else if (playOperation[0] != 'Q'){
                            printf("LAST Command: %s\n"
                            "Message: Unknown Command\n"
                            "INPUT >", playOperation);
                        } else if ((playOperation[0] == 'Q') && (playOperation[1] == 'Q')){
                            printf("LAST Command: %s\n"
                            "Message: Unknown Command\n"
                            "INPUT >", playOperation);
                        }
                    }
                }
                printf("LAST Command: Q\n"
                    "Message: Leaving Play Phase!\n"
                    "INPUT >");
                //Freeing all game columns and foundations (Lists)
                ClearList(&SRHead);
                ClearList(&head);
                ClearList(&SecondHead);
                ClearList(&ThirdHead);
                ClearList(&FourthHead);
                ClearList(&FifthHead);
                ClearList(&SixthHead);
                ClearList(&SeventhHead);
                ClearList(&Fone);
                ClearList(&Ftwo);
                ClearList(&Fthree);
                ClearList(&Ffour);

                //Setting our savedDeck we saved before starting game to be head again to use (in order to restart)
                head = NULL;
                SRHead = NULL;
                SecondHead = NULL;
                ThirdHead = NULL;
                FourthHead = NULL;
                FifthHead = NULL;
                SixthHead = NULL;
                SeventhHead = NULL;
                head = saveDeck(SavedDeck);
            }else if (strcmp("QQ", Operation) != 0){
                printf("LAST Command: %s\n"
                    "Message: Unknown Command\n"
                    "INPUT >", Operation);
            }
        }
    }
    printf("LAST Command: QQ\n"
                    "Message: Exiting game!\n");
}
