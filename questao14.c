#include <stdio.h>
#include <stdlib.h>

int main(){
    float mediapar=0, mediaimpar=0, contador, pares=0, impares=0;
    int numero=0;
    do
    {
        printf("numero: ");
        scanf("%i", &numero);
        if(numero>0){
            contador++;
            if (numero%2==0) pares++;
            else impares++;

        }
    } while (numero>0);
    mediaimpar = impares/contador;
    mediapar = pares/contador;

    printf("media dos pares: %.2f\n", mediapar);
    printf("media dos impares: %.2f\n", mediaimpar);

    printf("quantidade de numeros impares: %.0f\n", impares);
    printf("quantidade de numeros pares: %.0f\n", pares);

    return 0;
}
