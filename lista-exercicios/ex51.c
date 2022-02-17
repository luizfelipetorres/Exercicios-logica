#include <stdio.h>
#include <unistd.h>

/*
A série de Fibonacci é formada pela sequencia:
• 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
Escreva um programa que gere a série de FIBONACCI até o N-ésimo termo 
(com N sendo uma entrada do algoritmo).
*/

int main(){
//  Variáveis
    int numero;
    int var1 = 0, var2 = 1;
    int auxiliar = 0;
    int contador = 0;

//  Coletar entradas
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("Segue a seguencia de Fibonacci ate a %d posicao: \n", numero);

//  Tratar dados
    for (contador = 0; contador < numero; contador++){
        printf("%d", var2);
        auxiliar = var2;
        var2 += var1;
        var1 = auxiliar;

    //Apenas para deixar organizado
        if ((contador + 1) < numero) 
            printf(", ");
    }
    sleep(60);
}