#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "globals.h"

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
