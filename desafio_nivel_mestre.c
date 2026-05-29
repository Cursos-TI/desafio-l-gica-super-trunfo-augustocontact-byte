#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - 
// Tema 3 
/*No nível Mestre, o desafio se intensifica com a adição de funcionalidades avançadas, 
como menus dinâmicos e lógica de decisão complexa com operadores ternários.*/

int main (){

    int jogador, computador, resultado;
    char tipocomparacao;

    srand (time(0));
    computador = rand () %100 + 1;
    printf("\n");
    printf("                -----Bem vindo ao jogo-----\n");
    printf("_Voce deve escolher um modo de ataque e um valor entre 0 a 100_\n");
    printf("                  1. Power (maior valor)  \n");
    printf("                   2. Pux (menor valor)  \n");

    printf("Digite aqui o modo:");
    scanf("%c", &tipocomparacao);

    printf("Digite o valor:");
    scanf("%d", &jogador);

switch (tipocomparacao)
{
case '1':
    printf("Voce escolheu a opcao Power\n");
    printf("\n");
    if (jogador > computador)
    {
        printf("Voce ganhou!\n");
    }else if (jogador == computador)
    {
        printf("Empate!\n");
    }else{

        printf("Voce perdeu!\n");
    }
    printf("\n");
    printf("O computador lancou: %d e o jogador lancou: %d\n", computador, jogador);
    break;

case '2':
    printf("Voce escolheu a opcao Pux\n");
    if (jogador < computador)
    {
        printf("Voce ganhou!\n");
    }else if (jogador == computador)
    {
        printf("Empate!\n");
    }else{

        printf("Voce perdeu!\n");

    printf("\n");
    printf("O computador lancou: %d e o jogador lancou: %d\n", computador, jogador);
    break;

default:
printf("Opcao ivalida!\n");
    break;
}
}
}