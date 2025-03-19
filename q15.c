/*O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem
do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do
distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de
fábrica de um carro, calcular e escrever o custo final ao consumidor.*/

#include <stdio.h>

int main(){
    float custo;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo);

    float percDistribuidor = 0.28*custo;
    float percImpostos = 0.45*custo;

    custo = custo + percDistribuidor + percImpostos;

    printf("Custo final do carro: R$ %.2f", custo);
}