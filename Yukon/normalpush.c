#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void Initial();
void LD(char filename[]);
void SW();
void SD(char filename[]);

//struct for a single node
typedef struct Node {
    char *value;
    int visible;
    struct Node *prev;
    struct Node *next;
}Node;

//7 heads der bliver brugt i play phase
Node* head = NULL;
Node* SecondHead = NULL;
Node* ThirdHead = NULL;
Node* FourthHead = NULL;
Node* FifthHead = NULL;
Node* SixthHead = NULL;
Node* SeventhHead = NULL;

//head der bliver brugt i game moves
Node* currentFrom = NULL;
Node* currentTo = NULL;

//foundation heads
Node* Fone = NULL;
Node* Ftwo = NULL;
Node* Fthree = NULL;
Node* Ffour = NULL;

//shuffle heads
Node* SRHead = NULL;
Node* previous = NULL;
Node* SRprevious = NULL;


//Deck to save
Node* SavedDeck = NULL;
Node* SavedPrevious = NULL;

int rNum;
char Deckarray[52][3];
char Extra[10];

void print(Node* list, char command[], char input[]);
Node* createCard(char* value);
void createDeck();
void printList(Node* head);
char createDeckFile(char filename[]);
void deckSplit(int n);
Node* mergeAlt(Node* head, Node* SecondHead);
int randomNumber();
void shuffleRandom(Node* head);
void P();
void playSplit(int n, Node* head1, Node** head2);
void GameMoves(const char* Operation);
void GameMovesPrint();
char GameMovesCheck(Node* currentFrom, Node* currentTo, const char* to, const char* Operation);
int rankCharToInt(char rank);
int ListLength(Node* list);
void FacedownList(Node* list, int num);
void FaceupList(Node* list, int num);
void ClearList(Node** head);
Node* saveDeck(Node* head);

int flag = 0;
int flagP = 0;

//standard deck to load with no file input
const char* values[52] = {"AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "TC", "JC", "QC", "KC",
                        "AD", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "TD", "JD", "QD", "KD",
                        "AH", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "TH", "JH", "QH", "KH",
                        "AS", "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "TS", "JS", "QS", "KS"};

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
                flag = 0;
                flagP = 1;
                ClearList(&SRHead);
            } else if ((Operations == 2) && (strcmp(Operation, "LD") == 0)) {
                LD(ExtraOperation);
                flag = 0;
                flagP = 1;
                ClearList(&SRHead);
            }else if ((Operations == 1) && (strcmp(Operation, "SW") == 0)) {
                SW();
                flag =1;
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
            } else if ((Operations == 1) && (strcmp(Operation, "P") == 0) && flagP == 1){


                //save deck to use later if you want to restart
                if (SRHead == NULL) {
                    SavedDeck = saveDeck(head);
                }else {
                    SavedDeck = saveDeck(SRHead);
                }
                if (flagP = 1) {
                    P();
                }


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
                    printf("LAST Command: Q\n"
                    "Message: Leaving Play Phase!\n"
                    "INPUT >");
                }

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
            }else if ((Operations == 1) && (strcmp(Operation, "P") == 0) && flagP == 0) {
                    printf("LAST Command: %s\n"
                    "Message: ERROR: No deck provided!\n"
                    "INPUT >", Operation);
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


void Initial( ) {
    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: \n"
           "Message: \n"
           "INPUT >");
}


void LD(char filename[]){

    //if no file name is provided we run the "if" block, otherwise the "else" block will run.
    if (strcmp(filename, "None") == 0) {

        createDeck();

        print(head, "LD", "OK");

    }else{
        if (createDeckFile(filename)) {
            print(head, "LD", "OK");
        }
    }
}

//function to create a single card with a struct
Node* createCard(char* value) {

    Node* newCard = (Node*)malloc(sizeof(Node)); //allocate memory for new node

    newCard->value = (char*)malloc(strlen(value) + 1);  //allocate memory for the value  (+1 for '\0')

    strcpy(newCard->value, value); //sets the value of the card to the value in the argument

    //initialises the pointers to NULL
    newCard -> next = NULL;
    newCard -> prev = NULL;

    newCard -> visible = 0; //sets the card visible pointer to 0, witch results in it being hidden

    return newCard;
}

//creates the double linked list with the standard deck
void createDeck() {

    for (int i = 0; i < 52; i++) {
        Node* newCard = createCard(values[i]);
        if (i==0) {
            newCard->prev = NULL;
            head = newCard;
            previous = newCard;
        }else {
            if (i == 51) {
                newCard->next = NULL;
            }
            previous->next = newCard;
            newCard->prev = previous;
            previous = newCard;
        }
    }
}

