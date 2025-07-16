//Must have variables to run SR() test method
//KORT TIL TEST
int h2 = 0;
int h3 = 0;
int h4 = 0;
int h5 = 0;
int h6 = 0;
int h7 = 0;
int h8 = 0;
int h9 = 0;
int Th = 0;
int Jh = 0;
int Qh = 0;
int Kh = 0;
int Ah = 0;

int s2 = 0;
int s3 = 0;
int s4 = 0;
int s5 = 0;
int s6 = 0;
int s7 = 0;
int s8 = 0;
int s9 = 0;
int Ts = 0;
int Js = 0;
int Qs = 0;
int Ks = 0;
int As = 0;

int c2 = 0;
int c3 = 0;
int c4 = 0;
int c5 = 0;
int c6 = 0;
int c7 = 0;
int c8 = 0;
int c9 = 0;
int Tc = 0;
int Jc = 0;
int Qc = 0;
int Kc = 0;
int Ac = 0;

int d2 = 0;
int d3 = 0;
int d4 = 0;
int d5 = 0;
int d6 = 0;
int d7 = 0;
int d8 = 0;
int d9 = 0;
int Td = 0;
int Jd = 0;
int Qd = 0;
int Kd = 0;
int Ad = 0;


//SR test method
//Replace the original SR() with this method to test 100 cases


