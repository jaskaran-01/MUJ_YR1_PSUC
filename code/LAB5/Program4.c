/*
Write a program to design a calculator that performs addition, subtraction, minus, and division
operation. This program inputs two operands and an operator and then displays the calculated
results.
*/
#include<stdio.h>
void main(){
    printf("Enter algebric expression:  ");
    char operator;
    int a,b;
    scanf("%d%c%d",&a,&operator,&b);
    switch(operator){
        case'+':printf("Sum= %d",(a+b));
                break;
        case'-':printf("Difference= %d",(a-b));
                break;
        case'/':printf("quotient= %d\t ",(a/b));
                printf("remainder=%d",(a%b));
                break;
        case'*':printf("Multiple= %d",(a*b));
                break;
        default:printf("wrong operation");
                break;
    }
}