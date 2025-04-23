//
// Created by sande on 4/23/2025.
//

#ifndef GLOBALS_H
#define GLOBALS_H
typedef struct Node {
    char *value;
    struct Node *prev;
    struct Node *next;
} Node;

// 7 heads for play phase
extern Node* head;
extern Node* SecondHead;
extern Node* ThirdHead;
extern Node* FourthHead;
extern Node* FifthHead;
extern Node* SixthHead;
extern Node* SeventhHead;
extern Node* temp;

// Others
extern Node* SRHead;
extern Node* previous;
extern Node* SRprevious;
#endif //GLOBALS_H
