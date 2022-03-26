#include<stdio.h>
#include<string.h>

char maiusculo(char t){
    if(t >= 'a' && t <= 'z' ) return t - 32;
    else return t;
}

int main(){
    char *string;
    
    printf("insira a string: ");
    gets(string);

    for(int i = 0; i < strlen(string); i += 1)
        string[i] = maiusculo(string[i]);

    printf("resultado: %s", string);

    return 0;
}