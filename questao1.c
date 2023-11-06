#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    float temperatura;
    char clima[20];

    do
    {
        printf("temperatura: ");
        scanf("%f", &temperatura);
    }
    while (temperatura > 40);


    if (temperatura<15) strcpy(clima, "chuvoso");
    else if (temperatura>=15 && temperatura<25) strcpy(clima, "nublado");
    else if (temperatura>=25) strcpy(clima, "ensolarado");


    printf("%s", clima);

    return 0;
}
