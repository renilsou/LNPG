/*Faça um algoritmo que leia um número e mostre uma das mensagens: é múltiplo de 3 ou
não é múltiplo de 3.*/

/*condição ? valor_se_verdadeiro : valor_se_falso;*/

#include <stdio.h>

int main(){
    printf("Vamos verificar se um numero e multiplo de 3.\n");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    (num % 3 == 0) ? printf("Multiplo de 3!") : printf("Nao multiplo de 3!");
}