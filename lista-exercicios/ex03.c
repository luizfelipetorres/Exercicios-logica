#include <stdio.h>
#include <unistd.h>

/*
    Dado o tamanho do RAIO de uma CIRCUNFERÊNCIA,
    calcular a ÁREA e o PERÍMETRO

    ENTRADAS:   raio
    SAIDAS:     perimetro
*/

int main(){
    float raio;
    float area, perimetro;
    float pi = 3.14;

//  Coletando entradas
    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

//  Tratando dados
    area = pi * (raio * raio);
    perimetro = (2 * pi) * raio;

//  Exibindo saídas
    printf("Area: %.2f\nPerimetro: %.2f", area, perimetro);

    sleep(10);
}