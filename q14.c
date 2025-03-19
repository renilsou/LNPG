/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de
reajuste. Calcular e escrever o valor do novo salário.*/

#include <stdio.h>

int main(){
    float salario, reajuste;

    printf("Digite o salário mensal atual: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    salario = salario + ((reajuste/100)*salario);

    printf("Salario com reajuste: R$ %.2f", salario);
}