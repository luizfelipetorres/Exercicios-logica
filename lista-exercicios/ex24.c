#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia três números e mostre o maior entre eles.

    ENTRADAS:   numero1, numero2, numero3   (float)
    SAIDAS:     maior número                (float)
*/

int main(){
//  Variáveis
    float numero1, numero2, numero3;
    float maior;

//  Coletar entradas
    printf("Digite tres numeros separados por espacos: ");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

//  Tratar dados
    if (numero1 > numero2){
        maior = numero1;
    }else {
        maior = numero2;
    }
    
    if(numero3 > maior){
        maior = numero3;
    }

//  Exibir saídas
    printf("\nO numero %.2f eh o maior entre os tres.", maior);
    sleep(60);
}