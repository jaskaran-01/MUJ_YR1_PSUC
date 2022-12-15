/*
Write a program to take two numbers as an input and find whether one number is a multiple
of the other or not. 
*/

#include<stdio.h>
void main(){
    int n_chk,mult;
    printf("Enter number to check : ");
    scanf("%d",&n_chk);
    printf("Enter number to check for: ");
    scanf("%d",&mult);
    printf("checking if %d is a multiple of %d: \n",mult,n_chk);
    mult%n_chk==0? printf("%d is a multiple of %d",mult,n_chk):printf("%d isnt a multiple of %d",mult,n_chk);
}