#include <stdio.h>
#include <unistd.h>

/*
    Ler DOIS NÚMEROS INTEIROS e exibir
    o QUOCIENTE e o RESTO da DIVISÃO INTEIRA entre eles
*/

int main(){
    int numero1, numero2;
    float quociente, resto;

//  Coletar entradas
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("\nDigite outro numero: ");
    scanf("%d", &numero2);

//  Tratar dados
    quociente = numero1 / numero2;
    resto = numero1 % numero2;

//  Exibir saídas
    printf("O quociente da divisao eh: %.2f\nO resto eh: %.2f", quociente, resto);
    sleep(10);
}