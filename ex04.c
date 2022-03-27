/*

Faça um programa que conte o número de 1's que aparecem em uma string.

*/

/////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main(){
    char nums[256];
    printf("Numers: ");
    scanf("%s", &nums);

    int len = strlen(nums);

    int contadorDeUm = 0;
    for(int i = 0; i < len; i += 1){
        if(nums[i] == '1') contadorDeUm += 1;
    }
    
    printf("number of ones: %d", contadorDeUm);

    return 0;
}