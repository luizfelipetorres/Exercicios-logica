#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que determine se um dado número N 
(digitado pelo usuário) é primo ou não.
*/

int main(){
//  Variáveis
    int numero;
    int contador;
    int divisores = 0;

//  Coletar entradas
    printf("Digite um numero: ");
    scanf("%d", &numero);

//  Tratar dados
    for (contador = 1; contador <= numero; contador++)
        if ((numero % contador) == 0)
            divisores++;

//  Exibir saídas
    if (divisores == 2)
        printf("\n%d tem %d divisores e eh primo", numero, divisores);
    else
        printf("\n%d tem %d divisores e nao eh primo.", numero, divisores);

    sleep(60);
}