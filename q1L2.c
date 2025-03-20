/*Ler 3 valores (A, B e C) representando as medidas dos lados de um triângulo e escrever se
formam ou não um triângulo. OBS: para formar um triângulo, o valor de cada lado deve ser
menor que a soma dos outros 2 lados.*/

#include <stdio.h>

int main(){
    float a, b, c;

    printf("Digite as medidas dos lados do triangulo.\n");

    printf("Lado A: ");
    scanf("%f", &a);

    printf("Lado B: ");
    scanf("%f", &b);

    printf("Lado C: ");
    scanf("%f", &c);

    if(a<b+c && b<a+c && c<a+b){
        printf("Constitui triangulo!");
    } else{
        printf("Nao constitui triangulo!");
    }
}