/*

Escreva uma função que mostre as palavras de uma frase. Faça um programa, com
reprocessamento, que utilize esta função.

*/

#include<conio.h>
#include<stdio.h>
#include<string.h>

void exibePalavras(char frase[256]);

int main(){
    char dec;

    do{
        fflush(stdin);
        char frase[256];
        printf("frase: ");
        gets(frase);

        exibePalavras(frase);

        printf("\n\ndeseja executar mais uma vez? (s/n)");
        scanf("%c", &dec);
    }while(dec == 's' || dec == 'S');

    return 0;
}

void exibePalavras(char frase[256]){
    printf("\n\n");
    
    int len = strlen(frase);
    for(int i = 0; i < len; i += 1){
        if(frase[i] == ' ') printf("\n");
        else printf("%c", frase[i]);
    }
}