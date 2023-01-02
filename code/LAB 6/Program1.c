/*
Write a program to take N as input and print the odd numbers in descending order. 
*/
#include<stdio.h>
void main(){
    int N;
    printf("Entr limit (N): ");
    scanf("%d",&N);
    (N%2==0)? N-=1:N=N;
    for(int i=N;i>=0;i-=2){
        printf("\n%d",i);
    }
}