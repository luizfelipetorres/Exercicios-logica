#include <stdio.h>
#include <unistd.h>

#define TAMANHO_VETOR 10

/*
Escreva um programa que leia dois vetores de números reais de mesma dimensão (10
posições), e imprima o vetor resultante da soma destes vetores.
*/

int main(){
//  Variáveis
    float vetor1[TAMANHO_VETOR], vetor2[TAMANHO_VETOR], vetor3[TAMANHO_VETOR];
    int i, posicao;

//  Coletar entradas
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("Digite dois numeros separados por espaco: ");
        scanf("%f %f", &vetor1[i], &vetor2[i]);
        vetor3[i] = vetor1[i] + vetor2[i];  
    }

    for (i = 0, posicao = 1; i < TAMANHO_VETOR; i++, posicao++)
        printf("posicao %d: %f\n", posicao, vetor3[i]); 

//  Tratar dados

//  Exibir saídas

    sleep(60);
}