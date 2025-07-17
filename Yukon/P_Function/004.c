void P() {
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
                printf("%s\t%s\t%s\t%s\t%s\t%s\t%s", SRTemp->value,"[]","[]","[]","[]","[]","[]");
                SRTemp=SRTemp->next;
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;

            } else if (row == 1) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,"[]","[]","[]","[]","[]");
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==2) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,"[]","[]","[]");
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==3) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,"[]","[]","[]");
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if (row ==4) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,"[]","[]");
                SRlist2=SRlist2->next;
                SRlist3=SRlist3->next;
                SRlist4=SRlist4->next;
                SRlist5=SRlist5->next;
                SRlist6=SRlist6->next;
                SRlist7=SRlist7->next;
            }else if ( row ==5) {
                printf("\t%s\t%s\t%s\t%s\t%s\t%s",SRlist2->value,SRlist3->value,SRlist4->value,SRlist5->value,SRlist6->value,"[]");
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
    } else {
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
            printf("%s\t%s\t%s\t%s\t%s\t%s\t%s", temp->value,"[]","[]","[]","[]","[]","[]");
            temp=temp->next;
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;

        } else if (row == 1) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,"[]","[]","[]","[]","[]");
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==2) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,"[]","[]","[]","[]");
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==3) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,"[]","[]","[]");
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if (row ==4) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,"[]","[]");
            list2=list2->next;
            list3=list3->next;
            list4=list4->next;
            list5=list5->next;
            list6=list6->next;
            list7=list7->next;
        }else if ( row ==5) {
            printf("\t%s\t%s\t%s\t%s\t%s\t%s",list2->value,list3->value,list4->value,list5->value,list6->value,"[]");
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
    }

    //vi behøver ikke endnu et kald på playSplit ved den sidste liste
    //da SeventhHead allerede burde pege på den sidste liste indtil NULL

    //TODO opdater print funktion, så den er scalable til game moves.

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
