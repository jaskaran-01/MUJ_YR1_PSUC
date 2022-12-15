/*wap to check if a given character is vowel consonant or digit*/
#include<stdio.h>
#include<ctype.h>
int main(){
    char charactergiven;
    printf("Enter a character to check: ");
    scanf("%c",&charactergiven);
    int isvowel=charactergiven=='a'||charactergiven=='e'||charactergiven=='i'||charactergiven=='o'||charactergiven=='u'||charactergiven=='E'||charactergiven=='I'||charactergiven=='A'||charactergiven=='O'||charactergiven=='U';
    if(isdigit(charactergiven)){printf("Given char %c is a digit",charactergiven);}
    else{
        if(isvowel){printf("Given char %c is a vowel",charactergiven);}
        else{printf("Given char %c is a consonant",charactergiven);}
    }
}
