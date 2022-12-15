/*
Write a program to find the total no. of days for a given number of months counting from
January month. 
*/
#include <stdio.h>
void main(){
    int month,year,days=0;
    printf("Enter date of month (MM/YYYY): ");
    if(month>=1){days+=31;}
    if(month>=2){year%4==0?days+=29:days+=28;}
    if(month>=3){days+=31;}
    if(month>=4){days+=30;}
    if(month>=5){days+=31;}
    if(month>=6){days+=30;}
    if(month>=7){days+=31;}
    if(month>=8){days+=31;}
    if(month>=9){days+=30;}
    if(month>=10){days+=31;}
    if(month>=11){days+=30;}
    if(month>=12){days+=31;}
    printf("total number of days from 01/%d to %d/%d is %d",year,month,year,days);
}