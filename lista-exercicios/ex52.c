#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    int numero1, numero2, numero3;
    int auxiliar;
    int i;
    int qtd;

//  Coletar entradas
    printf("Digite o primeiro numero da serie: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero da serie: ");
    scanf("%d", &numero2);
    printf("Digite a quantidade de termos que vc quer ver dessa serie (maior que 3): ");
    scanf("%d", &qtd);


//  Tratar dados
    for (i = 1; i <= qtd; i++){
        if ((i % 2) == 0){
            numero3 = numero2 - numero1;
        }else{
            numero3 = numero2 + numero1;
        }
        auxiliar = numero2;
        numero2 = numero3;
        numero1 = auxiliar;
        printf("%d, ", numero3);
    }

//  Exibir saídas

    sleep(60);
}