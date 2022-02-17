#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que imprima todos os números pares do intervalo 
fechado de 1 a 100.

*/

int main(){
//  Variáveis
    int i, fim=100;

//  Tratar dados
    for(i=0; i <= 100; i++){
        if ((i % 2) ==0)
            printf("%d\n", i);
    }

    sleep(60);
}