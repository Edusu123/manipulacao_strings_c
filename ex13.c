/*

Escreva uma função que retorne o número de palavras em uma frase. Faça um 
programa, com reprocessamento, que utilize essa função.

*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

int quantidadePalavras(char frase[256]);

int main(){
    char dec;
    system("cls");
    printf("pressione enter para iniciar o programa...");

    do{
        char stringApoio[256];
        gets(stringApoio);
        
        char frase[256];
        printf("frase: ");
        gets(frase);

        int quantidade = quantidadePalavras(frase);

        printf("\n\nquantidade de palavras: %d", quantidade);

        printf("\ndeseja ir novamente? (s/n)");
        dec = getch();
        system("cls");
    }while(dec == 's' || dec == 'S');

    return 0;
}

int quantidadePalavras(char frase[256]){
    int quantidadeEspacos = 0;

    int len = strlen(frase);

    for(int i = 0; i < len; i += 1)
        if(frase[i] == ' ') quantidadeEspacos += 1;

    return quantidadeEspacos + 1;
}