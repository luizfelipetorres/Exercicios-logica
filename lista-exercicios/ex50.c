#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que leia um valor e imprima todas as possíveis 
combinações em que o lançamento de um par de dados tenha como resultado 
da soma dos valores dos dados o número lido. Por exemplo, se a entrada 
for o número 7, o programa deve imprimir as seguintes combinações:
• 1 6
• 2 5
• 3 4
• 4 3
• 5 2
• 6 1 
*/

int main(){
//  Variáveis
    int numero; 
    int contador;
    int auxiliar = 0;

//  Coletar entradas
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

//  Tratar dados
    for (contador = 1; contador < numero; contador++){
        auxiliar = numero - contador;
        printf("\n%d + %d = %d", contador, auxiliar, numero);
    }
    sleep(60);
}