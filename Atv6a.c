#include<stdio.h>

int main(void){
    // faça um algoritmo que leia o número de DDD e informe a qual cidade pertence.

    int DDD;

    printf("Insira o DDD: \n");
    scanf("%d", &DDD);

    switch(DDD){

        case 61:
         printf("\nBrasilia.");
         break;

        case 71:
         printf("\nSalvador.");
         break;

        case 11:
         printf("\nSao Paulo.");
         break;

        case 21:
         printf("\nRio de Janeiro.");
         break;

        case 32:
         printf("\nJuiz de fora.");
         break;

        case 19:
         printf("\nCampinas.");
         break;

        case 27:
         printf("\nVitoria\n");
         break;

        case 31:
         printf("\nBelo Horizonte.");
         break;

        case 62:
         printf("\nGoias.");
         break;

        case 84:
         printf("\nRio Grande do Norte.");
         break;
        default:
         printf("Nenhuma das Cidade acima.");



    }
}