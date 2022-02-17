#include <stdio.h>
#include <unistd.h>

#define TAMANHO_VETOR 10

/*
Faça um programa em C que copie o conteúdo de um vetor de 10 posições de inteiro em
um segundo vetor e imprima este último
*/

int main(){
//  Variáveis
    int vetor1[TAMANHO_VETOR] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int vetor2[TAMANHO_VETOR];
    int i;

//  Coletar entradas
    for (i = 0; i < TAMANHO_VETOR; i++){
        vetor2[i] = vetor1[i];
        printf("%d ", vetor2[i]);
    }
//  Tratar dados

//  Exibir saídas

    sleep(60);
}