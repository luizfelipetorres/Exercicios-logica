#include <stdio.h>
#include <unistd.h>

#define TVETOR 30

/*
Escreva um programa que leia o índice pluviométrico de cada dia do mês de junho e
informe o dia que mais choveu, o dia que menos choveu e as médias pluviométricas de
cada uma das duas quinzenas.

*/

int main(){
//  Variáveis
    int iPluviometrico[TVETOR];
    int soma1quinzena, soma2quinzena;
    float media1quinzena, media2quinzena;
    int maior, menor;
    int diaMaior, diaMenor;
    int i, dia;

//  Coletar entradas
    for (i = 0, dia = 1; i < TVETOR; i++, dia++){
        printf("Digite o indice pluviometrico do dia %d: ", dia);
        scanf("%d", &iPluviometrico[i]);

        //Dias que mais e menos choveu
        if (i == 0){
            diaMaior = diaMenor = dia;
            maior = menor = iPluviometrico[i];
        } else {
            if (iPluviometrico[i] > maior){
                maior = iPluviometrico[i];
                diaMaior = dia;
            }
            if (iPluviometrico[i] < menor){
                menor = iPluviometrico[i];
                diaMenor = dia;
            }

        }
            
        //Soma das quinzenas
        if (i < 16)
            soma1quinzena += iPluviometrico[i];
        else
            soma2quinzena += iPluviometrico[i];
    }
    //Media das quinzenas
    media1quinzena = soma1quinzena / 15;
    media2quinzena = soma2quinzena / 15;

    printf("\nDia que mais choveu: %d (%dmm)\n", diaMaior, maior);
    printf("Dia que menos choveu: %d (%dmm)\n", diaMenor, menor);
    printf("Media 1 quinzena: %.2f\n", media1quinzena);
    printf("Media 2 quinzena: %.2f\n", media2quinzena);

    sleep(60);
}