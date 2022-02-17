#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que imprima todos os números inteiros de 100 a 1 
(em ordem decrescente).
*/

int main(){
//  Variáveis
    int i, fim=1;

//  Tratar dados
    for (i = 100; i >= fim; i--)
        printf("%d \n", i);

    sleep(60);
}