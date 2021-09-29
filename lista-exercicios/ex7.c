#include <stdio.h>
#include <unistd.h>

/*
    Solicitar a IDADE de uma pessoa em DIAS e
    informar a idade em ANOS, MESES e dias

    ENTRADAS:   idades_dias
    SAIDAS:     idade_anos, idade_meses, idade_dias
*/

int main(){
    int idade_dias;
    int idade_anos, idade_meses;

//  Coletar entradas
    printf("Digite a sua idade em dias: ");
    scanf("%d", &idade_dias);

//  Tratar dados
    idade_anos = idade_dias / 365;
    idade_meses = (idade_dias % 365) / 30;  
    idade_dias = (idade_dias % 365) % 30;

//  Exibir saídas
    printf("Vc tem %d anos, %d meses e %d dias.", idade_anos, idade_meses, idade_dias);
    sleep(100);
}