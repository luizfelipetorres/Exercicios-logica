#include <stdio.h>
#include <unistd.h>

/*
    Faça um algoritmo para calcular a nota semestral de um aluno
    A nota semestral é obtida pela média aritmética entra a nota de 2 bimestres.
    Cada nota de bimestre é composta por 2 notas de provas

    PROPOSTA DO ALUNO: Incrementar o código com a pergunta qual é a média para passar
        Se a nota semestre for maior que a média, parabenizar
        Senão, mandar para recuperação

    ENTRADAS:   nota1b1, nota2b1, nota1b2, nota2b,
    SAIDAS:     nota_semestre
*/

int main(){
    float nota1b1, nota2b1, nota1b2, nota2b2; //Notas das provas de cada bimestre
    float notab1, notab2;   //Notas bimestrais
    float nota_semestre;    //Nota final (semestre)
    float nota_corte;       //Nota de corte

/*  PROPOSTA ALUNO*/
    printf("Qual eh a nota de corte? ");
    scanf("%f", &nota_corte);

//  Coletar entradas
    printf("Digite a 1 nota do 1 bimestre: ");
    scanf("%f", &nota1b1);
    
    printf("Digite a 2 nota do 1 bimestre: ");
    scanf("%f", &nota2b1);

    printf("Digite a 1 nota do 2 bimestre: ");
    scanf("%f", &nota1b2);

    printf("Digite a 2 nota do 2 bimestre: ");
    scanf("%f", &nota2b2);

//  Tratar dados
    notab1 = (nota1b1 + nota2b1) / 2.0;
    notab2 = (nota1b2 + nota2b2) / 2.0;
    nota_semestre = (notab1 + notab2) / 2.0;

//  Exibir saídas
    printf("\nSeguem os seus resultados\n\n1 bimestre: %.2f\n2 bimestre: %.2f\n\nSemestre: %.2f\n", notab1, notab2, nota_semestre);
    
/*  PROPOSTA ALUNO */
    if (nota_semestre >= nota_corte){
        printf("Passou, mizeravel! =D");
    }else{
        printf("Vai pra recuperacao D:");
    }

    sleep(120);
}