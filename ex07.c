#include<stdio.h>
#include<string.h>

int main(){
    char palavra[256];
    printf("palavra: ");
    scanf("%s", &palavra);

    int len = strlen(palavra);

    printf("\n\n");
    for(int i = 0; i < len; i += 1){
        if(palavra[i] != 'a'
        && palavra[i] != 'e'
        && palavra[i] != 'i'
        && palavra[i] != 'o'
        && palavra[i] != 'u') printf("%c", palavra[i]);
    }
    
    return 0;
}