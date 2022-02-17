#include <stdio.h>
#include <unistd.h>

/*
    Ler um número inteiro e exibir o seu sucessor

    ENTRADA:    numero
    SAIDA:      sucessor
*/

int main(){
    int numero;
    int sucessor;

//  Coletar entradas
    printf("Digite um numero: ");
    scanf("%d", &numero);

//  Tratar dados
    sucessor = numero + 1;

//  Exibir saídas
    printf("O sucessor do numero %d eh %d.", numero, sucessor);
    sleep(10);
}