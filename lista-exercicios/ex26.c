#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores.

    ENTRADAS:       numero1, numero2, numero3   (float)
    SAIDAS:         soma                        (float)
*/

int main(){
//  Variáveis
    float numero1, numero2, numero3;
    float soma;

//  Coletar entradas
    printf("Digite 3 nnmeros separados por espacos: ");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

//  Tratar dados
    soma = numero1 + numero2 + numero3;
    if (numero1 > numero2)
        if (numero3 > numero2)
            soma = soma - numero2;
        else
            soma = soma - numero3;
    else
        if (numero3 > numero1)
            soma = soma - numero1;
        else
            soma = soma - numero3;

        
//  Exibir saídas
    printf("A soma dos dois maiores numeros eh %.2f.", soma);
    sleep(60);
}