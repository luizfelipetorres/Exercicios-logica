#include <stdio.h>
#include <unistd.h>

#define TVETOR 10

/*
Faça um programa em C que leia dois vetores de 10 posições de inteiros e copie o maior
valor dos dois em cada posição em um terceiro vetor. Em seguida, imprima este terceiro
vetor.
*/

int main(){
//  Variáveis
    int vetor1[TVETOR], vetor2[TVETOR];
    int vetor3[2];
    int i;

//  Coletar entradas
    for (i = 0; i < TVETOR; i++){
        printf("Digite dois valores separados por espaco: ");
        scanf("%d %d", &vetor1[i], &vetor2[i]);

        if (i == 0){
            vetor3[0] = vetor1[i];
            vetor3[1] = vetor2[i];
        } else {
            if (vetor1[i] > vetor3[0])
                vetor3[0] = vetor1[i];
            if (vetor2[i] > vetor3[1])
                vetor3[1] = vetor2[i];
        }
    }
    printf("Maior v1: %d\nMaior v2: %d", vetor3[0], vetor3[1]);

//  Tratar dados

//  Exibir saídas

    sleep(60);
}