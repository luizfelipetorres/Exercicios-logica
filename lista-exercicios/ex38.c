#include <stdio.h>
#include <unistd.h>

/*
Chama-se ano bissexto o ano ao qual é acrescentado um dia extra, ficando ele com 366
dias, um dia a mais do que os anos normais de 365 dias, ocorrendo a cada quatro anos.
Escreva um programa que verifique se um ano é bissexto. Um ano é bissexto se ele é
divisível por 4. Entretanto, se o ano é divisível por 100, ele não é bissexto. Mas, se ele for 
divisível por 400, ele volta a ser bissexto.
a. São bissextos os anos: 1600, 1996, 2000, 2004, 2008, 2012, 2016, 2400, 2800, ...
b. Não são bissextos: 1500, 1974, 1982, 1983, 1990, 2018, 2022, 2030, 2038

    ENTRADAS:       ano                        (int)
    SAIDAS          printf('bissexto' ou 'não bissexto)
*/

int main(){
//  Variáveis
    int ano;
    float resto4, resto100, resto400;
    

//  Coletar entradas
    printf("Digite um ano: ");
    scanf("%d", &ano);

//  Tratar dados
    resto4 = (ano % 4);
    resto100 = (ano % 100);
    resto400 = (ano % 400);

    if (resto4 != 0){
        printf("Nao eh bissexto");
    }else if (resto100 == 0){
        if (resto400 == 0){
            printf("Eh bissexto");
        }else printf("Nao eh bissexto");
    }else printf("Eh bissexto");

    sleep(60);
}