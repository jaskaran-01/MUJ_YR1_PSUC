/*
Write a program to interchange the values of two variables using a third variable

if erroring use a,b (NOTE: comma must be used)
*/
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 2 numbers to switch (a,b):\t");
    scanf("%d,%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("A=%d \t B=%d",a,b);
}
