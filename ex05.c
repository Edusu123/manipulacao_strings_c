#include<stdio.h>
#include<string.h>

int main(){
    char cadeia[256];
    printf("String: ");
    scanf("%s", &cadeia);

    int len = strlen(cadeia);

    for(int i = 0; i < len; i += 1){
        if(cadeia[i] == '0') cadeia[i] = '1';
    }

    printf("\nNova string: %s", cadeia);
    
    return 0;
}