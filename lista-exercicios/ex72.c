#include <stdio.h>
#include <unistd.h>

#define TVETOR 10

/*
Escreva um programa que leia um vetor de 10 posições ordenados de inteiros e um
inteiro. O programa deve informar a primeira posição onde este inteiro ocorre no vetor ou
-1 caso o valor não ocorra no vetor (Busca Binária).
*/

int main(){
//  Variáveis
    int vetor[TVETOR] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int inicio, meio, fim;
    int iCont;
    int indice = -1;
    int aux = 0;
    int numero;

//  Coletar entradas
/*    for (iCont = 0; iCont < TVETOR; iCont++){
        printf("Alimente a posição %d do vetor: ", iCont);
        scanf("%d", &vetor[iCont]);
    }
*/

    printf("Digite o numero que voce quer buscar: ");
    scanf("%d", &numero);

    inicio = 0;
    fim = TVETOR - 1;
    meio = (inicio + fim) / 2;
    while ((inicio < fim) && (indice == -1)){
        printf("Execução %d.\nInicio: %d\nMeio: %d (%d)\nFim: %d\n------------", aux, inicio, meio, vetor[meio], fim);
        aux++;
        if (numero == vetor[meio])
            indice = meio;
        else if (numero > vetor[meio]){
            inicio = meio + 1;
            meio = (inicio + fim) / 2;
        }else{
            fim = meio - 1;
            meio = (inicio + fim) / 2;
        }
    }

//  Exibir saídas
    printf("\n%d", indice);


}