//creates a double linked list from a file
char createDeckFile(char filename[]) {
    FILE* file = fopen(filename,"r");

    for (int i = 0; i<52;i++) {
        fscanf(file,"%s", &Deckarray[i]);
    }
    for (int i = 0; i<10; i++) {
        fscanf(file,"%s", &Extra[i]);
    }

    //Check if file exist
    if (file == NULL) {
        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: LD \n"
           "Message: ERROR - no existing file\n"
           "INPUT >");
        return 0;
    }

    //check if deck/file is too small
    for (int i = 0; i < 52; i++) {
        if (strcmp(Deckarray[i], "") == 0) {
            printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: LD \n"
           "Message: ERROR - deck is too small\n"
           "INPUT >");
            return 0;
        }
    }

    //check if deck/file is too big
    if (strcmp(Extra, "") != 0) {
        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: LD \n"
           "Message: ERROR - deck is too big\n"
           "INPUT >");
        return 0;
    }

    //Check if file has legitimate cards
    for (int i = 0; i < 52; i++) {
        int found = 0;
        for (int j = 0; j < 52; j++) {
            if (strcmp(Deckarray[i], values[j]) == 0) {
                found = 1;
            }
        }
        if (found == 0) {
            printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: LD \n"
           "Message: ERROR at line %d in the file\n"
           "INPUT >", i+1);
            return 0;
        }
    }
        //check if deck has duplicates
        for (int i = 0; i < 52; i++) {
            for (int j = 0; j < 52; j++) {
                if (i != j) {
                    if (strcmp(Deckarray[i], Deckarray[j])==0) {
                        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
                        "\t\t\t\t\t\t\t[]\tF1\n\n"
                        "\t\t\t\t\t\t\t[]\tF2\n\n"
                        "\t\t\t\t\t\t\t[]\tF3\n\n"
                        "\t\t\t\t\t\t\t[]\tF4\n\n"
                        "LAST Command: LD \n"
                        "Message: ERROR duplicate detected: %s \n"
                        "INPUT >", Deckarray[i]);
                        return 0;
                    }
                }
            }
        }

        fclose(file);

        //after checking the validity of the file, we create the double linked list with the file as input.
        for (int i = 0; i < 52; i++) {
            Node* newCard = createCard(Deckarray[i]);
            if (i==0) {
                newCard->prev = NULL;
                head = newCard;
                previous = newCard;
            }else {
                if (i == 51) {
                    newCard->next = NULL;
                }
                previous->next = newCard;
                newCard->prev = previous;
                previous = newCard;
            }
        }
        return 1;
    }

void print(Node* list, char command[],char input[]) {

    Node* temp = list;

    int line = 0;
    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
    for (int row = 0; row < 8; row++) {
        for (int column = 0; column < 7; column++) {
            if ((column < 3 && row < 8) || (column >= 3 && row < 7)) {
                if (temp) {
                    printf("%s\t", temp->visible ? temp->value : "[]");
                    temp = temp->next;
                } else {
                    printf("\t");
                }
            } else {
                printf("\t");
            }
        }

        line++;
        if (line == 1) {
            printf("[]\tF1");
        }else if (line == 3) {
            printf("[]\tF2");
        }else if (line == 5) {
            printf("[]\tF3");
        }else if (line == 7) {
            printf("[]\tF4");
        }
        printf("\n");
    }
    if (head != NULL) {
        printf("LAST Command: %s\n"
            "Message:%s\n"
            "INPUT >", command, input);
    } else {
        printf("LAST Command: %s\n"
           "Message: ERROR: No deck provided.\n"
           "INPUT >", command);
    }
}

void SW() {
    if (SRHead == NULL && head == NULL) {
        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: SW \n"
           "Message: ERROR - no deck provided\n"
           "INPUT >");
    }else {
        if (SRHead == NULL) {
            for (int i = 1; i<53;i++) {
                FaceupList(head, i);
            }
            print(head, "SW", "OK");
        }else {
            for (int i = 1; i < 53; i++) {
                FaceupList(SRHead, i);
            }
            print(SRHead, "SW", "OK");
        }
    }
}


