//O cardápio de uma lanchonete é dado abaixo. Prepare um algoritmo que leia a quantidade de cada item que você consumiu e calcule a conta final.
//Hambúrguer................. R$ 3,00
//Cheeseburger............... R$ 2,50
//Fritas..................... R$ 2,50
//Refrigerante............... R$ 1,00

#include <stdio.h>

int main(){
    int hamburguer;
    int cheeseburger;
    int fritas;
    int refrigerante;

    printf("----------- CARDAPIO -----------\nHamburguer................. R$ 3,00\nCheeseburger............... R$ 2,50\nFritas..................... R$ 2,50\nRefrigerante............... R$ 1,00\n");
    printf("\nInforme abaixo a quantidade consumida de cada um dos itens.");

    printf("\nHamburguer: ");
    scanf("%d", &hamburguer);
    float totalHambuguer = hamburguer*3;

    printf("Cheeseburger: ");
    scanf("%d", &cheeseburger);
    float totalCheesburguer = cheeseburger*2.5;

    printf("Fritas: ");
    scanf("%d", &fritas);
    float totalFritas = fritas*2.5;

    printf("Refrigerante: ");
    scanf("%d", &refrigerante);
    float totalRefrigerante = refrigerante*1;

    float contaFinal = totalHambuguer+totalCheesburguer+totalFritas+totalRefrigerante;

    printf("\n----------- RESUMO DO PEDIDO -----------\n-> %d Hamburguer = R$ %.2f\n-> %d Cheeseburger = R$ %.2f\n-> %d Fritas = R$ %.2f\n-> %d Refrigerante = R$ %.2f\n", hamburguer, totalHambuguer, cheeseburger, totalCheesburguer, fritas, totalFritas, refrigerante, totalRefrigerante);
    printf("\nTotal a pagar: %.2f", contaFinal);
}