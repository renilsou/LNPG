//Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius

#include <stdio.h>

int main(){
    float fahrenheit;
    float celsius;

    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = ((5*fahrenheit)-160) / 9;

    printf("%.0f Fahrenheit equivale %.0f Celsius.", fahrenheit, celsius);
}