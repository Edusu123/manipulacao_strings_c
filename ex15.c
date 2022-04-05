/*

Faça um programa que leia uma palvra (máximo de 50 letras) e some um no valor ASCII
de cada caractere da palavra. Imprima a string resultante.

*/

#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){

    fflush(stdin);
    char palavra[50];
    printf("palavra: ");
    gets(palavra);

    for(int i = 0; i < strlen(palavra); i += 1){
        palavra[i] = palavra[i] + 1;
    }

    printf("resultado: %s", palavra);

    return 0;
}

