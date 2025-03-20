/*Faça um algoritmo que leia um número e mostre se ele é ou não divisível por 3 e por 7.*/

#include <stdio.h>

int main(){
    printf("Vamos verificar se um numero e ou nao divisivel por 3 e por 7.\n");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    (num % 3 == 0 && num % 7 == 0) ? printf("Divisivel por 3 e por 7") : printf("Nao-divisivel por 3 e por 7");
}