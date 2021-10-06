#include <stdio.h>
#include <unistd.h>

/*
Escreva um algoritmo que leia 2 valores (x e y), que devem 
representar as coordenadas de um ponto em um plano. A seguir, 
determine qual o quadrante ao qual pertence o ponto, 
ou se está sobre um dos eixos cartesianos ou na origem (x=y=0).

    ENTRADAS:   ponto_x, ponto_y    (float)
    SAIDAS      quadrante           (int)
*/

int main(){
//  Variáveis 
    float ponto_x, ponto_y;
    int quadrante;

//  Coletar entradas
    printf("Digite os pontos X e Y, respectivamente: ");
    scanf("%f %f", &ponto_x, &ponto_y);

//  Tratar dados
    if ((ponto_x >= 0) && (ponto_y >=0))
        quadrante = 1; 
    else if ((ponto_x < 0) && (ponto_y >=0))
        quadrante = 2; 
    else if ((ponto_x < 0) && (ponto_y < 0))
        quadrante = 3; 
    else if ((ponto_x >= 0) && (ponto_y < 0))
        quadrante = 4; 

//  Exibir saídas
    printf("Esse ponto esta no %d quadrante.", quadrante);
    sleep(60);
}