/*

Faça uma função que receba por parâmetro uma string e retorne a mesma sem os 
espaços em branco. O programa principal deve mostrar a string resultante.

*/

#include<conio.h>
#include<stdio.h>
#include<string.h>

char* limpaString(char* string);

int main(){
    fflush(stdin);
    char string[256];
    printf("palavra: ");
    gets(string);

    char* s = string;

    char* r = limpaString(s);

    printf("\nstring sem espacos: ");
    while(*r != '\0') {
        printf("%c", *r);
        r++;
    }

    return 0;
}

char* limpaString(char* string){
    int len = strlen(string);
    char texto[256];
    strcpy(texto, string);
    
    for(int i = 0; i < len; i += 1){
        if(texto[i] == ' '){
            for(int j = i; j < len; j += 1){
                texto[j] = texto[j + 1];
            }

            len --;
            i --;
        }
    }

    char* r = texto;

    return r;
}