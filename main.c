#include <stdio.h>

int main(){
    int material;
    printf("Entre com o material desejado --> [1] Plastico \t [2] Papel \t [3] Vidro \t [4] Metal \t [5] Organico\n");
    scanf("%d", &material);

    switch(material){
    case 1:
        printf("\033[31mJogue na lixeira VERMELHA\033[0m\n");
        break;

    case 2:
        printf("\033[34mJogue na lixeira AZUL\033[0m\n");
        break;

    case 3:
        printf("\033[32mJogue na lixeira VERDE\033[0m\n");
        break;

    case 4:
        printf("\033[33mJogue na lixeira AMARELA\033[0m\n");
        break;

    case 5:
         printf("\x1b[38;5;94mJogue na lixeira MARROM\x1b[0m\n");
        break;

    default:
        printf("\033[0mCODIGO INVALIDO\n");
        break;
    }

    return 0;
}