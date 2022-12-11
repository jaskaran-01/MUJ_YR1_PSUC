/*
   write a program to convert time given (inputed by user) in seconds to hours minutes an seconds
*/
#include <stdio.h>
int main(){
int t_s;
printf("Pls enter time in Seconds :\t");
scanf("%d:",&t_s);
printf("Time is: %dH:",(t_s/3600));
t_s%=3600;
printf("%dM:",(t_s/60));
t_s%=60;
printf("%dS",t_s);
}