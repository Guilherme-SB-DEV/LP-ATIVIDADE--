#include <stdio.h>
#include <stdlib.h>

int main(){
    int escolha;
    printf("1-camiseta\n2-calca\n3-sapato\n");
    printf("escolha um produto: ");
    scanf("%i", &escolha);
    printf("selecionado: ");
    switch (escolha)
    {
    case 1:
        printf("camiseta\nvalor: 75.00");
        break;
    case 2:
        printf("calca\nvalor: 110.00");
        break;
    case 3:
        printf("sapato\nvalor: 80.00");
        break;

    default:
        break;
    }
    return 0;
}
