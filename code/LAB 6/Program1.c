/*
Write a program to take N as input and print the odd numbers in descending order. 
*/
#include<stdio.h>
void main(){
    int N,i;
    printf("Entr limit (N): ");
    scanf("%d",&N);
    i=(N%2==0)? N-1:N; 
    for(;i>=3;i-=2){
        printf("\n%d",i);
    }
}