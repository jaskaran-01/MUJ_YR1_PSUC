/*
Write a program to reverse a given number
Ex: 1234 reverse=4*10 3 +3 * 10 2 + 2 * 10 1 + 1 * 10 0 =4321 
*/
#include<stdio.h>
void main(){
    int num,copy,rev=0;
    printf("Enter a number to reverse :");
    scanf("%d",&num);
    copy=num;
    for(;copy>0;copy/=10){
        rev=rev*10+(copy%10);
    }
    printf("reverse of %d is %d",num,rev);
}