//Split funktion
void deckSplit(int n) {
    rNum = randomNumber();

    if (head == NULL) {
        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: SI\n"
           "Message: ERROR: no deck provided\n"
           "INPUT >");
    }

    if(n==0) {
        if(SRHead == NULL){
            Node* current = head;

            int count = 0;
            while (current != NULL && count < rNum) { //Første DLL. Vi løber igennem hele første liste med count
                current = current->next;
                count++;
            }

            if (current != NULL) { // Anden DLL. Vi behøver ikke løbe igennem igen, vi skal bare splitte fra sidste node i første liste
                SecondHead = current;

                if (current->prev != NULL) { // splitter fra liste 2
                    current->prev->next = NULL;// current forrige nodes næste aka current skal være NULL
                }

                current->prev = NULL; // splitter fra liste 1. Tænk på det som liste1-/>liste2->næste
                head = mergeAlt(head, SecondHead);

                print(head, "SI", "OK");
            }
        }else{
            Node* current = SRHead;

            int count = 0;
            while (current != NULL && count < rNum) { //Første DLL. Vi løber igennem hele første liste med count
                current = current->next;
                count++;
            }

            if (current != NULL) { // Anden DLL. Vi behøver ikke løbe igennem igen, vi skal bare splitte fra sidste node i første liste
                SecondHead = current;

                if (current->prev != NULL) { // splitter fra liste 2
                    current->prev->next = NULL;// current forrige nodes næste aka current skal være NULL
                }

                current->prev = NULL; // splitter fra liste 1. Tænk på det som liste1-/>liste2->næste
                head = mergeAlt(SRHead, SecondHead);

                print(SRHead, "SI", "OK");
            }
        }

        }else {
                if(SRHead == NULL){
                    Node* current = head;

                    int count = 0;
                    while (current != NULL && count < n) { //Første DLL. Vi løber igennem hele første liste med count
                        current = current->next;
                        count++;
                    }

                    if (current != NULL) { // Anden DLL. Vi behøver ikke løbe igennem igen, vi skal bare splitte fra sidste node i første liste
                    SecondHead = current;

                    if (current->prev != NULL) { // splitter fra liste 2
                        current->prev->next = NULL;// current forrige nodes næste aka current skal være NULL
                    }

                    current->prev = NULL; // splitter fra liste 1. Tænk på det som liste1-/>liste2->næste
                    head = mergeAlt(head, SecondHead);

                    print(head, "SI", "OK");
                    }
                }else{

            Node* current = SRHead;

            int count = 0;
            while (current != NULL && count < n) { //Første DLL. Vi løber igennem hele første liste med count
                current = current->next;
                count++;
            }

            if (current != NULL) { // Anden DLL. Vi behøver ikke løbe igennem igen, vi skal bare splitte fra sidste node i første liste
                SecondHead = current;

                if (current->prev != NULL) { // splitter fra liste 2
                    current->prev->next = NULL;// current forrige nodes næste aka current skal være NULL
                }

                current->prev = NULL; // splitter fra liste 1. Tænk på det som liste1-/>liste2->næste
                head = mergeAlt(SRHead, SecondHead);

                print(SRHead, "SI", "OK");
            }
        }
    }
}





    int randomNumber() {
        return rand()%52;
    }

Node* mergeAlt(Node* head, Node* SecondHead) {
    if (!head) {
        return SecondHead; //tjek til at se om head er tom. Vigtig for ellers kan vi ramme random nullptr ved at hoppe videre efter vi har brugt alle noder i listen
    }

    if (!SecondHead) {
        return head; //samme men for den anden linkedlist
    }

    Node* pointer = head;
    Node* pointer2 = SecondHead;
    Node* mergedHead = pointer; // peger tilbage på head og er vores return value

    while (pointer && pointer2) { //loop så længe ingen af listerne er tomme
        Node* next1 = pointer->next; // gemmer noder i en next1 eller next2
        Node* next2 = pointer2->next;

        pointer->next = pointer2;//logik til at linke fra list 1 til 2 så list1->list2->list1 osv
        pointer2->prev = pointer;

        if (next1) { //logik til at gøre det modsatte, så link2->link1->link2 men kun hvis der er et link1
            pointer2->next = next1;
            next1->prev = pointer2;
        }

        pointer = next1;//rykker pointers fra tidligere link til næste
        pointer2 = next2;
    }
    return mergedHead; //hele merged linked list
}

//saves the current deck in a file
void SD(char filename[]) {

    if (head == NULL) {
        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: SD \n"
           "Message: ERROR no deck provided\n"
           "INPUT >");
    }else {
        if (SRHead == NULL) {
            Node* temp = head;

            //simply loads the value of the node into a file and traversing the linked list.
            //if we don't specify a filename we create a default file called cards.txt,
            //otherwise we create a file with the argument filename
            if (strcmp(filename, "None") == 0) {
                FILE* file = fopen("cards.txt", "w");

                for (int i = 0; i < 52; i++) {
                    fprintf(file, "%s\n", temp -> value);
                    temp = temp -> next;
                }

                fclose(file);
            }else {
                FILE* file = fopen(filename, "w");

                for (int i = 0; i < 52; i++) {
                    fprintf(file, "%s\n", temp -> value);
                    temp = temp -> next;
                }
                fclose(file);
            }
            printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
               "\t\t\t\t\t\t\t[]\tF1\n\n"
               "\t\t\t\t\t\t\t[]\tF2\n\n"
               "\t\t\t\t\t\t\t[]\tF3\n\n"
               "\t\t\t\t\t\t\t[]\tF4\n\n"
               "LAST Command: SD\n"
               "Message: OK\n"
               "INPUT >");
        }else {
            Node* temp = SRHead;

            //simply loads the value of the node into a file and traversing the linked list.
            //if we don't specify a filename we create a default file called cards.txt,
            //otherwise we create a file with the argument filename
            if (strcmp(filename, "None") == 0) {
                FILE* file = fopen("cards.txt", "w");

                for (int i = 0; i < 52; i++) {
                    fprintf(file, "%s\n", temp -> value);
                    temp = temp -> next;
                }

                fclose(file);
            }else {
                FILE* file = fopen(filename, "w");

                for (int i = 0; i < 52; i++) {
                    fprintf(file, "%s\n", temp -> value);
                    temp = temp -> next;
                }
                fclose(file);
            }
            printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
               "\t\t\t\t\t\t\t[]\tF1\n\n"
               "\t\t\t\t\t\t\t[]\tF2\n\n"
               "\t\t\t\t\t\t\t[]\tF3\n\n"
               "\t\t\t\t\t\t\t[]\tF4\n\n"
               "LAST Command: SD\n"
               "Message: OK\n"
               "INPUT >");
        }

    }
}

