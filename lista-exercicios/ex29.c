#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que calcula o desconto 
    previdenciário de um funcionário. Dado um salário, o programa 
    deve retornar o valor do desconto proporcional ao mesmo. O cálculo
    segue a regra: o desconto é de 11% do valor do salário, 
    entretanto, o valor máximo de desconto é 334,29, o que seja menor. 

    ENTRADA:        vSalario        (float)
    SAIDA:          vDesconto       (float)
*/

int main(){
//  Variáveis
    float vSalario;
    float vDesconto;

//  Coletar entradas
    printf("Digite o valor do seu salario:\n\nR$ ");
    scanf("%f", &vSalario);

//  Tratar dados
    vDesconto = vSalario * 0.11;
    if (vDesconto >= 334.29){
        vDesconto = 334.29;
    }

//  Exibir saídas
    printf("\n\nO valor do seu desconto previdenciario eh de R$ %.2f.", vDesconto);
    sleep(60);
}