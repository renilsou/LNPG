// Faça um programa que leia um valor representando um número de segundos. Em seguida converta-o para horas, minutos e segundos na forma:
// 7322 segundos são 2 horas, 2 minutos e 2 segundos.

#include <stdio.h>

int main(){
    int segundos;
    float minutos;
    float horas;
    float segundosFinais;

    printf("Digite um valor em segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosFinais = segundos % 60;

    printf("%d segundos equivalem a %.0f horas, %.0f minutos e %.0f segundos", segundos, horas, minutos, segundosFinais);

}