void shuffleRandom(Node* head) {
    // skal vælge et random kort fra decket og sætte på position x i et nyt deck
    if (head==NULL) {
        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "\t\t\t\t\t\t\t[]\tF1\n\n"
           "\t\t\t\t\t\t\t[]\tF2\n\n"
           "\t\t\t\t\t\t\t[]\tF3\n\n"
           "\t\t\t\t\t\t\t[]\tF4\n\n"
           "LAST Command: \n"
           "Message: ERROR: no deck provided\n"
           "INPUT >");
    }else {
        int rNumArray[52];

        for (int i=0;i<52;) {/*Vi skal tjekke om rNum er det samme som tidligere.
            Vi skal også tjekke om vi tidligere har brugt det tal rNum, da vi ikke kan bruge samme node i head listen igen.*/
            rNum = randomNumber();
            int check = 0;
            for (int j=0;j<i;j++) {
                if (rNum == rNumArray[j]) {
                    check=1;
                    break;
                }
            }
            if (check==0) {
                rNumArray[i]=rNum;
                i++;
            }

        }

        //Loop skal bruge rNumArray til at fortælle hvilket kort fra head, som skal indsættes i en ny linked list
        //Med andre ord er rNumArray en position pointer
        for (int j=0;j<52;j++) {

            Node* pointer = head;

            for (int i=0;i<rNumArray[j];i++) {
                if (pointer == NULL) {
                    break;
                }
                pointer = pointer->next;
            }

            Node* newCard = createCard(pointer->value);
            if (j == 0) {
                newCard->prev = NULL;
                SRHead = newCard;
                SRprevious = newCard;
            }
            else{
                if (j == 51) {
                    newCard->next = NULL;
                }
                SRprevious ->next = newCard;
                newCard->prev = SRprevious;
                SRprevious = newCard;
            }
        }


        //if we have made our prior head list visible, make the shuffled list visble aswell
        if (head->visible == 1 || flag ==1) {
            for (int i = 1; i < 53; i++) {
                FaceupList(SRHead, i);
            }
        }
        print(SRHead, "SR", "OK");
    }
}

void playSplit(int n, Node* head1, Node** head2) {
    Node* current = head1;

                int count = 0;
                while (current != NULL && count < n) { //første DLL
                    current = current->next;
                    count++;
                }

                if (current != NULL) { // Anden DLL
                    *head2 = current;

                    if (current->prev != NULL) { // splitter fra liste 2
                        current->prev->next = NULL;
                    }

                    current->prev = NULL; // splitter fra liste 1



                }
}

