/*
Write a program to calculate the amount of an electricity bill for the following criteria.
(Without Loop)
Units charge per unit (Rs.)
First, 1-100 up to 0
Next, 101-200 up to 1.5
Next, 201-400 up to 2.5
401 onwards 3.5 
*/
#include<stdio.h>
void main(){
    printf("enter units : ");
    int un;
    float amnt=0.0;
    scanf("%d",&un);
    int ch=un/100;
    switch(ch){
        case 0 :amnt=0;
                break;
        case 1 :amnt=(un-100)*1.5;
                break;
        case 2 :amnt=150+((un-200)*2.5);
                break;
        
        case 3 :amnt=150+((un-200)*2.5);
                break;
        case 4 :amnt=650+((un-300)*3.5);
                break;
        default:printf("wrong unit amnt");
                break;
            
    }
    printf("Bill due: %f",amnt);    
}
