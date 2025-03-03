#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Procedimentos
void moverBispo(int casas){

    if(casas > 0){
        moverBispo(casas - 1);
        printf("Diagonal direita para cima (moveu %dx)\n", casas);
    }

}

void moverTorre(int casas){
    if(casas > 0){
        moverTorre(casas - 1);
        printf("Direita (moveu %dx)\n", casas);
    }
}

void moverRainha(int casas){
    if(casas > 0){
        moverRainha(casas - 1);
        printf("Esquerda (moveu %dx)\n", casas);
    }
}

void moverCavalo(int casas){
    int i = 0, contagem;

    while (casas--)
    {
        for (i = 0; i < 2; i++)
        {
            contagem = i + 1;
            printf("Cima (moveu %dx)\n", contagem);
        }
        contagem = i + 1;
        printf("Direita (moveu %dx)\n", contagem);
    }
}

int main() {
    // Variáveis
    int casas_bispo = 5, casa_torre = 5, casas_rainha = 8;
    int casas_cavalo = 1; //Flag controla movimento em 'L';

    // Implementação de Movimentação do Bispo
    printf("Bispo \n");
    moverBispo(casas_bispo);
    printf("\n\n");

    // Implementação de Movimentação da Torre
    printf("Torre \n");
    moverTorre(casa_torre);
    printf("\n\n");

    // Implementação de Movimentação da Rainha
    printf("Raínha \n");
    moverRainha(casas_rainha);
    printf("\n\n");
    
    // Nível Aventureiro - Movimentação do Cavalo

    // Nível Mestre:- Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    printf("Cavalo \n");    
    moverCavalo(casas_cavalo);


   

    return 0;
}