void P() {
    if (head == NULL) {
        printf("LAST Command: P\n"
                    "Message: ERROR: No deck provided.\n"
                    "INPUT >");
        return;
    }
    //vi behøver ikke endnu et kald på playSplit ved den sidste liste
    //da SeventhHead allerede burde pege på den sidste liste indtil NULL
    if (SRHead!=NULL) {
        for (int i = 0; i<53;i++) {
            FaceupList(SRHead,i);
        }
        playSplit(1,SRHead,&SecondHead);
        playSplit(6,SecondHead,&ThirdHead);
        playSplit(7,ThirdHead,&FourthHead);
        playSplit(8,FourthHead,&FifthHead);
        playSplit(9,FifthHead,&SixthHead);
        playSplit(10,SixthHead,&SeventhHead);

        //Need to free the head in order not to confuse the gamelogic when we play with shuffled head (SRhead)
        ClearList(&head);

    } else {
        for (int i = 0; i<53;i++) {
            FaceupList(head,i);
        }
        playSplit(1,head,&SecondHead);
        playSplit(6,SecondHead,&ThirdHead);
        playSplit(7,ThirdHead,&FourthHead);
        playSplit(8,FourthHead,&FifthHead);
        playSplit(9,FifthHead,&SixthHead);
        playSplit(10,SixthHead,&SeventhHead);
    }



    //sets first card visible pointer to 0 in secondHead to indicate face down card, first two cards in thirdHead etc.
    //we only do this once for the whole play phase, so when a card is revealed, it stays revealed.
    FacedownList(SecondHead, 1);
    FacedownList(ThirdHead,2);
    FacedownList(FourthHead,3);
    FacedownList(FifthHead,4);
    FacedownList(SixthHead,5);
    FacedownList(SeventhHead,6);

    //uses the print from game moves
    GameMovesPrint();

        if (head != NULL && SecondHead!=NULL && ThirdHead!=NULL &&
                FourthHead!=NULL && FifthHead!=NULL && SixthHead!=NULL && SecondHead!=NULL) {

            printf("LAST Command: P\n"
                "Message:OK.\n"
                "INPUT >");
                }else {
                    printf("LAST Command: P\n"
                "Message:OK.\n"
                "INPUT >");
                }
    }

