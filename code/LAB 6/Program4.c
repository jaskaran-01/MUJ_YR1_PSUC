/*
Write a program to convert the decimal number into binary to decimal.
Ex: 1101 = 1*2 3 + 1 * 2 2 + 0 * 2 1+ 1* 2 0 =13 */
#include<stdio.h>
#include<math.h>
void main(){
    int dec,bin,i=0;
    printf("Enter a binary no: ");
    scanf("%d",&bin);
    for(dec=1;bin!=0;bin=bin/10,i++){
        dec+=((bin%10)*pow(2,i));    
    }
    dec-=1;
    printf("%d",dec);
}