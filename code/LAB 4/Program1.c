/*
Write a program to check whether the given number is odd or even. 
*/
#include<stdio.h>
void main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    (a%2==0)?printf("%d is odd",a):printf("%d is even",a);
}