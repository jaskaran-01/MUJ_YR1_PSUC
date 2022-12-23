/*
Write a program to calculate a bill for internet browsing. The conditions are given below:
Minimum Rs. 200 for up to 100 calls.
Plus, Rs. 0.60 per call for the next 50 calls.
Plus, Rs. 0.50 per call for the next 50 calls. 
Plus, Rs. 0.40 per call for any call beyond 200 calls
*/
#include <stdio.h>
void main(){
    int calls;
    printf("enter no of calls made: ");
    scanf("%d",&calls);
    switch(calls<=100){
        case 1: printf("Bill due: %f",(200*calls));
                break;
        case 0:switch(calls>100 && (calls-100)<=50){
                    case 1:printf("Bill due: %f",(200+((calls-100)*0.60)));
                           break;
                    case 0:switch(calls>150 && (calls-150)<=50){
                                case 1:printf("bill due: %f",(230+((calls-150)*0.50)));
                                       break;
                                case 0:printf("bill due: %f",(255+((calls-200)*0.40)));
                                        break;
                    }
        }
    }
}