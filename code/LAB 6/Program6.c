/*
Write a program to find the sum of n terms of the sin series 
sin(x) = x - x^3 + x^5– x^7
*/
#include<math.h>
#include<stdio.h>
void main(){
    int lim;
    float sum=0.0;
    printf("Enter limit fro series: ");
    scanf("%d",lim);
    for(float i=0.0;i<=lim,i++){
        sum+=((i)-pow(i,3)+pow(i,5)-pow(i,7));
    }
    printf("sum of %d terms of series is %f",lim,sum);
}