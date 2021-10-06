#include <stdio.h>
#include <unistd.h>

/*
Escreva um programa que leia um caracter e diga se ele é uma vogal, 
consoante, número ou um símbolo (qualquer outro caracter, 
que não uma letra ou número).

    ENTRADAS:   caracter    (char)
    SAIDAS:     printf(tipo)
*/

int main(){
//  Variáveis
    char caracter;

//  Coletar entradas
    printf("Digite uma letra, numero ou simbolo: ");
    scanf("%c", &caracter);

//  Tratar dados
    printf("Voce digitou um");
    switch (caracter){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf("a vogal.");
            break;
        case '1' :
        case '2' :
        case '3' :
        case '4' :
        case '5' :
        case '6' :
        case '7' :
        case '8' :
        case '9' :
        case '0' :
            printf(" numero.");
            break;
        case 'b' :
        case 'c' :
        case 'd' :
        case 'f' :
        case 'g' :
        case 'h' :
        case 'j' :
        case 'k' :
        case 'l' :
        case 'm' :
        case 'n' :
        case 'p' :
        case 'q' :
        case 'r' :
        case 's' :
        case 't' :
        case 'v' :
        case 'x' :
        case 'w' :
        case 'y' :
        case 'z' :
            printf("a consoante.");
            break;
        default :
            printf(" simbolo.");
    }

//  Exibir saídas

    sleep(60);
}