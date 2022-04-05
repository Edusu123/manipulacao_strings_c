/*

Escreva uma função que mostra as palavras de uma frase. Faça um programa, com
reprocessamento, que utilize essa função.

*/

#include<conio.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void maiorPalavra(char frase[256], char palavra[256]){
    int t = 0; // tamanho
    int tAux = 0;
    int s = 0; // start
    int sAux = 0;
    
    for(int i = 0; i < strlen(frase); i += 1){
        if(frase[i] == ' '){
            if(t < tAux){
                t = tAux;
                s = sAux;
            }
            tAux = 0;
            sAux = i + 1;
        }
        else{
            tAux += 1;
        }
    }

    int c = 0;
    for(int i = s; i <= t + 1; i += 1){
        palavra[c] = frase[i];
        c += 1;
    }
    palavra[c] = '\0';
}

int main(){
    char dec;

    do{
        char frase[256];
        char palavra[256];

        fflush(stdin);
        printf("frase: ");
        gets(frase);

        maiorPalavra(frase, palavra);
        printf("\nmaior palavra: %s", palavra);

        fflush(stdin);
        printf("\n\ndeseja executar mais uma vez? (s/n)");
        dec = getch();
    }while(dec == 's' || dec == 'S');

    return 0;
}