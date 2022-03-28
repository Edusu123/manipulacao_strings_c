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
    char dec;

    do{
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
        printf("\n\ndeseja ir novamente? (s/n)");
        scanf("%c", &dec);
    }while(dec == 's' || dec == 'S');

    return 0;
}

int verificaPalavraFrase(char palavra[256], char frase[256]){
    int contadorPalavra = 0;

    int fraseLen = strlen(frase);
    int palavraLen = strlen(palavra);

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