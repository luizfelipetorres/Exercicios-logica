#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia o número equivalente ao mês e 
    imprima a quantidade de dias deste mês.

    rascunho
    se o mes for 2, dias = 28
    senao
        se o mes for <=7
            se o mes for par, dias = 30
            senao, dias = 31
        senao
            se o mes for par, dias = 31
            senao, dias = 30

    ENTRADAS:   mes         (int)
    SAIDAS:     dias        (int)
*/

int main(){
//  Variáveis
    int mes;
    int dias;
    int paridade;


//  Coletar entradas
    printf("Digite um mes de 1 a 12: ");
    scanf("%d", &mes);


//  Tratar dados
/*  Se paridade for 0, o número é par
    Se for 1, o número é impar
*/
    if (mes == 2)
        dias = 28;
    else{
        if(mes <= 7){
            if ((mes % 2) == 0)
                dias = 30;
            else 
                dias = 31;
        }else{
            if ((mes % 2) == 0)
                dias = 31;
            else
                dias = 30;
            }
    }

//  Exibir saídas
    printf("\nEsse mes tem %d dias.", dias);
    sleep(60);
}