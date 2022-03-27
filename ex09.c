#include<stdio.h>
#include<string.h>

int main(){
    char palavra[256];
    printf("palavra: ");
    scanf("%s", &palavra);
    fflush(stdin);

    char car;
    printf("caractere: ");
    scanf("%c", &car);
    fflush(stdin);

    int len = strlen(palavra);

    for(int i = 0; i < len; i += 1){
        if(palavra[i] == 'a'
        || palavra[i] == 'e'
        || palavra[i] == 'i'
        || palavra[i] == 'o'
        || palavra[i] == 'u') palavra[i] = car;
    }

    printf("\nnova palavra: %s", palavra);
    
    return 0;
}