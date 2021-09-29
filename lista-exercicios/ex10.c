#include <stdio.h>
#include <unistd.h>

/*
    Converter um INTEIRO informado menor que 32 
    para sua representação em binário
            
            16 8 4 2 1     
    31  =   1  1 1 1 1  
    0   =   0  0 0 0 0 

    ENTRADAS:   inteiro
    SAIDA:      binario
*/

int main(){
    int inteiro, binario;
    int b1, b2, b3, b4, b5;

//  Coletar entradas
    printf("Digite um numero menor que 32: ");
    scanf("%d", &inteiro);

//  Tratar dados
    b5 = inteiro % 2;
    b4 = (inteiro / 2) % 2;
    b3 = ((inteiro / 2) / 2) % 2;
    b2 = (((inteiro / 2) / 2) / 2) % 2;
    b1 = (((inteiro / 2) / 2) / 2) / 2;
    binario = (b1 * 10000) + (b2 * 1000) + (b3 * 100) + (b4 * 10) + (b5 * 1);

//Retornar saídas
    printf("Representaca de %d em binario: %d", inteiro, binario);    
    sleep(60);
}