#include <stdio.h>
#include <stdlib.h>

int main(){
    int idioma;
    printf("1-ingles\n2-espanhol\n3-frances\n");
    printf("escolha um idioma: ");
    scanf("%i", &idioma);
    switch (idioma)
    {
    case 1:
        printf("welcome");
        break;
    case 2:
        printf("bienvenido");
        break;
    case 3:
        printf("accueillir");
        break;

    default:
        break;
    }

    return 0;
}
