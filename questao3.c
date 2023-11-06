#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float nota;
    char classificacao[10];
    printf("nota: ");
    scanf("%f", &nota);
    if(nota>=9) strcpy(classificacao, "exelente");
    else if (nota<=7 && nota <9) strcpy(classificacao, "bom");
    else if (nota >= 5 && nota < 7) strcpy(classificacao, "razoavel");
    else if(nota < 5) strcpy(classificacao, "insuficiente");

    printf("%s", classificacao);
    return 0;
}
