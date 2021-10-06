#include <stdio.h>
#include <unistd.h>

/*
Em uma certificação são feitos são feitos 5 exames 
(I, II, III, IV e V). Escreva um programa que leia as notas 
destes exames e imprima a classificação do aluno, sabendo
que a média é 70.

Classificação:  A – passou em todos os exames;
                B – passou em I, II e IV, mas não em III ou V;
                C – passou em I e II, III ou IV, mas não em V.
                Reprovado – outras situações

    ENTRADAS:   nota1, nota2, nota3, nota4, nota5 (float)
    SAIDAS:     printf('A' ou 'B', ou 'C' ou 'REPROVADO')
*/

int main(){
//  Variáveis
    float nota1, nota2, nota3, nota4, nota5;

//  Coletar entradas
    printf("Digite a sua nota no exame I: ");
    scanf("%f", &nota1);

    printf("Digite a sua nota no exame II: ");
    scanf("%f", &nota2);

    printf("Digite a sua nota no exame III: ");
    scanf("%f", &nota3);

    printf("Digite a sua nota no exame IV: ");
    scanf("%f", &nota4);
    
    printf("Digite a sua nota no exame V: ");
    scanf("%f", &nota5);

//  Tratar dados
    printf("\nClassificacao: ");
    if ((nota1 >=70) && (nota2 >=70) && (nota3 >=70) && (nota4 >=70) && (nota5 >=70))
        printf("A");
    else if((nota1 >=70) && (nota2 >=70)  && (nota4 >=70) && ((nota3 >= 70) || (nota5 >= 70)))
        printf("B");
    else if(((nota1) && (nota2)) && ((nota3) || (nota4)))
        printf("C");
    else
        printf("REPROVADO");

    sleep(60);
}