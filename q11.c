/*Uma companhia de carros paga a seus empregados um salário de R$ 500,00 por mês mais
uma comissão de R$ 50,00 para cada carro vendido e mais 5% do valor da venda. Elabore um
algoritmo para calcular e imprimir o salário do vendedor num dado mês recebendo como dados
de entrada o nome do vendedor, o número de carros vendidos e o valor total das vendas.*/

#include <stdio.h>

int main(){
    char nomeVendedor[200];
    int qntCarros;

    printf("Informe o nome do vendedor: ");
    scanf("%s", nomeVendedor);

    printf("Informe a quantidade de carros vendidos: ");
    scanf("%d", &qntCarros);

    float total = qntCarros * 50;
    float porcentagem = 0.05*total;
    total = total + porcentagem + 500;

    printf("Salario do vendedor %s: R$ %.2f", nomeVendedor, total);
}