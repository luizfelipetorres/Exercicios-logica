#include <stdio.h>
#include <unistd.h>

/*
Faça um programa em C que crie e inicialize um array de 20 posições de inteiros com 0
para cada elemento. Imprima o vetor em seguida, indicando a posição e o valor na
posição (um por linha).
*/

int main(){
//  Variáveis
    int vetor[19];
    int posicao = 1;
    int i;

//  Tratar dados
    for (i = 0; i <= 19; i++, posicao++){
        vetor[i] = 0;
        printf("Posicao %d: %d\n", posicao, vetor[i]);
    }

//  Exibir saídas

    sleep(60);
}