#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    int numero;
    int contador;
    int soma = 0;

//  Coletar entradas
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

//  Tratar dados
    for (contador = 1; contador <= (numero / 2); contador++){
        if ((numero % contador) == 0)
            soma += contador;
    }

    if (soma == numero)
        printf("Esse numero eh perfeito. *__*");
    else
        printf("Esse numero nao eh perfeito. D:");

//  Exibir saídas

    sleep(60);
}