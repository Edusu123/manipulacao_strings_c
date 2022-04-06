/*

Escreva um programa, com reprocessamento, que dado um número, escreva seu valor
por extenso. O número máximo a ser transformado será 999.999.999,99.

Exemplo:
Dado 4.973,30, escreva Quatro Mil Novecentos e Setenta e Três e Trinta Centésimos

*/

#include<conio.h>
#include<locale.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    setlocale(LC_ALL, "pt_br");

    char dec;

    do{
        fflush(stdin);
        float num;
        printf("\nInsira um numero: ");
        scanf("%f", &num);

        char numStr[15];
        sprintf(numStr, "%.2f", num);

        int len = strlen(numStr);

        char result[256] = "";

        for(int i = len - 1; i >= 0; i--){
            if(i == len - 1){ // primeira casa dos centésimos
                if(numStr[i - 1] == '1') continue; // não possui
                switch(numStr[i]){
                    case '0':;
                        char temp[256] = "centesimos";
                        strcat(result, temp);
                        break;
                    case '1':
                        strcat(result, " e um centesimo");
                        break;
                    case '2':
                        strcat(result, " e dois centesimos");
                        break;
                    case '3':
                        strcat(result, " e tres centesimos");
                        break;
                    case '4':
                        strcat(result, " e quatro centesimos");
                        break;
                    case '5':
                        strcat(result, " e cinco centesimos");
                        break;
                    case '6':
                        strcat(result, " e seis centesimos");
                        break;
                    case '7':
                        strcat(result, " e sete centesimos");
                        break;
                    case '8':
                        strcat(result, " e oito centesimos");
                        break;
                    case '9':
                        strcat(result, " e nove centesimos");
                        break;
                    default:
                        break;
                }
            }
            if(i == len - 2){ // segunda casa dos centésimos
                switch (numStr[i]){
                    case '0':
                        continue;
                    case '1':
                        switch (numStr[i + 1]){
                            case '0':
                                strcat(result, " e dez centesimos");
                                break;
                            case '1':
                                strcat(result, " e onze centesimos");
                                break;
                            case '2':
                                strcat(result, " e doze centesimos");
                                break;
                            case '3':
                                strcat(result, " e treze centesimos");
                                break;
                            case '4':
                                strcat(result, " e quatorze centesimos");
                                break;
                            case '5':
                                strcat(result, " e quinze centesimos");
                                break;
                            case '6':
                                strcat(result, " e dezesseis centesimos");
                                break;
                            case '7':
                                strcat(result, " e dezessete centesimos");
                                break;
                            case '8':
                                strcat(result, " e dezoito centesimos");
                                break;
                            case '9':
                                strcat(result, " e dezenove centesimos");
                                break;
                            default:
                                break;
                        }
                        break;
                    case '2':;
                        char temp[256] = " e vinte";
                        strcat(result, temp);
                        break;
                    default:
                        break;
                }
            }
            if(i == len - 3) continue; // .
        }

        printf("result: %s", result);

        fflush(stdin);
        printf("\n\ndeseja executar mais uma vez? (s/n)");
        dec = getch();
    }while(dec == 'S' || dec == 's');

    return 0;
}