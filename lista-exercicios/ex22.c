#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia um número e exiba o seu módulo.

    ENTRADAS:   numero (float)
    SAIDAS:     modulo (float)
*/

int main(){
//  Variáveis 
    float numero;
    float modulo;

//  Coletar entradas
    printf("Digite um numero: ");
    scanf("%f", &numero);

//  Tratar dados
    if (numero < 0)
        modulo = numero * -1;
    else
        modulo = numero;
    
//  Exibir saídas
    printf("\nO modulo de %.2f eh %.2f.", numero, modulo);
    sleep(50);
}