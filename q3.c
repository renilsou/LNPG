//Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>

int main(){
    float notas[3];
    float media = 0;

    for(int i=0; i<3; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
        media = media + notas[i];
    }
    printf("A media das notas e igual a: %.1f", (media/3));
}