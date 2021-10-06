#include <stdio.h>
#include <unistd.h>

/*
    Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum
    mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado
    para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima"
    no sentido de que as notas de menor valor fossem distribuídas em número mínimo
    possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar
    uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$
    1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a
    distribuição das notas de acordo com o critério da distribuição ótima (considere existir
    notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00)

    ENTRADAS:   valor_solicitado; 
    SAIDAS:     nota1, nota2, nota5, nota10, nota20, nota50, nota100
*/

int main(){
//  Variáveis
    int valor_solicitado;
    int nota1, nota2, nota5, nota10, nota20, nota50, nota100;

//  Coletar entradas
    printf("Bem vindo ao caixa eletronico do banco BOLSO FURADO! =D\n");
    printf("*\n*\nDigite o valor que vc quer sacar: ");
    scanf("%d", &valor_solicitado);
    
//  Tratar dados
    nota100 = valor_solicitado / 100;
    nota50  = (valor_solicitado % 100) / 50;
    nota20  = ((valor_solicitado % 100) % 50) / 20;
    nota10  = (((valor_solicitado % 100) % 50) % 20) / 10;
    nota5   = ((((valor_solicitado % 100) % 50) % 20) % 10) / 5;
    nota2   = (((((valor_solicitado % 100) % 50) % 20) % 10) % 5) / 2;
    nota1   = ((((((valor_solicitado % 100) % 50) % 20) % 10) % 5) % 2);

//  Exibir saídas
    printf("\nNotas de 100  :   %d", nota100);
    printf("\nNotas de 50   :   %d", nota50);
    printf("\nNotas de 20   :   %d", nota20);
    printf("\nNotas de 10   :   %d", nota10);
    printf("\nNotas de 5    :   %d", nota5);
    printf("\nNotas de 2    :   %d", nota2);
    printf("\nNotas de 1    :   %d", nota1);
    sleep(100);
}