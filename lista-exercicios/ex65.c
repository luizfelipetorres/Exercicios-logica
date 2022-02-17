#include <stdio.h>
#include <unistd.h>

#define TAMANHO_VETOR 10

/*
Faça um programa em C que leia um array de 20 inteiros e imprima o menor e o maior
valor dentre os elementos do array, bem como suas respectivas posições.
*/

int main(){
//  Variáveis
    int vetor[TAMANHO_VETOR];
    int i;
    int maior, menor;
    int pMaior, pMenor;

//  Coletar entradas
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (i == 0){
            maior = menor = vetor[i];
            pMaior = pMenor = 1;
        }else if (vetor[i] > maior){
            maior = vetor[i];
            pMaior = i + 1;
        }else if (vetor[i] < menor){
            menor = vetor[i];
            pMenor = i + 1;
        }
    }
    printf("\nMaior: %d - Posicao: %d\nMenor: %d - Posicao: %d", maior, pMaior, menor, pMenor);
    
    sleep(60);
}