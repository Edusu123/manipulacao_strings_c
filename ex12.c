/*

Dados uma frase e uma palavra, escreva uma função que verifique o número de vezes 
que a palavra ocorre na frase. Faça um programa, com reprocessamento, que utilize 
esta função.

*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int verificaPalavraFrase(char palavra[256], char frase[256]);

int main(){
    char palavra[256];
    printf("palavra: ");
    scanf("%s", &palavra);
    fflush(stdin);

    char frase[256];
    printf("frase: ");
    gets(frase);
    fflush(stdin);
    
    int quantidade = verificaPalavraFrase(palavra, frase);

    printf("\n\nquantidade de vezes: %d", quantidade);

    return 0;
}

int verificaPalavraFrase(char palavra[256], char frase[256]){
    int contadorPalavra = 0;

    int fraseLen = strlen(frase);
    int palavraLen = strlen(palavra);
    printf("palavra: %d\nfrase: %d", palavraLen, fraseLen);

    // percorre a frase até chegar no limite de tamanho que pode conter a palavra
    for(int i = 0; i < (fraseLen - palavraLen + 1); i += 1){
        if(frase[i] == palavra[0]){
            for(int j = 0; j < palavraLen; j += 1){
                if(frase[i + j] != palavra[j]) break;
                if(j == (palavraLen - 1)) contadorPalavra += 1;
            }
        }
    }

    return contadorPalavra;
}