void GameMoves(const char* Operation) {

    char* card = NULL;
    char load[100];
    strcpy(load, Operation);

    //seperates the argument (operation) into 2 strings
    const char* from = strtok(load, "->");
    const char* to = strtok(NULL, "->");

    //if "from" is bigger than 2 example (C1:AC) we seperate the from string into from and a card string.
    if (strlen(from) > 2) {
        char from1[100];
        strcpy(from1, from);
        const char* column = strtok(from1, ":");
        card = strtok(NULL, ":");
        from = column;
    }

    //we now use these "from", "to" and "card" strings for our logik in gameMoves

    //assigns a linked list we want to use, with the help of "from" and "to" strings
    if (strcmp(from,"C1") == 0) {
        if (SRHead != NULL) {
            currentFrom = SRHead;
        }else {
            currentFrom = head;
        }
    } else if (strcmp(from, "C2") == 0) {
        currentFrom = SecondHead;
    } else if (strcmp(from, "C3") == 0) {
        currentFrom = ThirdHead;
    } else if (strcmp(from, "C4") == 0) {
        currentFrom = FourthHead;
    } else if (strcmp(from, "C5") == 0) {
        currentFrom = FifthHead;
    } else if (strcmp(from, "C6") == 0) {
        currentFrom = SixthHead;
    }else if (strcmp(from, "C7") == 0) {
        currentFrom = SeventhHead;
    }else if (strcmp(from, "F1") == 0) {
        currentFrom = Fone;
    }else if (strcmp(from, "F2") == 0) {
        currentFrom = Ftwo;
    }else if (strcmp(from, "F3") == 0) {
        currentFrom = Fthree;
    }else if (strcmp(from, "F4") == 0) {
        currentFrom = Ffour;
    }

    if (strcmp(to, "C1") == 0) {
        if (SRHead != NULL) {
            currentTo = SRHead;
        }else {
            currentTo = head;
        }
    } else if (strcmp(to, "C2") == 0) {
        currentTo = SecondHead;
    }else if (strcmp(to, "C3") == 0) {
        currentTo = ThirdHead;
    }else if (strcmp(to, "C4") == 0) {
        currentTo = FourthHead;
    }else if (strcmp(to, "C5") == 0) {
        currentTo = FifthHead;
    }else if (strcmp(to, "C6") == 0) {
        currentTo = SixthHead;
    }else if (strcmp(to, "C7") == 0) {
        currentTo = SeventhHead;
    }else if (strcmp(to, "F1") == 0) {
        currentTo = Fone;
    }else if (strcmp(to, "F2") == 0) {
        currentTo = Ftwo;
    }else if (strcmp(to, "F3") == 0) {
        currentTo = Fthree;
    }else if (strcmp(to, "F4") == 0) {
        currentTo = Ffour;
    }

    //if we have specified a card in our operation we run this if block
    if (card != NULL) {
        //stops until it has found the specified card
        int found = 0;
        while (currentFrom != NULL && currentFrom->next != NULL) {
            if (strcmp(currentFrom->value,card) == 0) {
                found = 1;
                break;
            }
            currentFrom = currentFrom->next;
        }
        if (strcmp(currentFrom->value,card) == 0) {
            found = 1;
        }

        //checking if the specified card is in the column
        if (found == 0) {
            //print error card is not found in specified column
            GameMovesPrint();
            printf("LAST Command: %s\nMessage: ERROR - the card %s doesn't exist in specified column\nINPUT >", Operation, card);
            return;
        }

        //traversing to the last node in the "to" list
        while (currentTo != NULL && currentTo->next != NULL) {
            currentTo = currentTo->next;
        }

    }else {
        //if we haven't specified a card we run this block
        //here we want to traverse to the last nodes in the "from" and "to" list
        while (currentFrom != NULL && currentFrom->next != NULL) {
            currentFrom = currentFrom->next;
        }

        while (currentTo != NULL && currentTo->next != NULL) {
            currentTo = currentTo->next;
        }

    }
    //Gamemoves check if no errors (TRUE) perform move
        if (GameMovesCheck(currentFrom, currentTo, to, Operation)) {
            // Splitting card/cards from "from" list if it isnt head
            if (currentFrom->prev != NULL) {
                currentFrom->prev->next = NULL;
                currentFrom->prev = NULL;
            } else {
                // Clear the from whole column/foundation if card/cards is/has a header
                if (strcmp(from, "C1") == 0) {
                    if (SRHead != NULL) {
                        SRHead = NULL;
                    }else {
                        head = NULL;
                    }
                }else if (strcmp(from, "C2") == 0) {
                    SecondHead = NULL;
                }else if (strcmp(from, "C3") == 0) {
                    ThirdHead = NULL;
                }else if (strcmp(from, "C4") == 0) {
                    FourthHead = NULL;
                }else if (strcmp(from, "C5") == 0) {
                    FifthHead = NULL;
                }else if (strcmp(from, "C6") == 0) {
                    SixthHead = NULL;
                }else if (strcmp(from, "C7") == 0) {
                    SeventhHead = NULL;
                }else if (strcmp(from, "F1") == 0) {
                    Fone = NULL;
                }else if (strcmp(from, "F2") == 0) {
                    Ftwo = NULL;
                }else if (strcmp(from, "F3") == 0) {
                    Fthree = NULL;
                }else if (strcmp(from, "F4") == 0) {
                    Ffour = NULL;
                }
            }

            // Inserting in "to" list
            if (currentTo == NULL) {
                // If "to" list is NULL insert as a head
                if (strcmp(to, "C1") == 0) {
                    if (SRHead != NULL) {
                        SRHead = currentFrom;
                    }else {
                        head = currentFrom;
                    }
                }else if (strcmp(to, "C2") == 0) {
                    SecondHead = currentFrom;
                }else if (strcmp(to, "C3") == 0) {
                    ThirdHead = currentFrom;
                }else if (strcmp(to, "C4") == 0) {
                    FourthHead = currentFrom;
                }else if (strcmp(to, "C5") == 0) {
                    FifthHead = currentFrom;
                }else if (strcmp(to, "C6") == 0) {
                    SixthHead = currentFrom;
                }else if (strcmp(to, "C7") == 0) {
                    SeventhHead = currentFrom;
                }else if (strcmp(to, "F1") == 0) {
                    Fone = currentFrom;
                }else if (strcmp(to, "F2") == 0) {
                    Ftwo = currentFrom;
                }else if (strcmp(to, "F3") == 0) {
                    Fthree = currentFrom;
                }else if (strcmp(to, "F4") == 0) {
                    Ffour = currentFrom;
                }
            } else {
                // if "to" isn't NULL insert at next pointer from currentTo
                currentTo->next = currentFrom;
                currentFrom->prev = currentTo;
            }
        //printing
        GameMovesPrint();
        printf("Move: Moving %s to %s\n", currentFrom->value, to);
        printf("LAST Command: %s\nMessage: OK\nINPUT >", Operation);

        //prints winning screen if all columns is NULL
        if (SRHead == NULL && head == NULL && SecondHead == NULL && ThirdHead == NULL && FourthHead == NULL && FifthHead == NULL
            && SixthHead == NULL && SeventhHead == NULL) {
            printf("\n\n\n\n\n\t\t\t\t CONGRATULATIONS! YOU HAVE WON!!!\n\n\n\n\n\n");
        }

    }
}

