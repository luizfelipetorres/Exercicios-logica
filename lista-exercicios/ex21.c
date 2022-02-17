#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia um número 
    e exiba se ele é positivo ou negativo.

    ENTRADA:    numero (float)
    SAIDA:      printf()
*/

int main(){
//  Variáveis
    float numero;

//  Coletar entradas
    printf("Digite um numero: ");
    scanf("%f", &numero);

//  Exibir saídas
    printf("\nO numero %.2f eh ", numero);
    if (numero >= 0){
        printf("POSITIVO");
    }else{
        printf("NEGATIVO");
    }
    sleep(60);
}