/*
Write a program to calculate an amount of a telephone bill for the following criteria. (Without
Loop)
Calls charge per call (Rs.)
1-150 0
151-250 .9
251-400 1.2
401 onwards 1.5
*/

#include <stdio.h>
void main(){
    int calls;
    printf("enter no of calls made: ");
    scanf("%d",&calls);
    switch(calls<=150){
        case 1: printf("Bill due: 0");
                break;
        case 0:switch(calls>150 && (calls-151)<=99){
                    case 1:printf("Bill due: %f",((calls-150)*0.90));
                           break;
                    case 0:switch(calls>250 && (calls-251)<=149){
                                case 1:printf("bill due: %f",(89.1+((calls-150)*1.2)));
                                       break;
                                case 0:printf("bill due: %f",(269.1+((calls-400)*1.5)));
                                        break;
                    }
        }
    }
}