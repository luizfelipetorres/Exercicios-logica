#include <stdio.h>
#include <unistd.h>

/*
. Em diversas situações, é útil o uso de dígitos verificadores. Dígito
verificador ou algarismo de controle é um mecanismo de autenticação utilizado para
verificar a validade e a autenticidade de um valor numérico, evitando dessa forma fraudes
ou erros de transmissão ou digitação. Uma das formas mais comuns de cálculo de dígito
verificadores é o método conhecido por módulo 11. O cálculo do DV no módulo 11 é
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do
número, começando da direita para a esquerda (do dígito menos significativo para o
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o
valor do dígito verificador quando este é 10. Escreva um programa que receba um
número com os 4 primeiros dígitos de uma agência e imprima o número da agência
completo (numero – dv).

    ENTRADAS:   agencia     (int)
    SAIDAS:     digito      (int)
*/

int main(){
//  Variáveis
    int agencia;
    int digito;
    int n1, n2, n3, n4;

//  Coletar entradas
    printf("Digite o numero da agencia sem o digito: ");
    scanf("%d", &agencia);

//  Tratar dados
    n1 = agencia / 1000;
    n2 = (agencia % 1000) / 100;
    n3 = ((agencia % 1000) % 100) / 10;
    n4 = (((agencia % 1000) % 100) % 10) / 1;

    digito = 11 - (((n4 * 2) + (n3 * 3) + (n2 * 4) + (n1 * 5)) % 11);

//  Exibir saídas
    printf("\nO digito verificador da agencia %d eh ", agencia);
    if (digito == 10)
        printf("X (%d-X).", agencia);
    else
        printf("%d (%d-%d)", digito, agencia, digito);
    sleep(60);
}