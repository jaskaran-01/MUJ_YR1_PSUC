/*
Write a program to reverse a given number
Ex: 1234 reverse=4*10 3 +3 * 10 2 + 2 * 10 1 + 1 * 10 0 =4321 
*/
#include<stdio.h>
#include<math.h>
void main(){
    int dec,bin,i=0;
    printf("Enter a binary no: ");
    scanf("%d",&bin);
    for(dec=1;bin!=0;bin=bin/2,i++){
        dec+=((bin%2)*i);    
    }
    
    printf("%d",dec);
}