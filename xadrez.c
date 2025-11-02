#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int bispo = 0; // Diagonal superior direito
    int torre = 0; // Se move para a direita
    int rainha; // Se move para a esquerda
    int frente, lado; // Movimentaçao do cavalo em L

    // Implementação de Movimentação do Bispo
    do {

        // Em quanto a condição do bispo for menor ou igual a 5 ele se movimentará

        printf("O bispo andou %d casa(s) para a diagonar superior direito.\n", bispo);
        bispo++;
    } while (bispo <= 5);

    // Implementação de Movimentação da Torre

    while (torre <= 5) {

        // Em quanto a condição for menor igual a 5 a torre se movimentará

        printf("A torre andou %d casa(s) para a direita\n", torre);
        torre++;
    };


    // Implementação de Movimentação da Rainha
    for (rainha = 0; rainha <= 8; rainha++) {

        // Em quanto a condiçao for menor ou igual a oito ela se movimentará

        printf("A rainha andou %d casa(s) para a esquerda.\n", rainha);
    };

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    frente = 1;
    while (frente--)
    {
        for(lado = 1; lado <= 2; lado++) {
            printf("Cavalo se movimentou %d casas para o lado\n", lado);
        };
        if (frente == 0) {
            break;
        } else {
            printf("Cavalo se movimentou %d casa(s) para frente", frente);
        };
        
    };
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
