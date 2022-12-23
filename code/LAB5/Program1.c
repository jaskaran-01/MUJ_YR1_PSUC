/*
Write a program to program to calculate an area of a circle, a rectangle, or a triangle depending
on the user’s choice. 
*/
#include<stdio.h>
void main(){
    int choice;
    printf("Enter choice :\n(1 for circle)\n (2 for rectangle)\n(3 for triangle)\n choice: ");
    scanf("%d",&choice);
    switch(case){
        long float radius;
        case 1: long float radius;
                printf("Enter Radius : ");
                scanf("%f",&radius);
                printf("\nArea of circle of radius %f is %f",radius,(3.14*radius*radius));
                break;
        case 2: long float length,breadth;
                printf("Enter length of rectangle :");
                scanf("%f",&length);
                printf("Enter Breadth of rectangle :");
                scanf("%f",&breadth);
                printf("\nArea of rectangle of length %f and breadth %f is %f",length,breadth,(length*breadth));
                break;
        case 3: long float height,base;
                printf("Enter height of triangle :");
                scanf("%f",&height);
                printf("Enter base of triangle :");
                scanf("%f",&base);
                printf("\nArea of triangle of base %f and height %f is %f",height,base,(0.5*height*base));
                break;
        default:printf("\nbad choice");
                break;
    }
}