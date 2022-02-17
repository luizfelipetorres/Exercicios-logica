#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que imprima todos os números de 1 até 100, 
inclusive, e a soma de todos eles.
*/

int main(){
//  Variáveis
    int i, soma = 0;

//  Tratar dados
    for (i = 1; i <= 100; i++){
        soma += i;
        printf("Numero atual: %d - Soma: %d\n", i, soma);
    }

    sleep(60);
}