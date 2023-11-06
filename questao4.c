#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("idade: ");
    scanf("%i", &idade);
    if (idade >= 18) printf("acesso permitido");
    else printf("acesso negado");

    return 0;
}
