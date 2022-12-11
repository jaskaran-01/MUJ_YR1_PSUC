/*
Write a program for converting distance in mm to cm, inch, feet (1 cm =10mm,
1inch=2.5cm, 1 feet =12 inches). 
*/
#include<stdio.h>
int main(){
    int inp;
    printf("Enter Distance (mm):\t");
    scanf("%d",&inp);
    float cm,inch,ft;
    cm=inp/10;
    inch=cm/2.5;
    ft=inch/12.0;
    printf("CM=%f\tINCH=%f\tFT=%f",cm,inch,ft);
}