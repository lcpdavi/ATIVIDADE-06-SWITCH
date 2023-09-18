#include<stdio.h>

int main(){
    int codigo, quantidade;
    float ValorF, valorLanche;

    printf("Cardapio:\n");
    printf("101. Cachorro Quente - 10,10 \n");
    printf("102. Bauru - 8,50. \n");
    printf("103. Hamburguer - 15,00.\n");
    printf("104. Misto Quente - 7,00. \n");

    printf("Digite  o codigo do lanche:\n");
    scanf("%d", &codigo);

    printf("Digite a quantidade de itens:\n");
    scanf("%d", &quantidade);


    switch(codigo){
        case 101:
         valorLanche = 10.10;
         ValorF = valorLanche * quantidade;
         break;

        case 102:
         valorLanche = 8.50;
         ValorF = valorLanche * quantidade;
         break;

        case 103:
         valorLanche = 15.00; 
         ValorF = valorLanche * quantidade;
         break;

        case 104:
         valorLanche  = 7.00;
         ValorF = valorLanche * quantidade;
         break;
  
    }
    printf("valor final do pedido; %.2f\n", ValorF);



}