void GameMovesPrint() {
    //temporaty list to print
    Node* temp = NULL;
    if (SRHead != NULL) {
        temp = SRHead;
    }else {
        temp = head;
    }
    Node* list2 = SecondHead;
    Node* list3 = ThirdHead;
    Node* list4 = FourthHead;
    Node* list5 = FifthHead;
    Node* list6 = SixthHead;
    Node* list7 = SeventhHead;
    Node* list8 = Fone;
    Node* list9 = Ftwo;
    Node* list10 = Fthree;
    Node* list11 = Ffour;
    int line = 0;

    //Linked list length counter, to estimate amount of face down cards
    int SecondHeadLength = ListLength(list2);
    int ThirdHeadLength = ListLength(list3);
    int FourthdHeadLength = ListLength(list4);
    int FifthHeadLength = ListLength(list5);
    int SixthHeadLength = ListLength(list6);
    int SeventhHeadLength = ListLength(list7);


    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
    while (temp != NULL || list2 != NULL || list3 != NULL || list4 != NULL || list5 != NULL || list6 != NULL || list7 != NULL || line <= 7) {

        //counter to help witch row we are at
        line++;

        //printing list.
        printf("%s\t", temp ? temp->value : " ");

        //if a column has reached a specific length we use the function FaceupList to make the desired card visible
        if (SecondHeadLength == 1) {
            FaceupList(SecondHead,1);
        }

        if (ThirdHeadLength == 1) {
            FaceupList(ThirdHead,1);
        }
        if (ThirdHeadLength == 2){
            FaceupList(ThirdHead,2);
        }

        if (FourthdHeadLength == 3) {
            FaceupList(FourthHead,3);
        }
        if (FourthdHeadLength == 2){
            FaceupList(FourthHead,2);
        }
        if (FourthdHeadLength == 1){
            FaceupList(FourthHead,1);
        }

        if (FifthHeadLength == 4) {
            FaceupList(FifthHead,4);
        }
        if (FifthHeadLength == 3){
            FaceupList(FifthHead,3);
        }
        if (FifthHeadLength == 2){
            FaceupList(FifthHead,2);
        }
        if(FifthHeadLength == 1) {
            FaceupList(FifthHead,1);
        }

        if (SixthHeadLength == 5) {
            FaceupList(SixthHead,5);
        }
        if (SixthHeadLength == 4) {
            FaceupList(SixthHead,4);
        }
        if (SixthHeadLength == 3) {
            FaceupList(SixthHead,3);
        }
        if (SixthHeadLength == 2) {
            FaceupList(SixthHead,2);
        }
        if (SixthHeadLength == 1) {
            FaceupList(SixthHead,1);
        }

        if (SeventhHeadLength == 6) {
            FaceupList(SeventhHead,6);
        }
        if (SeventhHeadLength == 5) {
            FaceupList(SeventhHead,5);
        }
        if (SeventhHeadLength == 4) {
            FaceupList(SeventhHead,4);
        }
        if (SeventhHeadLength == 3) {
            FaceupList(SeventhHead,3);
        }
        if (SeventhHeadLength == 2) {
            FaceupList(SeventhHead,2);
        }
        if (SeventhHeadLength == 1) {
            FaceupList(SeventhHead,1);
        }

        //if list is NULL -> prints " ",
        //if list isn't NULL -> is list visible? if "1" print it's value if "0" print "[]"
        printf("%s\t", list2 ? (list2->visible ? list2->value : "[]") : " ");
        printf("%s\t", list3 ? (list3->visible ? list3->value : "[]") : " ");
        printf("%s\t", list4 ? (list4->visible ? list4->value : "[]") : " ");
        printf("%s\t", list5 ? (list5->visible ? list5->value : "[]") : " ");
        printf("%s\t", list6 ? (list6->visible ? list6->value : "[]") : " ");
        printf("%s\t", list7 ? (list7->visible ? list7->value : "[]") : " ");

        // Move to next only if not NULL
        if (temp) temp = temp->next;
        if (list2) list2 = list2->next;
        if (list3) list3 = list3->next;
        if (list4) list4 = list4->next;
        if (list5) list5 = list5->next;
        if (list6) list6 = list6->next;
        if (list7) list7 = list7->next;
        if (line == 1) {
            if (list8 == NULL) {
                printf("\t[]\tF1");
            }else {
                if (list8->next != NULL) {
                    while (list8->next != NULL) {
                        list8 = list8->next;
                    }
                }
                printf("\t%s\tF1", list8->value);
            }
        }else if (line == 3) {
            if (list9 == NULL) {
                printf("\t[]\tF2");
            }else {
                if (list9->next != NULL) {
                    while (list9->next != NULL) {
                        list9 = list9->next;
                    }
                }
                printf("\t%s\tF2", list9->value);
            }
        }else if (line == 5) {
            if (list10 == NULL) {
                printf("\t[]\tF3");
            }else {
                if (list10->next != NULL) {
                    while (list10->next != NULL) {
                        list10 = list10->next;
                    }
                }
                printf("\t%s\tF3", list10->value);
            }
        }else if (line == 7) {
            if (list11 == NULL) {
                printf("\t[]\tF4");
            }else {
                if (list11->next != NULL) {
                    while (list11->next != NULL) {
                        list11 = list11->next;
                    }
                }
                printf("\t%s\tF4", list11->value);
            }
        }

        printf("\n");
    }
}

