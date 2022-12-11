/*
Write a program to interchange the values of two variables without using a third variable. 
*/
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers (a,b): ");
    scanf("%d,%d",a,b);
    printf("a =%d\tb=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a =%d\tb=%d",a,b);
}