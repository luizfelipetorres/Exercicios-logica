#include <stdio.h>
#include <unistd.h>

/*
Uma Cia de pulverização utiliza avião para pulverizar lavouras. 
Os custos de pulverização dependem do tipo de praga e da área 
a ser contratada conforme a tabela:
    Tipo 1 – ervas daninhas R$ 50,00 por acre;
    Tipo 2 – gafanhotos R$ 100,00 por acre;
    Tipo 3 – broca R$ 150,00 por acre;
    Tipo 4 – todos acima R$ 250,00 por acre.

Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro 
tem um desconto de 5%. Em adição, qualquer fazendeiro cujo custo 
for maior do que R$ 750,00 tem um desconto de 10% sobre o valor 
que ultrapassar os R$ 750,00. Caso ambos os descontos se
aplicam o da área é calculado antes. 
Fazer um algoritmo que leia: o tipo de pulverização
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago.

    ENTRADA:    tipo    (int)
                area    (float)
    SAIDA:      valor   (float)
*/

int main(){
//  Variáveis
    int tipo;
    float area, acres;
    float valor, desconto = 1;

//  Coletar entradas
    printf("Digite o tipo de pulverizacao, sabendo que os valores abaixos são cobrados por acre pulverizado:");
    printf("\n1 - Ervas daninhas (R$ 50.00)\n2 - Gafanhotos(R$ 100.00)\n3 - Broca (R$ 150.00)\n4 - Todos acima (R$ 250.00)\n\n:> ");
    scanf("%d", &tipo);
    printf("\nDigite a area que sera pulverizada (em metros quadrados): ");
    scanf("%f", &area);

//  Tratar dados
    acres = area / 4046.856;

    if (acres > 1000)
        desconto = 0.95;

    switch (tipo){
        case 1:
            valor = 50;
            break;  
        case 2:
            valor = 100;
            break;  
        case 3:
            valor = 150;
            break;  
        case 4:
            valor = 250;
            break;
        default: 
            printf("ERRO:: Opção invalida.");
            break;  
    }
    
    //Valor a pagar por acre com o primeiro desconto, se houver
    valor = valor * acres * desconto;

    //Se o valor for maior que 750, aplicar desconto ao valor - 750 e depois somar 750
    if (valor > 750)
        valor = ((valor - 750) * 0.90) + (750);

//  Exibir saídas
    printf("\nVoce ira pagar R$ %.2f para pulverizar %.2f acres (%.2f metros quadrados).", valor, acres, area);
    sleep(60);
}