void shuffleRandom(Node* head) {
    // skal vælge et random kort fra decket og sætte på position x i et nyt deck
    for (int i=0;i<99;i++) {
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
            for (int j=0;j<1;j++) {

                Node* pointer = head;

                for (int i=0;i<rNumArray[j];i++) {
                    if (pointer == NULL) {
                        break;
                    }

                    pointer = pointer->next;
                }

                Node* newCard = createCard(pointer->value);
                printf("%s\n", newCard->value);

                if (strcmp(newCard->value, "2H") == 0) {
                    h2++;

                }
                if (strcmp(newCard->value, "3H") == 0) {
                    h3++;

                }
                if (strcmp(newCard->value, "4H") == 0) {
                    h4++;

                }
                if (strcmp(newCard->value, "5H") == 0) {
                    h5++;

                }
                if (strcmp(newCard->value, "6H") == 0) {
                    h6++;

                }
                if (strcmp(newCard->value, "7H") == 0) {
                    h7++;

                }
                if (strcmp(newCard->value, "8H") == 0) {
                    h8++;

                }
                if (strcmp(newCard->value, "9H") == 0) {
                    h9++;

                }
                if (strcmp(newCard->value, "TH") == 0) {
                    Th++;

                }
                if (strcmp(newCard->value, "JH") == 0) {
                    Jh++;

                }
                if (strcmp(newCard->value, "QH") == 0) {
                    Qh++;

                }
                if (strcmp(newCard->value, "KH") == 0) {
                    Kh++;

                }
                if (strcmp(newCard->value, "AH") == 0) {
                    Ah++;

                }

                //s
                if (strcmp(newCard->value, "2S") == 0) {
                    s2++;

                }
                if (strcmp(newCard->value, "3S") == 0) {
                    s3++;

                }
                if (strcmp(newCard->value, "4S") == 0) {
                    s4++;

                }
                if (strcmp(newCard->value, "5S") == 0) {
                    s5++;

                }
                if (strcmp(newCard->value, "6S") == 0) {
                    s6++;

                }
                if (strcmp(newCard->value, "7S") == 0) {
                    s7++;

                }
                if (strcmp(newCard->value, "8S") == 0) {
                    s8++;

                }
                if (strcmp(newCard->value, "9S") == 0) {
                    s9++;

                }
                if (strcmp(newCard->value, "TS") == 0) {
                    Ts++;

                }
                if (strcmp(newCard->value, "JS") == 0) {
                    Js++;

                }
                if (strcmp(newCard->value, "QS") == 0) {
                    Qs++;

                }
                if (strcmp(newCard->value, "KS") == 0) {
                    Ks++;

                }
                if (strcmp(newCard->value, "AS") == 0) {
                    As++;

                }
                //c
                if (strcmp(newCard->value, "2C") == 0) {
                    c2++;

                }
                if (strcmp(newCard->value, "3C") == 0) {
                    c3++;

                }
                if (strcmp(newCard->value, "4C") == 0) {
                    c4++;

                }
                if (strcmp(newCard->value, "5C") == 0) {
                    c5++;

                }
                if (strcmp(newCard->value, "6C") == 0) {
                    c6++;

                }
                if (strcmp(newCard->value, "7C") == 0) {
                    c7++;

                }
                if (strcmp(newCard->value, "8C") == 0) {
                    c8++;

                }
                if (strcmp(newCard->value, "9C") == 0) {
                    c9++;

                }
                if (strcmp(newCard->value, "TC") == 0) {
                    Tc++;

                }
                if (strcmp(newCard->value, "JC") == 0) {
                    Jc++;

                }
                if (strcmp(newCard->value, "QC") == 0) {
                    Qc++;

                }
                if (strcmp(newCard->value, "KC") == 0) {
                    Kc++;

                }
                if (strcmp(newCard->value, "AC") == 0) {
                    Ac++;

                }
                //d
                if (strcmp(newCard->value, "2D") == 0) {
                    d2++;

                }
                if (strcmp(newCard->value, "3D") == 0) {
                    d3++;

                }
                if (strcmp(newCard->value, "4D") == 0) {
                    d4++;

                }
                if (strcmp(newCard->value, "5D") == 0) {
                    d5++;

                }
                if (strcmp(newCard->value, "6D") == 0) {
                    d6++;

                }
                if (strcmp(newCard->value, "7D") == 0) {
                    d7++;

                }
                if (strcmp(newCard->value, "8D") == 0) {
                    d8++;

                }
                if (strcmp(newCard->value, "9D") == 0) {
                    d9++;

                }
                if (strcmp(newCard->value, "TD") == 0) {
                    Td++;

                }
                if (strcmp(newCard->value, "JD") == 0) {
                    Jd++;

                }
                if (strcmp(newCard->value, "QD") == 0) {
                    Qd++;

                }
                if (strcmp(newCard->value, "KD") == 0) {
                    Kd++;

                }
                if (strcmp(newCard->value, "AD") == 0) {
                    Ad++;

                }



            }

        }
    }

    printf("%s \tab %d\n","2H",h2);
        printf("%s \tab %d\n","3H",h3);
        printf("%s \tab %d\n","4H",h4);
        printf("%s \tab %d\n","5H",h5);
        printf("%s \tab %d\n","6H",h6);
        printf("%s \tab %d\n","7H",h7);
        printf("%s \tab %d\n","8H",h8);
        printf("%s \tab %d\n","9H",h9);
        printf("%s \tab %d\n","TH",Th);
        printf("%s \tab %d\n","JH",Jh);
        printf("%s \tab %d\n","QH",Qh);
        printf("%s \tab %d\n","KH",Kh);
        printf("%s \tab %d\n","AH",Ah);

        //s
        printf("%s \tab %d\n","2S",s2);
        printf("%s \tab %d\n","3S",s3);
        printf("%s \tab %d\n","4S",s4);
        printf("%s \tab %d\n","5S",s5);
        printf("%s \tab %d\n","6S",s6);
        printf("%s \tab %d\n","7S",s7);
        printf("%s \tab %d\n","8S",s8);
        printf("%s \tab %d\n","9S",s9);
        printf("%s \tab %d\n","TS",Ts);
        printf("%s \tab %d\n","JS",Js);
        printf("%s \tab %d\n","QS",Qs);
        printf("%s \tab %d\n","KS",Ks);
        printf("%s \tab %d\n","AS",As);

        //c
        printf("%s \tab %d\n","2C",c2);
        printf("%s \tab %d\n","3C",c3);
        printf("%s \tab %d\n","4C",c4);
        printf("%s \tab %d\n","5C",c5);
        printf("%s \tab %d\n","6C",c6);
        printf("%s \tab %d\n","7C",c7);
        printf("%s \tab %d\n","8C",c8);
        printf("%s \tab %d\n","9C",c9);
        printf("%s \tab %d\n","TC",Tc);
        printf("%s \tab %d\n","JC",Jc);
        printf("%s \tab %d\n","QC",Qc);
        printf("%s \tab %d\n","KC",Kc);
        printf("%s \tab %d\n","AC",Ac);

        //d
        printf("%s \tab %d\n","2D",d2);
        printf("%s \tab %d\n","3D",d3);
        printf("%s \tab %d\n","4D",d4);
        printf("%s \tab %d\n","5D",d5);
        printf("%s \tab %d\n","6D",d6);
        printf("%s \tab %d\n","7D",d7);
        printf("%s \tab %d\n","8D",d8);
        printf("%s \tab %d\n","9D",d9);
        printf("%s \tab %d\n","TD",Td);
        printf("%s \tab %d\n","JD",Jd);
        printf("%s \tab %d\n","QD",Qd);
        printf("%s \tab %d\n","KD",Kd);
        printf("%s \tab %d\n","AD",Ad);

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
