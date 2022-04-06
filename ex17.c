/*

Escreva uma função que classifique/ordene um vetor alfanumérico de no máximo 45
elementos em ordem crescente. Faça um programa, com reprocessamento, que utilize 
essa função.

*/

#include<conio.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

void ordenaVetor();
char vetor[45];

int main(){
    char dec;
    

    do{
        fflush(stdin);
        printf("insira o vetor: ");
        gets(vetor);

        ordenaVetor();

        printf("\nvetor ordenado: %s", vetor);

        fflush(stdin);
        printf("\n\ndeseja executar mais uma vez? (s/n)");
        dec = getch();
    }while(dec == 's' || dec == 'S');

    return 0;
}

void ordenaVetor(){
    int n = 0;
    while(vetor[n] != 0){
        n += 1;
    }

    for(int i = 0; i < n; i += 1){
        for(int j = 0; j < n - 1; j += 1){
            if(vetor[j] > vetor[j + 1]){
                char aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }

        printf("\nEtapa %d: ", i + 1);
        
        for(int k = 0; k < n; k++)
            printf("[%d]", vetor[k]);
    }
}
