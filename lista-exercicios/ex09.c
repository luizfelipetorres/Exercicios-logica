#include <stdio.h>
#include <unistd.h>

/*
    Faça um algoritmo que calcule e apresente 
    o valor do VOLUME de uma lata de óleo 
    dado o seu RAIO e sua ALTURA   

    ENTRADAS:   raio, altura
    SAIDAS:     volume
*/

int main(){
    float raio, altura;
    float volume;
    float pi = 3.14;

//  Coletar entradas
    printf("\nDigite a altura da lata: ");
    scanf("%f", &altura);

    printf("\nDigite o raio da lata: ");
    scanf("%f", &raio);

//  Tratar dados
    volume = pi * (raio * raio) * altura;

//  Exibir saídas
    printf("\nO volume da lata eh %.2f.", volume);
    sleep(60);
}