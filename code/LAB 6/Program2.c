/*
Write a program to print the Fibonacci number.
Hint: (Fibonacci series is 0, 1, 1, 2, 3, 5, 8,) 
*/
#include<stdio.h>
void main(){
    int n1,n2,i;
    for(n1=0,n2=1,i =0;n1<=n2&&i<=20;n2+=n1,n1=n2-n1,i++){printf("Fib no %d =%d\n\n",i,(n2));}}