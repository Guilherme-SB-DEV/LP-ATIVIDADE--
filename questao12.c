#include <stdio.h>
#include <stdlib.h>

int main(){
    float i, quantidade, nota, soma, media;
    printf("quantidade de notas: ");
    scanf("%f", &quantidade);
    for ( i = 1; i <= quantidade; i++)
    {
        printf("nota: ");
        scanf("%f", &nota);
        soma += nota;

    }
    media = soma/quantidade;
    printf("media: %f", media);



    return 0;
}
