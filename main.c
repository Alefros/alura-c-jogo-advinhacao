#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroSecreto = 42;
    int chute = 0;

    printf("****************************************** \n");
    printf("* BEM VINDO AO NOSSO JOGO DE ADIVINHACAO * \n");
    printf("****************************************** \n");
    printf("\n");


    printf("POR FAVOR, DIGITE UM NUMERO: ");
    scanf("%d",&chute);
    printf("SEU CHUTE FOI: %d \n", chute);


    return 0;
}
