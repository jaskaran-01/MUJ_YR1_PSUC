#include <stdio.h>
int main(){
    int p_nom;
    printf("Enter number:\t");
    scanf("%d",&p_nom);
    int temp=p_nom%10;
    int sum=temp;
    p_nom/=10;
    temp=p_nom%10;
    sum+=temp;
    p_nom/=10;
    temp=p_nom%10;
    sum+=temp;
    p_nom/=10;
    temp=p_nom%10;
    sum+=temp;
    printf("%d",sum);        
}