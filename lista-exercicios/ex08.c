#include <stdio.h>
#include <unistd.h>

/*
    Dado que a fórmula para conversão de Fahrenheit para Celsius
    é C = 5/9 (F-32), leia um valor de temperatura F e exiba em C

    ENTRADAS:   fahrenheit
    SAIDAS:     celsius
*/

int main(){
    float celsius, fahrenheit;

//  Ler as entradas
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

//  Tratar dados
    celsius = (5.0/9.0) * (fahrenheit - 32);

//  Exibir saidas
    printf("\nA temperatura em Celsius eh %.2f.", celsius);
    sleep(60);
}