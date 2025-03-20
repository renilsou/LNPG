/*Faça um algoritmo leia dois números e imprimir uma mensagem dizendo se são iguais ou
diferentes.*/

#include <stdio.h>

int main(){
    float num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    (num1 == num2) ? printf("Os numeros sao iguais!") : printf("Os numeros sao diferentes!");
}