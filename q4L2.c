/*Construir um algoritmo que leia dois números e efetue a adição. Caso o valor somado seja
maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja
menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.*/

#include <stdio.h>

int main(){
    float num1, num2;
    float soma = 0;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    soma = num1 + num2;

    if (soma > 20){
        soma = soma + 8;
        printf("%.f + %.f + 8 = %.1f", num1, num2, soma);
    } else {
        soma = soma - 5;
        printf("%.f + %.f - 5 = %.1f", num1, num2, soma);
    }
}