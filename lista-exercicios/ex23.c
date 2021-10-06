#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia um número e imprima se este número é ou não par.

    ENTRADAS:   numero (int)
    SAIDAS:     printf
*/

int main(){
//  Variáveis
    int numero;

//  Coletar entradas
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

//   Exibir saidas
    printf("\nO numero %d eh ", numero);
    if ((numero % 2) == 0){
        printf("PAR.");
    }else{
        printf("IMPAR.");
    }
    sleep(60);
}