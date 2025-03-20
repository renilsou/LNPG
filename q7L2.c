/*Faça um algoritmo que leia um número e mostre se ele é divisível por 10, por 5, por 2 ou se
não é divisível por nenhum destes.*/

#include <stdio.h>

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero que voce digitou:\n");
    if (num % 10 == 0){
        printf("Eh divisivel por 10\n");
    }
    if (num % 5 == 0) {
        printf("Eh divisivel por 5\n");
    }
    if (num % 2 == 0) {
        printf("Eh divisivel por 2\n");
    } 
    if (num % 10 != 0 && num % 5 != 0 && num % 2 != 0) {
        printf("Nao eh divisivel por 10, 5 ou 2");
    }
}