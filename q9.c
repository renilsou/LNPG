// Leia uma quantidade de chuva dada em polegadas e imprima o equivalente em milímetros
// (25,4 mm = 1 polegada).

#include <stdio.h>

int main(){
    float polegada;
    float milimetro;

    printf("Digite a quantidade de chuva em polegadas: ");
    scanf("%f", &polegada);

    milimetro = polegada * 25.4;

    printf("%.1f polegada(s) equivale(m) a: %.1f milimetros.", polegada, milimetro);
}