#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//char OperationCheck(char input[]);
void Initial();
void LD(char filename[]);
void SW();
void LDprint(char input[]);
void SD(char filename[]);

typedef struct Node {
    char *value;
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


Node* SRHead = NULL;
Node* previous = NULL;
Node* SRprevious = NULL;
int rNum;
char Deckarray[52][3];
char Extra[10];
bool isP = false;
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



const char* values[52] = {"AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "TC", "JC", "QC", "KC",
                        "AD", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "TD", "JD", "QD", "KD",
                        "AH", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "TH", "JH", "QH", "KH",
                        "AS", "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "TS", "JS", "QS", "KS"};

int main(void) {
    srand(time(NULL));
    Initial();

    char Input[100];
    char Operation[20];    //Initializing Operation
    char ExtraOperation[20];

    char playInput[100];
    char playOperation[20];
    char playExtraOperation[20];






    //exit program if operation is QQ
    while (strcmp(Operation, "QQ") != 0) {

        //Takes inputs from the terminal and puts it in our Input array
        if (fgets(Input, sizeof(Input), stdin) != NULL) {

            //returns the number of inputs succesfully assigned and matched from our input array.
            //If there is only one string in our Input, then will Operation only be assigned, and it
            //will return 1.
            int Operations = sscanf(Input, "%s %s", Operation, ExtraOperation);

            if ((Operations == 1) && (strcmp(Operation, "LD") == 0)) {
                LD("None");
            } else if ((Operations == 2) && (strcmp(Operation, "LD") == 0)) {
                LD(ExtraOperation);
            }else if ((Operations == 1) && (strcmp(Operation, "SW") == 0)) {
                SW();
            }else if ((Operations == 1) && (strcmp(Operation, "SD") == 0)) {
                SD("None");
            }else if ((Operations == 2) && (strcmp(Operation, "SD") == 0)) {
                SD(ExtraOperation);
            }else if ((Operations == 1) && (strcmp(Operation, "SI") == 0)) {
                deckSplit(0);
            } else if ((Operations == 2) && (strcmp(Operation, "SI") == 0)) {
                int num = atoi(ExtraOperation);
                deckSplit(num);
            } else if ((Operations == 1) && (strcmp(Operation, "SR") == 0)) {
                shuffleRandom(head);
            } else if ((Operations == 1) && (strcmp(Operation, "P") == 0)){

                P();
                while (strcmp(playOperation, "Q") != 0) {
                    if (fgets(playInput, sizeof(playInput), stdin) != NULL) {
                        int playOperations = sscanf(playInput, "%s %s", playOperation, playExtraOperation);
                        if ((playOperations == 1) && (strcmp(playOperation, "LD") == 0)) {
                            printf("LAST Command: LD\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        }else if ((playOperations == 2) && (strcmp(playOperation, "LD") == 0)) {
                            printf("LAST Command: LD\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        }else if ((playOperations == 1) && (strcmp(playOperation, "SW") == 0)) {
                            printf("LAST Command: SW\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        } else if ((playOperations == 2) && (strcmp(playOperation, "SW") == 0)) {
                            printf("LAST Command: SW\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        }else if ((playOperations == 1) && (strcmp(playOperation, "SD") == 0)) {
                            printf("LAST Command: SD\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        } else if ((playOperations == 2) && (strcmp(playOperation, "SD") == 0)) {
                            printf("LAST Command: SD\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        }else if ((playOperations == 1) && (strcmp(playOperation, "SI") == 0)) {
                            printf("LAST Command: SI\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        } else if ((playOperations == 2) && (strcmp(playOperation, "SI") == 0)) {
                            printf("LAST Command: LI\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        } else if ((playOperations == 1) && (strcmp(playOperation, "SR") == 0)) {
                            printf("LAST Command: SR\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        } else if ((playOperations == 2) && (strcmp(playOperation, "SR") == 0)) {
                            printf("LAST Command: SR\n"
                    "Message: ERROR: Invalid command during play phase...\n"
                    "INPUT >");

                        }
                    }
                }


                }
        }
    }
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

    if (strcmp(filename, "None") == 0) {

        createDeck();

        LDprint("OK");

    }else{
        if (createDeckFile(filename)) {
            LDprint("OK");
        }
    }
}


Node* createCard(char* value) {

    Node* newCard = (Node*)malloc(sizeof(Node));

    newCard->value = (char*)malloc(strlen(value) + 1);  // +1 for '\0'

    strcpy(newCard->value, value);

    newCard -> next = NULL;
    newCard -> prev = NULL;

    return newCard;
}

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
        LDprint("ERROR: no existing file.");
        return 0;
    }

    //check if deck/file is too small
    for (int i = 0; i < 52; i++) {
        if (strcmp(Deckarray[i], "") == 0) {
            LDprint("ERROR deck is too small");
            return 0;
        }
    }

    //check if deck/file is too big
    if (strcmp(Extra, "") != 0) {
        LDprint("ERROR deck is too big");
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
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF1\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF2\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF3\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF4\n"
           "[]\t[]\t[]\t\t\t\t\t\n"
           "LAST Command: LD\n"
           "Message: ERROR at line %d in the file \n"
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
                        "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF1\n"
                        "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
                        "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF2\n"
                        "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
                        "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF3\n"
                        "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
                        "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF4\n"
                        "[]\t[]\t[]\t\t\t\t\t\n"
                        "LAST Command: LD\n"
                        "Message: ERROR duplicate detected: %s \n"
                        "INPUT >", Deckarray[i]);
                        return 0;
                    }
                }
            }
        }

        fclose(file);

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

void LDprint(char input[]) {
    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF1\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF2\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF3\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\n"
           "[]\t[]\t[]\t[]\t[]\t[]\t[]\t[]\tF4\n"
           "[]\t[]\t[]\t\t\t\t\t\n"
           "LAST Command: LD\n"
           "Message: %s \n"
           "INPUT >", input);
}

void SW() {
    Node* temp = head;
    int line = 0;

    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
    for (int row = 0; row < 8; row++) {
        for (int column = 0; column < 7; column++) {
            if ((column < 3 && row < 8) || (column >= 3 && row < 7)) {
                if (temp) {
                    printf("%s\t", temp->value);
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
        printf("LAST Command: SW\n"
            "Message:OK.\n"
            "INPUT >");
    } else {
        printf("LAST Command: SW\n"
           "Message: ERROR: No deck provided.\n"
           "INPUT >");
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

                Node* temp = head;
                int line = 0;

                printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
                for (int row = 0; row < 8; row++) {
                    for (int column = 0; column < 7; column++) {
                        if ((column < 3 && row < 8) || (column >= 3 && row < 7)) {
                            if (temp) {
                                printf("%s\t", temp->value);
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
                    printf("LAST Command: SI\n"
                        "Message:OK.\n"
                        "INPUT >");
                } else if (head==NULL) {
                    printf("LAST Command: SI\n"
                       "Message: ERROR: No deck provided.\n"
                       "INPUT >");
                }
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

                Node* temp = SRHead;
                int line = 0;

                printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
                for (int row = 0; row < 8; row++) {
                    for (int column = 0; column < 7; column++) {
                        if ((column < 3 && row < 8) || (column >= 3 && row < 7)) {
                            if (temp) {
                                printf("%s\t", temp->value);
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
                    printf("LAST Command: SI\n"
                        "Message:OK.\n"
                        "INPUT >");
                } else if (head==NULL) {
                    printf("LAST Command: SI\n"
                       "Message: ERROR: No deck provided.\n"
                       "INPUT >");
                }
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

                    Node* temp = head;
                    int line = 0;

                    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
                    for (int row = 0; row < 8; row++) {
                        for (int column = 0; column < 7; column++) {
                            if ((column < 3 && row < 8) || (column >= 3 && row < 7)) {
                                if (temp) {
                                    printf("%s\t", temp->value);
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
                        printf("LAST Command: SI\n"
                            "Message:OK.\n"
                            "INPUT >");
                    } else if (head==NULL) {
                        printf("LAST Command: SI\n"
                           "Message: ERROR: No deck provided.\n"
                           "INPUT >");
                    }
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

                Node* temp = SRHead;
                int line = 0;

                printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
                for (int row = 0; row < 8; row++) {
                    for (int column = 0; column < 7; column++) {
                        if ((column < 3 && row < 8) || (column >= 3 && row < 7)) {
                            if (temp) {
                                printf("%s\t", temp->value);
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
                    printf("LAST Command: SI\n"
                        "Message:OK.\n"
                        "INPUT >");
                } else if (head==NULL) {
                    printf("LAST Command: SI\n"
                       "Message: ERROR: No deck provided.\n"
                       "INPUT >");
                }
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
        Node* temp = head;

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
                //printf("%d\n", rNumArray[i]);
                i++;
            }

        }

        //Loop skal bruge rNumArray til at fortælle hvilket kort fra head, som skal indsættes i en ny linked list
        //Med andre ord er rNumArray en position pointer (tror jeg)

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
            else{ //logik til at gøre det modsatte, så link2->link1->link2 men kun hvis der er et link1
                if (j == 51) {
                    newCard->next = NULL;
                }
                SRprevious ->next = newCard;
                newCard->prev = SRprevious;
                SRprevious = newCard;
            }
        }


        Node* temp = SRHead;
        int line = 0;

        printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
        for (int row = 0; row < 8; row++) {
            for (int column = 0; column < 7; column++) {
                if ((column < 3 && row < 8) || (column >= 3 && row < 7)) {
                    if (temp) {
                        printf("%s\t", temp->value);
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
            printf("LAST Command: SR\n"
                "Message:OK.\n"
                "INPUT >");
        }
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

        playSplit(1,head,&SecondHead);
        playSplit(6,SecondHead,&ThirdHead);
        playSplit(7,ThirdHead,&FourthHead);
        playSplit(8,FourthHead,&FifthHead);
        playSplit(9,FifthHead,&SixthHead);
        playSplit(10,SixthHead,&SeventhHead);
        Node* temp = head;
    Node* list2 = SecondHead;
    Node* list3 = ThirdHead;
    Node* list4 = FourthHead;
    Node* list5 = FifthHead;
    Node* list6 = SixthHead;
    Node* list7 = SeventhHead;
    int line = 0;

    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
    for (int row = 0; row < 11; row++) {
        if ((row == 0)) {
            printf("%s\t%s\t%s\t%s\t%s\t%s\t%s", temp->value,list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
            temp=temp->next;
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;

        } else if (row == 1) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==2) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==3) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==4) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if ( row ==5) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==6) {
            printf("\t\t%s\t%s\t%s\t%s\t%s",list3->value,list4->value,list5->value,list6->value,list7->value);
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if ( row ==7) {
            printf("\t\t\t%s\t%s\t%s\t%s",list4->value,list5->value,list6->value,list7->value);
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==8) {
            printf("\t\t\t\t%s\t%s\t%s\t",list5->value,list6->value,list7->value);
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if ( row ==9) {
            printf("\t\t\t\t\t%s\t%s",list6->value,list7->value);
            list6=list6->next;
            list7=list7->next;
        }else if ( row ==10) {
            printf("\t\t\t\t\t\t%s",list7->value);
            list7=list7->next;
        }

        line++;
        if (line == 1) {
            printf("\t[]\tF1");
        }else if (line == 3) {
            printf("\t[]\tF2");
        }else if (line == 5) {
            printf("\t[]\tF3");
        }else if (line == 7) {
            printf("\t[]\tF4");
        }
        printf("\n");
    }
    if (SRHead!=NULL) {
        playSplit(1,SRHead,&SecondHead);
        playSplit(6,SecondHead,&ThirdHead);
        playSplit(7,ThirdHead,&FourthHead);
        playSplit(8,FourthHead,&FifthHead);
        playSplit(9,FifthHead,&SixthHead);
        playSplit(10,SixthHead,&SeventhHead);

        Node* SRTemp = SRHead;
    Node* SRlist2 = SecondHead;
    Node* SRlist3 = ThirdHead;
    Node* SRlist4 = FourthHead;
    Node* SRlist5 = FifthHead;
    Node* SRlist6 = SixthHead;
    Node* SRlist7 = SeventhHead;
    int SRline = 0;

    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
    for (int row = 0; row < 11; row++) {

            if ((row == 0)) {
                printf("%s\t%s\t%s\t%s\t%s\t%s\t%s", SRTemp->value,SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRTemp=SRTemp->next;
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;

            } else if (row == 1) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==2) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==3) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==4) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if ( row ==5) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==6) {
                printf("\t\t%s\t%s\t%s\t%s\t%s",SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if ( row ==7) {
                printf("\t\t\t%s\t%s\t%s\t%s",SRlist4->value,SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==8) {
                printf("\t\t\t\t%s\t%s\t%s\t",SRlist5->value,SRlist6->value,SRlist7->value);
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if ( row ==9) {
                printf("\t\t\t\t\t%s\t%s",SRlist6->value,SRlist7->value);
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if ( row ==10) {
                printf("\t\t\t\t\t\t%s",SRlist7->value);
                SRlist7=SRlist7->next;
            }

                SRline++;
                if (SRline == 1) {
                    printf("\t[]\tF1");
                }else if (SRline == 3) {
                    printf("\t[]\tF2");
                }else if (SRline == 5) {
                    printf("\t[]\tF3");
                }else if (SRline == 7) {
                    printf("\t[]\tF4");
                }
                printf("\n");


        }
    }

    //vi behøver ikke endnu et kald på playSplit ved den sidste liste
    //da SeventhHead allerede burde pege på den sidste liste indtil NULL

    //TODO opdater print funktion, så den er scalable til game moves.
   /* Node* SRTemp = head;
    Node* list2 = SecondHead;
    Node* list3 = ThirdHead;
    Node* list4 = FourthHead;
    Node* list5 = FifthHead;
    Node* list6 = SixthHead;
    Node* list7 = SeventhHead;
    int line = 0;

    printf("c1\tc2\tc3\tc4\tc5\tc6\tc7\n\n");
    for (int row = 0; row < 11; row++) {

            if ((row == 0)) {
                printf("%s\t%s\t%s\t%s\t%s\t%s\t%s", temp->value,list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
                temp=temp->next;
                list2=list2->next;
                list3=list3->next;
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;

            } else if (row == 1) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
                list2=list2->next;
                list3=list3->next;
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if (row ==2) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
                list2=list2->next;
                list3=list3->next;
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if (row ==3) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
                list2=list2->next;
                list3=list3->next;
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if (row ==4) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
                list2=list2->next;
                list3=list3->next;
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if ( row ==5) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,list7->value);
                list2=list2->next;
                list3=list3->next;
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if (row ==6) {
                printf("\t\t%s\t%s\t%s\t%s\t%s",list3->value,list4->value,list5->value,list6->value,list7->value);
                list3=list3->next;
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if ( row ==7) {
                printf("\t\t\t%s\t%s\t%s\t%s",list4->value,list5->value,list6->value,list7->value);
                list4=list4->next;
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if (row ==8) {
                printf("\t\t\t\t%s\t%s\t%s\t",list5->value,list6->value,list7->value);
                list5=list5->next;
                list6=list6->next;
                list7=list7->next;
            }else if ( row ==9) {
                printf("\t\t\t\t\t%s\t%s",list6->value,list7->value);
                list6=list6->next;
                list7=list7->next;
            }else if ( row ==10) {
                printf("\t\t\t\t\t\t%s",list7->value);
                list7=list7->next;
            }

                line++;
                if (line == 1) {
                    printf("\t[]\tF1");
                }else if (line == 3) {
                    printf("\t[]\tF2");
                }else if (line == 5) {
                    printf("\t[]\tF3");
                }else if (line == 7) {
                    printf("\t[]\tF4");
                }
                printf("\n");


        }*/
        if (head != NULL && SecondHead!=NULL && ThirdHead!=NULL &&
                FourthHead!=NULL && FifthHead!=NULL && SixthHead!=NULL && SecondHead!=NULL) {
            printf("LAST Command: P\n"
                "Message:OK.\n"
                "INPUT >");
                } else if (head==NULL && SecondHead==NULL && ThirdHead==NULL &&
                    FourthHead==NULL && FifthHead==NULL && SixthHead==NULL && SecondHead==NULL) {
                    printf("LAST Command: P\n"
                    "Message: ERROR: No deck provided.\n"
                    "INPUT >");
                }
    }
