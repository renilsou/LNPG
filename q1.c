//Escrever um algoritmo que pergunta um valor em metros e imprime o correspondente em decímetros, centímetros e milímetros.

#include <stdio.h>

int main(){
    float metros;
    float decimetros;
    float centimetros;
    float milimetros;

    printf("Digite o valor em metros: ");
    scanf("%f", &metros);

    decimetros = (metros*10);
    centimetros = (metros*100);
    milimetros = (metros*1000);

    printf("\n%.2f metros equivalem a:\n%.2f decimetros\n%.2f centimetros\n%.2f milimetros", metros, decimetros, centimetros, milimetros);
}
