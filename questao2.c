#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(){
    float total;
    float preco;
    int dia;
    printf("preco: ");
    scanf("%f", &preco);
    do
    {
        printf("dia da semana: ");
        scanf("%i", &dia);
    } while (dia <=0 || dia >7);

    if (preco>100)
    {
        if(dia==7 || dia ==1) total = preco * 85/100;
        else total = preco * 90/100;

    }
    else total = preco;
    printf("total da compra: %.2f", total);
    return 0;
}
