#include <stdio.h>
#include <unistd.h>

/*
    Uma loja vende seus produtos no sistema entrada mais duas prestações, 
    sendo a entrada maior do que ou igual às duas prestações, 
    as quais devem ser iguais, inteiras e as maiores
    possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, 
    a entrada e as duas prestações são iguais a R$ 90,00;
    se o valor da mercadoria for R$ 302,75, a entrada é de R$ 102,75 
    e as duas prestações são a iguais a R$ 100,00. Escreva um programa que
    receba o valor da mercadoria e forneça o valor da entrada 
    e das duas prestações, de acordo com as regras acima. 
    Observe que uma justificativa para a adoção desta regra é
    que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações

    ENTRADAS:   vMercadoria             (float)
    SAIDAS:     vEntrada,               (float) 
                vPrestacao              (int)    
*/

int main(){
//  Variáveis
    float vMercadoria, vEntrada;
    int vPrestacao;

//  Coletar entradas
    printf("Digite o valor da mercadoria: R$ ");
    scanf("%f", &vMercadoria);

//  Tratar dados
    vPrestacao  = vMercadoria / 3;
    vEntrada    = vMercadoria - (vPrestacao * 2);

//  Exibir saídas
    printf("\nPara a mercadoria de R$ %.2f:\n\n", vMercadoria);
    printf("Entrada     : %.2f\n", vEntrada);
    printf("1 Prestacao : %d\n", vPrestacao);
    printf("2 Prestacao : %d", vPrestacao);
    sleep(60);
}