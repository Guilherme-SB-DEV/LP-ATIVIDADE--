#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2;
    printf("numero: ");
    scanf("%f", &numero1);
    printf("numero: ");
    scanf("%f", &numero2);
    if (numero1>numero2) printf("primeiro numero > segundo numero");
    else if(numero1 == numero2) printf("primeiro numero = segundo numero");
    else printf("segundo numero > primeiro numero");



    return 0;
}
