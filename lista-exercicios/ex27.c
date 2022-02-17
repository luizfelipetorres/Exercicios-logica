#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia 3 números e calcule 
    a média ponderada entre eles.
    Considere que o maior número recebe peso 5 
    e os outros dois recebem peso 2,5.

    ENTRADA:    numero1, numero2, numero3   (float)
    SAIDA       media                       (float)
*/

int main(){
//  Variáveis
    float numero1, numero2, numero3;
    float media;

//  Coletar entradas
    printf("Digite tres numeros separados por espacos: ");
    scanf("%f %f %f", &numero1, &numero2, &numero3);

//  Tratar dados
    if (numero1 > numero2){
        numero2 = numero2 * 2.5;
        if (numero1 > numero3){
            numero1 = numero1 * 5;
            numero3 = numero3 * 2.5;
        }else{
            numero3 = numero3 * 5;
            numero1 = numero1 * 2.5;
        }
    }else{
        numero1 = numero1 * 2.5;
        if (numero2 > numero3){
            numero2 = numero2 * 5;
            numero3 = numero3 * 2.5;
        }else{
            numero3 = numero3 * 5;
            numero2 = numero2 * 2.5;
        }
    }
    media = (numero1 + numero2 + numero3) / 10;

//  Exibir saídas
    printf("\nA media ponderada desses numeros eh %.2f.", media);
    sleep(60);
}