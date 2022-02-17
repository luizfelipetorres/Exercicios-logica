#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    int numero1, numero2;
    int contador;
    int soma1 = 0, soma2 = 0;

//  Coletar entradas
    printf("Digite dois numeros separados por um espaco: ");
    scanf("%d %d", &numero1, &numero2);

//  Tratar dados
    for (contador = 1; contador <= (numero1 / 2); contador++){
        if ((numero1 % contador) == 0)
            soma1 += contador;
    }

    for (contador = 1; contador <= (numero2 / 2); contador++){
        if ((numero2 % contador) == 0)
            soma2 += contador;
    }

    if ((soma1 == numero2) && (soma2 == numero1))
        printf("%d e %d sao numeros amigos.", numero1, numero2);
    else    
        printf("%d e %d NAO sao numeros amigos.", numero1, numero2);
    

//  Exibir saídas

    sleep(60);
}