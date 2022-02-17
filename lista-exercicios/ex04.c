#include <stdio.h>
#include <unistd.h>

/*
    Dadp os TRÊS LADOS de um TRIÂNGULO,
    determinar o PERÍMETRO

    ENTRADAS:   lado1, lado2, lado3
    SAIDAS:     perimetro
*/

int main(){
    int lado1, lado2, lado3;
    int perimetro;

//  Coletar entradas
    printf("Digite o tamanho do lado 1: ");
    scanf("%d", &lado1);

    printf("Digite o tamanho do lado 2: ");
    scanf("%d", &lado2);

    printf("Digite o tamanho do lado 3: ");
    scanf("%d", &lado3);

//  Tratar dados
    perimetro = lado1 + lado2 + lado3;

//  Exibir saídas
    printf("Perimetro do triangulo:  %d.", perimetro);
    sleep(10);
}
