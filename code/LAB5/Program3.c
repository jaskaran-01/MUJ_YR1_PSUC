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
        case 1 :printf("\n\nTuesday");
                break;
        case 1 :printf("\n\nWednesday");
                break;
        case 1 :printf("\n\nThursday");
                break;
        case 1 :printf("\n\nFriday");
                break;
        case 1 :printf("\n\nSaturay");
                break;
        case 1 :printf("\n\nSunday");
                break;
        default:printf("\n\nWrong choice");
                break;
    }
}