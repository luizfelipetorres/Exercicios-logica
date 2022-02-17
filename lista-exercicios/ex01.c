#include <stdio.h>
#include <unistd.h>

/*
    Dado o tamanho da base e da altura de um retângulo, 
    calcular a sua ÁREA e o seu PERÍMETRO 

    ENTRADAS:   base, altura
    SAIDAS:     area, perimetro
*/

int main(){
    int base;
    int altura;
    int area;
    int perimetro;

//  Entradas
    printf("Digite a base do retangulo: ");
    scanf("%d", &base);
    printf("Digite a altura do retangulo:");
    scanf("%d", &altura);

//  Tratamento de dados
    area = base * altura;
    perimetro = (base + altura) * 2;

//  Saidas
    printf("Area: %d\nPerimetro: %d", area, perimetro);
    sleep(10);
}