#include <stdio.h>
#include <unistd.h>

#define TVETOR 10

/*
Escreva um programa que leia um vetor de 10 posições de inteiros e um inteiro. O
programa deve informar a primeira posição onde este inteiro ocorre no vetor ou -1 caso o
valor não ocorra no vetor (Busca Sequencial).
*/

int main(){
//  Variáveis
    int vetor[TVETOR]; //{1, 44, 55, 78, 100, 189, 200, 222, 333, 444};
    int numero;
    int indice = -1;
    int iCont;

//  Coletar entradas
    for (iCont = 0; iCont < TVETOR; iCont++){
        printf("Alimente a posicao %d do vetor: ");
        scanf("%d", &vetor[iCont]);
    }

    printf("Digite o número que você quer buscar: ");
    scanf("%d", &numero);

//  Tratar dados
    for (iCont = 0; iCont < TVETOR; iCont++){
        if (numero == vetor[iCont])
            indice = iCont;
    }

//  Exibir saídas
    printf("%d", indice);
}