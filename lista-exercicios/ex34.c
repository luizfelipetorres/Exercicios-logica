#include <stdio.h>
#include <unistd.h>

/*
Uma financeira usa o seguinte critério para conceder empréstimos: 
o valor total do empréstimo deve ser até dez vezes o valor da renda mensal
do solicitante e o valor da prestação deve ser no máximo 30% da renda
mensal do solicitante. Escreva um programa que leia a renda mensal 
de um solicitante, o valor total do empréstimo solicitado e o
número de prestações que o solicitante deseja pagar e informe se 
o empréstimo pode ou não ser concedido.

    ENTRADAS:   renda_mensal, valor_solicitado,     (float)
                prestacoes                          (int)
    SAIDAS:     printf('sim' ou 'nao')
*/

int main(){
//  Variáveis
    float renda_mensal, valor_solicitado;
    int prestacoes;

//  Coletar entradas
    printf("Digite o valor da sua renda mensal: R$ ");
    scanf("%f", &renda_mensal);

    printf("\nDigite o valor do emprestimo: R$");
    scanf("%f", &valor_solicitado);

    printf("\nDigite a quantidade de parcelas: ");
    scanf("%d", &prestacoes);

//  Tratar dados
    if ((valor_solicitado > (renda_mensal * 10)) || ((valor_solicitado / prestacoes) > (renda_mensal * 0.3)))
        printf("\nO emprestimo NAO pode ser concedido");
    else
        printf("\nO emprestimo pode ser concedido");
        
    sleep(60);
}