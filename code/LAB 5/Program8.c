/*
Write a program to calculate the discount in rupees for the following criterion. (Without Loop)
Cost price discount
>=800 25%
500-800 20%
<500 no discount (0%) 
*/
#include <stdio.h>
#include <math.h>
void main()
{
    float bill,d_bill;
    printf("enter total billing amount: ");
    scanf("%f",&bill);
    switch(bill>800){
        case (1):{
            d_bill=bill*0.75;
            break;
        }
        case (0):{
            switch(bill<=800 && bill>=500){
                case (1):{
                    d_bill=bill*0.80;
                    break;
                }
                case (0):{
                    d_bill=bill;
                    break;
                }
            }
        }
    }
    printf("your bill after discount is %f", d_bill);
}