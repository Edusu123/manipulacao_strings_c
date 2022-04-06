/*

Faça um programa que, dada uma string, diga se ela é um palíndromo ou não.

*/

#include<conio.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    fflush(stdin);
    char string[256];
    printf("palavra: ");
    scanf("%s", string);

    char *ptr = string;

    int len = strlen(ptr);
    bool palindromo = true;

    for(int i = 0; i < len / 2; i += 1){

        if(string[i] != string[len - (i + 1)]){
            break;
            palindromo = false;
        }
    }

    if(palindromo)
        printf("palindromo!");
    else
        printf("nao eh palindromo...");

    return 0;
}