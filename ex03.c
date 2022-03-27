#include<stdio.h>
#include<string.h>

int comparaChar(char c1, char c2){
    if(c1 == c2) return 1;
    return 0;
}

int main(){
    char string1[256], string2[256];
    int igual = 0;

    printf("String1: ");
    scanf("%s", &string1);

    printf("String2: ");
    scanf("%s", &string2);

    int len = strlen(string1);

    for(int i = 0; i < len; i++)
        igual = comparaChar(string1[i], string2[i]);

    if(igual == 1) printf("\nAs string são iguais!");
    else printf("\nAs string são diferentes!");

    return 0;
}