#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que calcule o quociente da divisão de A por B 
(número inteiros e positivos), ou seja, A / B, 
através de subtrações sucessivas. Esses dois valores são
passados pelo usuário através do teclado.
*/

int main(){
//  Variáveis
    int a, b;
    int contador;
    int resto;

//  Coletar entradas
    printf("Digite dois numeros separados por um espaco: ");
    scanf("%d %d", &a, &b);
    resto = a; 

//  Tratar dados
    for (contador = 0; resto >= b; contador++)
        resto -= b;

//  Exibir saídas
    printf("O resultado da divisao inteira de %d por %d eh %d", a, b, contador);
    sleep(60);
}