#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que receba um numero inteiro de 1 a 100 e mostre na tela o
numero por extenso.

    ENTRADA:    numero  (int)
    SAIDAS:     printf(numero extenso)
*/

int main(){
//  Variáveis
    int numero;
    int centena, dezena, unidade;

//  Coletar entradas
    printf("Digite um numero de 1 a 100: ");
    scanf("%d", &numero);
    printf("\n");

//  Tratar dados
    centena = numero / 100;
    dezena = (numero % 100) / 10;
    unidade = ((numero % 100) % 10) / 1;

    if ((numero < 0) || (numero > 100))
        printf("ERRO:: numero invalido.");
    else{
        switch (numero){
            case 100:
                printf("Cem");
                break; 
            case 0:
                printf("Zero");
                break; 
            default:
                switch (dezena){
                    case 9 :
                        printf("Noventa");
                        break;
                    case 8 :
                        printf("Oitenta");
                        break;
                    case 7 :
                        printf("Setenta");
                        break;
                    case 6 :
                        printf("Sessenta");
                        break;
                    case 5 :
                        printf("Cinquenta");
                        break;
                    case 4 :
                        printf("Quarenta");
                        break;
                    case 3 :
                        printf("Trinta");
                        break;
                    case 2 :
                        printf("Vinte");
                        break;
                    case 1 :
                        switch (unidade){
                            case 9 : 
                                printf("Dezenove");
                                break;
                            case 8 : 
                                printf("Dezoito");
                                break;
                            case 7 : 
                                printf("Dezessete");
                                break;
                            case 6 : 
                                printf("Dezesseis");
                                break;
                            case 5 : 
                                printf("Quinze");
                                break;
                            case 4 : 
                                printf("Quatorze");
                                break;
                            case 3 : 
                                printf("Treze");
                                break;
                            case 2 : 
                                printf("Doze");
                                break;
                            case 1 : 
                                printf("Onze");
                                break;
                            case 0 :
                                printf("Dez");
                        }
                    case 0 :
                        break;
                }
                if ((unidade != 0) && (dezena != 1)){
                    if (dezena >= 2)
                        printf(" e ");
                    switch (unidade){
                        case 9 : 
                            printf("Nove");
                            break;
                        case 8 : 
                            printf("Oito");
                            break;
                        case 7 : 
                            printf("Sete");
                            break;
                        case 6 : 
                            printf("Seis");
                            break;
                        case 5 : 
                            printf("Cinco");
                            break;
                        case 4 : 
                            printf("Quatro");
                            break;
                        case 3 : 
                            printf("Tres");
                            break;
                        case 2 : 
                            printf("Dois");
                            break;
                        case 1 : 
                            printf("Um");
                    }
                }
        }
    }
    sleep(60);
}