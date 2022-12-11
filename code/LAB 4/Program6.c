/*
Write a program that returns a letter grade based on a quiz score. The input will be the
integer score from a ten-point quiz.
a. The letter grades are assigned by:
b. 9 - 10 “A” 7 - 8 “B” 5 - 6 “C” 3 - 4 “D” < 3 “F”
*/
#include<stdio.h>
int main(){
    int score;
    char grade;
    printf("Enter score in quiz (0-10): ");
    scanf("%d",&score);
    if(score>10){printf("error");}
    else if(score>=9 ){grade="A";}
    else if(score==8||score==7){grade="B";}
    else if(score==5||score==6){grade="C";}
    else if(score==4||score==3){grade="D";}
    else{grade="F";}
    printf("Grade attained id %c",grade);

}