/*
Write a program to check whether a given year is a leap year or not. 
*/
#include<stdio.h>
void main(){
    int yr;
    printf("enter year: ");
    scanf("%d",&yr);
    (yr%4!=0)?printf("%d is not a leap year",yr):printf("%d is a leap year",yr);
}