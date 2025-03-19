//Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma desses números.

#include <stdio.h>

int main(){
    int numeros[4];
    int soma = 0;

    for(int i=1; i<=4; i++){
        printf("Digite o %d numero: ", i);
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
    }
    printf("A soma dos numeros e igual a %d", soma);
}