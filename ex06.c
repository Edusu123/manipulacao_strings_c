/*

Faça um programa que receba uma palavra e a imprima de trás-para-frente.

*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main(){
    char palavra[256];
    printf("palavra: ");
    scanf("%s", &palavra);

    int len = strlen(palavra);

    int i;
    for(i = 0; i < (len / 2); i += 1){
        char aux = palavra[i];
        palavra[i] = palavra[len - (i + 1)];
        palavra[len - (i + 1)] = aux;
    }
    palavra[len + 1] = '\0';

    printf("\n\npalavra trocada: %s", palavra);
    
    return 0;
}