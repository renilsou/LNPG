/*Faça um algoritmo que calcule a área e o perímetro de um retângulo. As entradas do
programa serão a largura e a altura do triângulo.*/

#include <stdio.h>

int main(){
    float largura;
    float altura;

    printf("Digite a largura do triangulo: ");
    scanf("%f", &largura);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    float area = (largura*altura)/2;

    printf("Area do triangulo de base %.1f e altura %.1f: %.1f", largura, altura, area);
}
