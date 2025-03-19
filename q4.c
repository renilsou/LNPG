//Faça um algoritmo que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

#include <stdio.h>

int main(){
    float notas[3];
    float pesos[3];
    float somaNotas = 0;
    float somaPesos = 0;

    for(int i=0; i<3; i++){
        printf("Digite a nota %d: ",i+1);
        scanf("%f", &notas[i]);
        printf("Digite o peso da nota %d: ",i+1);
        scanf("%f", &pesos[i]);

        somaNotas = somaNotas + (notas[i]*pesos[i]);
        somaPesos = somaPesos + pesos[i];
    }
    printf("A media ponderada e igual a: %.1f", (somaNotas/somaPesos));
}