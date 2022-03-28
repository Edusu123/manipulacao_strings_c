/*

Faça um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as vogais por *.

*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main(){
    char frase1[256];
    printf("frase 1: ");
    scanf("%s", &frase1);
    fflush(stdin);

    char frase2[256];
    printf("frase 2: ");
    scanf("%s", &frase2);
    fflush(stdin);

    // INVERTENDO A FRASE 1
    int len1 = strlen(frase1);
    for(int i = 0; i < (len1 / 2); i += 1){
        char aux = frase1[i];
        frase1[i] = frase1[len1 - (i + 1)];
        frase1[len1 - (i + 1)] = aux;
    }
    frase1[len1 + 1] = '\0';

    // INVERTENDO A FRASE 2
    int len2 = strlen(frase2);
    for(int i = 0; i < (len2 / 2); i += 1){
        char aux = frase2[i];
        frase2[i] = frase2[len2 - (i + 1)];
        frase2[len2 - (i + 1)] = aux;
    }
    frase2[len2 + 1] = '\0';

    // SUBSTITUINDO VOGAIS NA FRASE 1
    for(int i = 0; i < len1; i += 1){
        if(frase1[i] == 'a'
        || frase1[i] == 'e'
        || frase1[i] == 'i'
        || frase1[i] == 'o'
        || frase1[i] == 'u') frase1[i] = '*';
    }

    // SUBSTITUINDO VOGAIS NA FRASE 2
    for(int i = 0; i < len2; i += 1){
        if(frase2[i] == 'a'
        || frase2[i] == 'e'
        || frase2[i] == 'i'
        || frase2[i] == 'o'
        || frase2[i] == 'u') frase2[i] = '*';
    }

    printf("\n\nfrase1: %s", frase1);
    printf("\nfrase2: %s", frase2);
    
    return 0;
}