char GameMovesCheck(Node* currentFrom, Node* currentTo, const char* to, const char* Operation) {
    //checks if currentFrom has a card
    if (currentFrom == NULL) {
        GameMovesPrint();
        printf("LAST Command: %s\nMessage: ERROR - source is empty\nINPUT >", Operation);
        return 0;
    }

    if (currentFrom->visible == 0) {
        GameMovesPrint();
        printf("LAST Command: %s\nMessage: ERROR - card isn't visible\nINPUT >", Operation);
        return 0;
    }

    //takes the value from "from" source
    char* valFrom = currentFrom->value;

    //takes the value from "to" source, but if currentTo is NULL set it to NULL
    char* valTo = NULL;
    if (currentTo != NULL && currentTo->value != NULL) {
        valTo = currentTo->value;
    }

    char rankFromChar = valFrom[0];
    char suitFrom = valFrom[1];

    //the currentTo can be NULL so we need to assign empty values if its NULL
    char rankToChar = '\0';
    char suitTo = '\0';
    if (valTo != NULL) {
        rankToChar = valTo[0];
        suitTo = valTo[1];
    }


    int rankFrom = rankCharToInt(rankFromChar);
    int rankTo = rankCharToInt(rankToChar);

    // to foundation validation
    if (strcmp(to, "F1") == 0 || strcmp(to, "F2") == 0 || strcmp(to, "F3") == 0 || strcmp(to, "F4") == 0) {
        //check if it is bottom card moving
        if (currentFrom->next != NULL) {
            GameMovesPrint();
            printf("LAST Command: %s\nMessage: ERROR - card isn't bottom card\nINPUT >", Operation);
            return 0;
        }

        if (currentTo == NULL || currentTo->value == NULL || valTo[0] == '\0') {
            //check if first card in foundation is Ace
            if (rankFrom != 1) {
                GameMovesPrint();
                printf("LAST Command: %s\nMessage: ERROR - foundation must start with Ace\nINPUT >", Operation);
                return 0;
            }
        } else {
            //check if card moving is one highter than card in foundation
            if (rankFrom != rankTo + 1) {
                GameMovesPrint();
                printf("LAST Command: %s\nMessage: ERROR - rank isn't one higher\nINPUT >", Operation);
                return 0;
            }
            //checks if cards are of same suit
            if (suitFrom != suitTo) {
                GameMovesPrint();
                printf("LAST Command: %s\nMessage: ERROR - suit is not the same\nINPUT >", Operation);
                return 0;
            }
        }
    } else {
        // Column validation
        if (currentTo == NULL || currentTo->value == NULL || valTo[0] == '\0') {
            if (rankFrom != 13) {
                GameMovesPrint();
                printf("LAST Command: %s\nMessage: ERROR - column must start with King\nINPUT >", Operation);
                return 0;
            }
        }else {
            //checks if the moving card is one lower than the stationary card
            if (rankTo != rankFrom + 1) {
                GameMovesPrint();
                printf("LAST Command: %s\nMessage: ERROR - rank isn't one lower\nINPUT >", Operation);
                return 0;
            }
            //checks if cards is different suit
            if (suitFrom == suitTo) {
                GameMovesPrint();
                printf("LAST Command: %s\nMessage: ERROR - suit is the same\nINPUT >", Operation);
                return 0;
            }
        }
    }

    return 1;
}

//function that converts rank (charecters) to integers
int rankCharToInt(char rank){
    if (rank >= '2' && rank <= '9') {
        return rank - '0';
    }
    if (rank == 'A') {
        return 1;
    }
    if (rank == 'T') {
        return 10;
    }
    if (rank == 'J') {
        return 11;
    }
    if (rank == 'Q') {
        return 12;
    }
    if (rank == 'K') {
        return 13;
    }
}

//function to calculate the length of a linked list
int ListLength(Node* list) {
    int count = 0;
    while (list != NULL) {
        list = list->next;
        count++;
    }
    return count;
}

//function to change the visible pointer to 0 (face down) until argument is met
void FacedownList(Node* list, int num) {
    int count = 0;
    while (count < num) {
        list->visible = 0;
        list = list->next;
        count++;
    }
}

//function to change the visible pointer to 1 (face up) when the argument is met
void FaceupList(Node* list, int num) {
    int count = 1;
    while (count < num) {
        list = list->next;
        count++;
    }
    list->visible = 1;
}

//function to free a linked list
void ClearList(Node** head) {
    Node* current = *head;
    Node* next;

    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }
    *head = NULL;
}

//function to save the linked list in the argument, for the purpose to restart the playphase with an unmodifed deck
Node* saveDeck(Node* head) {
    if (head == NULL) {
        return NULL;
    }

    Node* newHead = NULL;
    Node* newPrev = NULL;

    while (head != NULL) {
        // Create a new node
        Node* newNode = createCard(head->value);
        newNode->next = NULL;
        newNode->prev = newPrev;

        if (newHead == NULL) {
            // First node
            newHead = newNode;
        } else {
            newPrev->next = newNode;
        }

        newPrev = newNode;
        head = head->next;
    }

    return newHead;
}
