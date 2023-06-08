/*
7. Write a program to check whether a given integer no. is 
palindrome or not
*/

#include <stdio.h>
void main(){
    int copy,no,temp,rev=0;
    printf("enter a number : ");
    scanf("%d",&no);    
    copy=no;
    for (;no>0;rev=rev*10+temp,no/=10){
        printf("temp=%d   no=%d   rev=%d\n",temp,no,rev);
        temp=no%10;
        }
    if (rev==copy)
        printf("%d is a palindrome",rev);
    else 
        printf("%d is not a palindrome",rev);
    }