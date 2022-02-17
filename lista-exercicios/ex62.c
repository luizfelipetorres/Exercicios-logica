#include <stdio.h>
#include <unistd.h>

#define TAMANHO_VETOR 10

/*
Faça um programa em C que leia um array de 10 posições e conte quantos números pares
são elementos do array. Imprima esta quantidade.
*/

int main(){
//  Variáveis
    int vetor[TAMANHO_VETOR];
    int i;
    int qtd_pares = 0;

//  Coletar entradas
    for (i = 0; i < TAMANHO_VETOR; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if ((vetor[i] % 2) == 0)
            qtd_pares++;
    }
    printf("Voce digitou %d numeros pares.", qtd_pares);

    sleep(60);
}