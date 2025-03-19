//Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.

#include <stdio.h>
#include <math.h>

int main(){
    float numero = 0;

    while (numero<=0){
        printf("Digite um numero: ");
        scanf("%f", &numero);
    }
    
    float quadrado = numero*numero;
    float cubo = numero*numero*numero;
    float raizQudrada = sqrt(numero);
    float raizCubica = cbrt(numero);

    printf("Numero: %.1f\nQuadrado do numero: %.1f\nCubo do numero: %.1f\nRaiz quadrada do numero: %.1f\nRaiz cubica do numero: %.1f\n", numero, quadrado, cubo, raizQudrada, raizCubica);
}