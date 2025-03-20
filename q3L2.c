/*Ler 3 valores (considere que não serão informados valores iguais) e escrever o maior deles.*/

#include <stdio.h>

int main(){
    int num, maior, menor;

    printf("Digite tres valores.\n");

    for(int i=0; i<3; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", &num);

        if (i == 0){
            maior = num;
            menor = num;
        } else {
            if (num > maior){
                maior = num;
            } else if (num <= menor){
                menor = num;
            }
        }
    }

    printf("-> Maior numero: %d\n-> Menor numero: %d", maior, menor);
}