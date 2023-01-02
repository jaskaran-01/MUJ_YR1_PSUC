/*
Write a program to find whether the given number is prime or not. 
*/
#include<stdio.h>
void main(){
    int no;
    printf("enter a number to check for prime: ");
    scanf("%d",&no);
    int chck=0;
    if(no%2==0){printf("%d is not prime",no);}
    else{
        for (int i=3;i<=no/2 && chck;i++) if(no%i==0) chck=1;
        if (chck)printf("%d is not prime",no);
        else printf("%d is prime",no);
    }
}