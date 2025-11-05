#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void rainha(int casas) {
    if(casas > 0) {
        
        rainha(casas - 1);
        printf("Rainha andou %d casa(s) para esquerda\n", casas);
        
    };
};

void torre(int casas) {
    if (casas > 0) {
        
        torre(casas - 1);
        printf("A torre andou %d casa(s) para direita\n", casas);
        
    };
};

void bispo(int casas) {
    if(casas > 0) {
        bispo(casas - 1);
        printf("O Bispo andou %d casa(s) para a diagonal superior direito\n", casas);
    };
};

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    int frente, lado; // Movimentaçao do cavalo em L

    // Implementação de Movimentação do Bispo
    bispo(5);

    // Implementação de Movimentação da Torre

    torre(5);

    // Implementação de Movimentação da Rainha
    rainha(8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    for(int i = 1, j = 2; i < j; i++, j--) {
        printf("Cavalo andou %d para a esquerda e %d para frente\n", i, j);
    };
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
