/*
Write a program to convert the temperature given in Fahrenheit to Centigrade and
Centigrade to Fahrenheit. Hint: C=5/9(F-32)).
*/
#include<stdio.h>
int main(){
    float tmp;
    printf("Enter Temp (F):\t");
    scanf("%f",&tmp);
    printf("%f",((tmp-32)*5.0/9.0));
}