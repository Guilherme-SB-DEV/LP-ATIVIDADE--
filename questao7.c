#include <stdio.h>
#include <stdlib.h>

int main(){
    int escolha;
    printf("1-Novo jogo\n2-carregar jogo\n3-configuracoes\n");
    printf("opcao: ");
    scanf("%i", &escolha);
    printf("selecionado: \n");
    switch (escolha)
    {
    case 1:
        printf("iniciando novo jogo");
        break;
    case 2:
        printf("carregando jogo");
        break;
    case 3:
        printf("*audio\n*video\n*jogabilidade");
        break;

    default:
        break;
    }


    return 0;
}
