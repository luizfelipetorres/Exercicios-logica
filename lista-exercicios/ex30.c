#include <stdio.h>
#include <unistd.h>

/*
Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Álcool -    
        Até 25 litros, desconto de 2% por litro
        Acima de 25 litros, desconto de 4% por litro
Gasolina -
        Até 25 litros, desconto de 3% por litro
        Acima de 25 litros, desconto de 5% por litro

Escreva um algoritmo que leia o número de litros vendidos e o tipo 
de combustível (codificado da seguinte forma: A-álcool, G-gasolina), 
calcule e imprima o valor a ser pago pelo cliente sabendo-se 
que o preço do litro da gasolina é R$ 2,70 e o preço do litro
do álcool é R$ 1,90.

    ENTRADAS:       tipo    (char)
                    vol     (float)
    
    SAIDAS:         valor   (float)
*/

int main(){
//  Variáveis
    char tipo;
    float vol;
    float valor, desconto;

//  Coletar entradas
    printf("Digite o tipo de combustivel (A ou G): ");
    scanf("%c", &tipo);

    printf("Digite o volume em litros: ");
    scanf("%f", &vol);

//  Tratar dados
    switch (tipo){
        case 'A' :
        case 'a' :
            valor = 1.9;
            if (vol <= 25)
                desconto = 0.98;
            else
                desconto = 0.96;
            break;
        case 'G' :
        case 'g' :
            valor = 2.7;
            if (vol <= 25)
                desconto = 0.97;
            else
                desconto = 0.95;
            break;
        default : 
            printf("Tipo inválido.");
    }

//  Exibir saídas
    valor = valor * vol * desconto;
    printf("Vc ira pagar R$ %.2f para abastecer %.2f  litros.", valor, vol);
    sleep(60);
}