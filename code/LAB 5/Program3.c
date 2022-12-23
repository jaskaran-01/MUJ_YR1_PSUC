/*
Write a program to program to input the number of week’s days (1-7) and translate to its
equivalent name of the day of the week
*/

#include<stdio.h>
void main(){
    int choice;
    printf("Enter day number: ");
    scanf("%d",&choice);
    switch(choice){
        case 1 :printf("\n\nMonday");
                break;
        case 2 :printf("\n\nTuesday");
                break;
        case 3 :printf("\n\nWednesday");
                break;
        case 4 :printf("\n\nThursday");
                break;
        case 5 :printf("\n\nFriday");
                break;
        case 6 :printf("\n\nSaturay");
                break;
        case 7 :printf("\n\nSunday");
                break;
        default:printf("\n\nWrong choice");
                break;
    }
}