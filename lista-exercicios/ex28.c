#include <stdio.h>
#include <unistd.h>

/*
    Escreva um programa que leia uma letra 
    e mostre se ela é vogal ou consoante

    ENTRADAS:       letra   (char)
    SAIDA:          if
*/

int main(){
//  Variáveis
    char letra;

//  Coletar entradas
    printf("Digite uma letra: ");
    scanf("%c", &letra);


//  Tratar dados
    printf("\nA letra '%c' eh uma ", letra);
    switch (letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':   
            printf("vogal."); 
            break;
        default :   
            printf("consoante.");
    }
    sleep(60);
}