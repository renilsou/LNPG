/*Faça um algoritmo para ler um número que é um código de usuário. Caso este código seja
diferente de um código armazenado internamente no algoritmo (igual a 1234) deve ser
apresentada a mensagem ‘Usuário inválido!’. Caso o Código seja correto, deve ser lido outro
valor que é a senha. Se esta senha estiver incorreta (a certa é 9999) deve ser mostrada a
mensagem ‘senha incorreta’. Caso a senha esteja correta, deve ser mostrada a mensagem
‘Acesso permitido’.*/

#include <stdio.h>

int main(){
    int codigoUsuario = 1234;
    int senhaUsuario = 9999;
    int codigo, senha;

    printf("Digite o codigo de usuario: ");
    scanf("%d", &codigo);
    
    if (codigo == codigoUsuario){
        printf("Digite a senha do usuario: ");
        scanf("%d", &senha);

        if (senha == senhaUsuario){
            printf("Acesso permitido!");
        } else {
            printf("Senha incorreta!");
        }
    } else {
        printf("Usuario invalido!");
    }
}