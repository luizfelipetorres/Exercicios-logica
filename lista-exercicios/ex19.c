#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que permute o valor de duas variáveis inteiras

f(x) = ax + b

0 = ax + b
0 = b

ENTRADAS:   a, b    (float) 
SAIDAS      raiz    (float)
*/

int main(){
//  Variáveis
    float a, b;
    float raiz;

//  Coletar entradas
    printf("f(x) = ax + b\n\n");
    printf("Digite o valor de a e b, separados por um espaco: ");
    scanf("%f %f", &a, &b);

//  Tratar dados
    raiz = - (b / a);

//  Exibir saídas
    printf("A raiz da equacao f(x) = %.2fx + %.2fb eh %.2f.", a, b, raiz);
    sleep(60);
}