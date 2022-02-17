#include <unistd.h>
#include <stdio.h>
/*
Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e
um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva
um programa, que imprima o tempo necessário para que a população do país A ultrapasse
a população do país B.
*/

int main(){
//  Variáveis
    int paisA = 5000000, paisB = 7000000;
    float taxaA = 1.03, taxaB = 1.02;
    int anos = 0;

//  Tratar dados

    while (paisA < paisB){
        printf("\n----------------Ano: %d\nPais A: %d\nPais B: %d\n", anos, paisA, paisB);
        anos++;
        paisA *= taxaA;
        paisB *= taxaB;
    }

//  Exibir saídas
    printf("Depois de %d anos, a populacao do pais A (%d) ultrapassa a do pais B (%d).", anos, paisA, paisB);
    sleep(60);
}