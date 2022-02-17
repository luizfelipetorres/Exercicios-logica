#include <stdio.h>
#include <unistd.h>

#define TVETOR 15

/*
Escreva um programa que leia um vetor de 15 posições de inteiros. Em seguida, o
programa deve ler um valor inteiro e imprimir o número de vezes que este valor ocorre
no vetor.
*/

int main(){
//  Variáveis
    int vetor[TVETOR];
    int numero;
    int vezes = 0;
    int i;

//  Coletar entradas
    for (i = 0; i < TVETOR; i++){
        printf("Alimente o vetor: ");
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero que vc quer verificar: ");
    scanf("%d", &numero);

    //Validar
    for (i = 0; i < TVETOR; i++)
        if (vetor[i] == numero)
            vezes++;    

//  Exibir saídas
    printf("Vc digitou esse numero %d vezes.", vezes);

    sleep(60);
}