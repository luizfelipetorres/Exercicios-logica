#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que leia um número inteiro de 1 a 7 
e informe o dia da semana correspondente, sendo domingo o dia 
de número 1. Se o número não corresponder a um
dia da semana, mostre uma mensagem de erro

    ENTRADAS:       numero          (int)
    SAIDAS:         dia_da_semana   (printf)
*/

int main(){
//  Variáveis
    int numero;

//  Coletar entradas
    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%d", &numero);

//  Tratar dados
    switch (numero){
        case 1 : 
            printf("\nDomingo");
            break;
        case 2 : 
            printf("\nSegunda");
            break;
        case 3 : 
            printf("\nTerca");
            break;
        case 4 : 
            printf("\nQuarta");
            break;
        case 5 : 
            printf("\nQuinta");
            break;
        case 6 : 
            printf("\nSexta");
            break;
        case 7 : 
            printf("\nSabado");
            break;
        default :
            printf("\nERRO:: O numero %d nao corresponde a um dia da semana", numero); 
    }

    sleep(60);
}