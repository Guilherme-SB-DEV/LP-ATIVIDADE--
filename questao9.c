#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numero;
    char resultado[10];
    printf("numero de 1 a 10: ");
    scanf("%i", &numero);
    switch (numero)
        {
        case 10:
            printf("nao primo");
            break;
        case 9:
            printf("nao primo");
            break;
        case 8:
            printf("nao primo");
            break;
        case 7:
            printf("primo");
            break;
        case 6:
            printf("nao primo");
            break;
        case 5:
            printf("primo");
            break;
        case 4:
            printf("nao primo");
            break;
        case 3:
            printf("primo");
            break;
        case 2:
            printf("primo");
            break;
        case 1:
            printf("primo");
            break;

        default:
            break;
        }
    printf("%s", resultado);
    return 0;
}
