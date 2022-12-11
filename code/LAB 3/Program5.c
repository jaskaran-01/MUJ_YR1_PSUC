/*
Write a program to find out the distance between two points e.g. (x1, y1) and (x2, y2).
Hint: Distance=√(x2-x1)^2+ (y2-y1)^2

if program is erroring use -> x1,y1 ex 1,2 (NOTE: comma must be used)
*/
#include <stdio.h>
#include<math.h>
int main(){
    int x1,y1;
    printf ("Enter point 1(x1,y1):\t");
    scanf("%d,%d",&x1,&y1);
    int x2,y2;
    printf ("Enter point 1(x2,y2):\t");
    scanf("%d,%d",&x2,&y2);
    double dis=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("Distance: %f",dis);
}