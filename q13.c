/*Escreva um algoritmo para ler o número total de eleitores de um município, o número de
votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em
relação ao total de eleitores.*/

#include <stdio.h>

int main(){
    int totalEleitores, brancos, nulos, validos;
    float percBrancos, percNulos, percValidos;

    printf("Informe a quantiade total de eleitores do municipio: ");
    scanf("%d", &totalEleitores);

    printf("Informe a quantidade de votos brancos: ");
    scanf("%d", &brancos);
    
    printf("Informe a quantidade de votos nulos: ");
    scanf("%d", &nulos);
    
    printf("Informe a quantidade de votos validos: ");
    scanf("%d", &validos);

    percBrancos = ((float)brancos / totalEleitores) * 100;
    percNulos = ((float)nulos / totalEleitores) * 100;
    percValidos = ((float)validos / totalEleitores) * 100;

    printf("\n--------------- PERCENTUAL DE VOTOS ---------------\n");
    printf("-> Brancos: %.2f%%\n", percBrancos);
    printf("-> Nulos: %.2f%%\n", percNulos);
    printf("-> Válidos: %.2f%%\n", percValidos);
}