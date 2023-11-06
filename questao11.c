#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char senhaCorreta[10] = "senha";
    char senha[10];
    int resultado;
    do
    {
        printf("digite a senha: ");
        fflush(stdin);
        fgets(senha, 10, stdin);
        senha[strcspn(senha, "\n")]=0;
        resultado = strcmp(senha, senhaCorreta);
        if(resultado==0){
            printf("acesso concedido\n");
            break;
        }
        printf("acesso negado\n");
    } while (resultado!=0);


    return 0;
}
