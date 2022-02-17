#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    float numero;
    int contador;
    int validador = 0;

//  Coletar entradas
    printf("Digite um numero: ");
    scanf("%f", &numero);

//  Tratar dados
    for (contador = 1; (contador < numero) && (validador == 0); contador++){
        if ((contador * (contador + 1 ) * (contador + 2)) == numero)
            validador = 1;
    }

    if (validador == 1)
        printf("Esse numero eh triangular");
    else
        printf("Esse numero nao eh triangular");
    
//  Exibir saídas

    sleep(60);
}