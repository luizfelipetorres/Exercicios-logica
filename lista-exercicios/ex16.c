#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa para gerar o invertido de um número
    com três algarismos (123 - 321)
*/

int main(){

//  Variáveis
    int numero;
    int invertido;
    int centena, dezena, unidade;

//  Coletar entradas
    printf("Digite um numero de ate 3 algarismos: ");
    scanf("%d", &numero);

//  Tratar dados
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = (numero % 100) % 10;
    invertido = (unidade * 100) + (dezena * 10) + (centena * 1);

//  Exibir saídas
//    printf("centena: %d\ndezena: %d\nunidade: %d", centena, dezena, unidade);
    printf("\nO numero %d invertido eh igual a %d.", numero, invertido);
    sleep(60);
}