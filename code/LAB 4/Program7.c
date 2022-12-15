/*
Write a program that takes three sides of a triangle input and calculates its area, if these
conditions are satisfied a+b>c, b+c>a, a+c>b, calculate area=(a+b+c)/2 
*/

#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter sides of triangle a,b,c: ");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf(" Area of triangle with sides %d,%d,%d is %f",a,b,c,((a+b+c)/2.0));
    }
    else printf("%d, %d, %d are not sides of a triangle",a,b,c);

}