#include <stdio.h>

/*
Faça um algoritmo que transforme uma velocidade 
fornecida em m/s pelo usuário para Km/h. 
Para tal, multiplique o valor em m/s por 3,6

ENTRADA:    velocidade_ms
SAIDA:      velocidade_kmh
*/

int main(){
    float velocidade_kmh;
    float velocidade_ms;
    
//  Coletando entradas
    printf("Digite a velocidade em metros por segundo: ");
    scanf("%f", &velocidade_ms);
    
//  Tradando dados
    velocidade_kmh = velocidade_ms * 3.6;

//  Retornando saídas 
    printf("\nA velocidade %f m/s equivale a %f km/h.", velocidade_ms, velocidade_kmh);
    
}
