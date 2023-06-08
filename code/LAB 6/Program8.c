/*
Write a program to check whether the given number is Armstrong or not. An Armstrong
number of three digits is an integer such that the sum of the cubes of its digits is equal to
the number itself. For example, 371 is an Armstrong number since 3^3 + 7^3 + 1^3 = 371.
*/
#include<Stdio.h>
#include<math.h>

void main(){
    int no,cpy,sum=0;
    printf("Enter 3 digit number: ");
    scanf("%d",&no);
    cpy=no;
    if (no/1000>0)
        printf("%d number isnt 3 digit ",no);
    else{
        while(no>0){
            sum+=pow((no%10),3);
            no/=10;
        }
        sum==cpy? printf("%d is an armstrong number.",cpy):printf("%d isnt an armstrong number.",cpy);
    
    }
}