/*

Faça um programa que troque todas as ocorrências de uma letra L1 pela letra L2 em uma
string. A string e as letras L1 e L2 dever ser fornecidas pelo usuário

*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main(){
    char palavra[256];
    printf("palavra: ");
    scanf("%s", &palavra);
    fflush(stdin);

    char l1;
    printf("letra 1: ");
    scanf("%c", &l1);
    fflush(stdin);

    char l2;
    printf("letra 1: ");
    scanf("%c", &l2);
    fflush(stdin);

    int len = strlen(palavra);

    for(int i = 0; i < len; i += 1){
        if(palavra[i] == l1)
            palavra[i] = l2;
    }

    printf("\n\nnova palavra: %s", palavra);

    return 0;
}