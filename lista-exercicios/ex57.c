#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    int iCont, jCont;
    float soma = 1;
    int potencia = 1;
    int numero;

//  Coletar entradas
    printf("Informe um numero positivo: ");
    scanf("%d", &numero);

    for (jCont = 2; jCont <= numero; jCont++){
        for (iCont = 1; iCont <= numero; iCont++)
            potencia *= jCont;
        soma += (1.0/potencia);
    }

//  Exibir saídas
    printf("Soma: %f\n", soma);

    sleep(10);
}