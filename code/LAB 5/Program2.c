/*
Write a program to remove all break statements from Ex-1 (with switch-case construct)
and try to execute the program with a few inputs. Observe the difference. 
*/
#include<stdio.h>
void main(){
    int choice;
    printf("Enter choice :\n(1 for circle)\n(2 for rectangle)\n(3 for triangle)\n choice: ");
    scanf("%d",&choice);
    float radius,length,breadth,base,height;
    switch(choice){
        case 1: printf("Enter Radius : ");
                scanf("%f",&radius);
                printf("\nArea of circle of radius %f is %f",radius,(3.14*radius*radius));
                
        case 2: printf("Enter length of rectangle :");
                scanf("%f",&length);
                printf("Enter Breadth of rectangle :");
                scanf("%f",&breadth);
                printf("\nArea of rectangle of length %f and breadth %f is %f",length,breadth,(length*breadth));
                
        case 3: printf("Enter height of triangle :");
                scanf("%f",&height);
                printf("Enter base of triangle :");
                scanf("%f",&base);
                printf("\nArea of triangle of base %f and height %f is %f",height,base,(0.5*height*base));
                
        default:printf("\nbad choice");
                
    }
}