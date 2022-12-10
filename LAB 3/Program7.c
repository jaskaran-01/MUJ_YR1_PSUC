/*
Write a program to interchange the values of two variables using a third variable
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 2 numbers to switch:\t");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
}
