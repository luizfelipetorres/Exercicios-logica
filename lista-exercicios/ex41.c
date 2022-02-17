#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que imprima todos os números inteiros do intervalo 
fechado de 1 a 100. 
*/

int main(){
//  Variáveis
    int fim = 100, i;

//  Exibir saídas
    for(i=1; i<=fim; i++){
        printf("%d \n", i);
    }

    sleep(60);
}