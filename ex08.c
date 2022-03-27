/*

Faça um programa que receba uma string e calcule quantas vogais (a, e, i, o, u) possui
essa string.

*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main(){
    printf("palavra: ");
    char palavra[256];
    scanf("%s", &palavra);

    int len = strlen(palavra);
    int contadorVogais = 0;

    for(int i = 0; i < len; i += 1){
        if(palavra[i] == 'a'
        || palavra[i] == 'e'
        || palavra[i] == 'i'
        || palavra[i] == 'o'
        || palavra[i] == 'u') contadorVogais += 1;
    }

    printf("\n\nNumero de vogais: %d", contadorVogais);
    
    return 0;
}