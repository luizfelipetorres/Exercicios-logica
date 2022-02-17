#include <stdio.h>

#define TVETOR 15

/*
Escreva um programa que ordene um array de inteiros de 15 posições utilizando o
método da bolha (bubble sort).
*/

int main(){
//  Variáveis
    int vetor[TVETOR] = {1, 14, 10 ,8, 7, 13, 12, 11, 9, 6, 5, 4, 3, 2, 15};
    int iCont, jCont;
    int limite = TVETOR - 1;
    int aux;
    int voltas = 0;
    int troca = 1;

    printf("Vetor antigo: ");
    for (iCont = 0; iCont < TVETOR; iCont++)
        printf("%d, ", vetor[iCont]);

    for (jCont = 0; jCont < TVETOR, troca == 1; jCont++){
        troca = 0;
        for (iCont = 0; iCont < limite ; iCont++){
            if (vetor[iCont] > vetor[iCont + 1]){
                aux = vetor[iCont + 1];
                vetor[iCont + 1] = vetor[iCont];
                vetor[iCont] = aux;
                troca = 1;
            }
            voltas++;
        }
        limite--;
    }

    printf ("\nVetor novo: ");
    for(iCont = 0; iCont < TVETOR; iCont++)
        printf("%d, ", vetor[iCont]);
    printf("\nVoltas: %d\n", voltas);
}