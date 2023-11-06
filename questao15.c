#include <stdio.h>
#include <stdlib.h>

int main(){
    int opcao;
    float numero, numeroConvertido;

    do
    {
        printf("1-m/s para km/h\n2-celsius para fahrenheit\n0-sair\n");
        printf("opcao: ");
        scanf("%i", &opcao);
        if (opcao ==0) break;

        printf("quantidade: ");
        scanf("%f", &numero);
        switch (opcao)
        {
        case 1:
            numeroConvertido = numero * 10/36;
            printf("%.2f m/s\n%.2f km/h\n\n\n", numero, numeroConvertido);
            break;
        case 2:
            numeroConvertido = numero * 1.8 + 32;
            printf("%.2f C\n%.2f fh\n\n\n", numero, numeroConvertido);
            break;

        default:
            break;
        }

    } while (opcao>=1);


    return 0;
}
