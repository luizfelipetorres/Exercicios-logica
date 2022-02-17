#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que leia 5 números, e imprima a média entre eles.
*/

int main(){
//  Variáveis
    int i, numero;
    float resultado = 0;

    for (i = 1; i <= 5; i++){
        printf("\nDigite o %do numero: ", i);
        scanf("%d", &numero);
        resultado += numero;
    }

    resultado /= 5;
    printf("\nA media eh %.2f.", resultado);
    sleep(60);
}