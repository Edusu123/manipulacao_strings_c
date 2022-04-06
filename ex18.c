/*

Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e 
retorne a string codificada.

*/

#include<conio.h>
#include<stdio.h>
#include<string.h>

char *codificaString(char *string);

int main(){
    fflush(stdin);
    char string[256];
    printf("palavra: ");
    scanf("%s", string);

    char* ptr = string;

    char* r = codificaString(ptr);

    printf("resultado: ");
    while(*r != '\0') {
        printf("%c", *r);
        r++;
    }

    return 0;
}

char *codificaString(char* string){
    char *retorno = string;

    while(*retorno != '\0'){
        *retorno = (*retorno) + 3;
        retorno++;
    }

    return string;
}
