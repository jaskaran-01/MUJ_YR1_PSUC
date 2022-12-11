/*
Write a program to evaluate the area of the circle Area = Pi * R2
*/
#include<stdio.h>
#include<math.h>
int main(){
    float inp;
    float pi=22.0/7.0;
    printf("Enter radius of circle(R):\t");
    scanf("%f",&inp);
    inp=pi*pow(inp,2);
    printf("Area is : %f",inp);
}