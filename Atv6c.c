#include<stdio.h>

int main(){
    int pratos, sobremesa, bebidas, ValorFdeK, Kprato, Ksobremesa, Kbebida;

    printf("Cardapio de Pratos:\n");
    printf("1. Vegetariano - 180. \n");
    printf("2. Frango - 250. \n");
    printf("3. Carne - 350. \n");
    printf("4. Peixe - 230. \n");

    printf("Digite  o codigo dos pratos:\n");
    scanf("%d", &pratos);

    printf("Cardapio de Sobremesas:\n");
    printf("1. Abacaxi - 70. \n");
    printf("2. Mouse diet - 170. \n");
    printf("3. Mouse Maracuja - 200. \n");
    printf("4. Sorvete - 110. \n");

    printf("Digite  o codigo da sobremesa:\n");
    scanf("%d", &sobremesa);

    printf("Cardapio das bebidas: \n");
    printf("1. Cha - 20. \n");
    printf("2. Suco laranja - 70. \n");
    printf("3. Suco melao - 110. \n");
    printf("4. Refrigerante - 65. \n");

    printf("Digite  o codigo das bebidas:\n");
    scanf("%d", &bebidas);

    switch(pratos){
        case 1:
         Kprato = 180;
         break;

        case 2:
         Kprato = 250;
         break;

        case 3:
         Kprato = 350; 
         break;

        case 4:
         Kprato = 230;
         break;

    }switch(sobremesa){
        case 1:
         Ksobremesa = 70;
         break;

        case 2:
         Ksobremesa = 170;
         break;

        case 3:
         Ksobremesa = 200; 
         break;

        case 4:
         Ksobremesa = 110;
         break;
    }
    switch(bebidas){
        case 1:
         Kbebida = 20;         
         break;

        case 2:
         Kbebida = 70;
         break;

        case 3:
         Kbebida = 110; 
         break;

        case 4:
         Kbebida = 65;
         break;

    }
    ValorFdeK = Kprato + Ksobremesa + Kbebida;
    printf("valor final: %d kcal\n", ValorFdeK);



}