#include <stdio.h>
#include <stdlib.h>

int main(){
    float numero1, numero2;
    char operacao;
    printf("numero: ");
    scanf("%f", &numero1);
    printf("numero: ");
    scanf("%f", &numero2);
    printf("operacao: ");
    fflush(stdin);
    scanf("%c", &operacao);
    switch (operacao)
    {
    case '+':
        printf("resultado: %.2f", numero1, numero2);

        break;
    case '-':
        printf("resultado: %.2f", numero1 - numero2);
    default:
        break;
    }

    return 0;
}
