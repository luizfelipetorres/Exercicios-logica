#include <stdio.h>
#include <unistd.h>

/*
    Dado o tamanho do lado de um quadrado, 
    calcular a área e o perímetro do mesmo 

    ENTRADAS:   lado
    SAIDAS:     area, perimetro
*/

int main(){
    int lado;
    int area, perimetro;

//  Coletando entradas
    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

//  Tratando dados
    area = lado * lado;
    perimetro = lado * 4;

//  Exibindo saídas
    printf("Area: %d\nPerimetro: %d", area, perimetro);
    sleep(10);
}