#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    int termos, fatorial;
    int iCont, iFator;
    float euler = 1;

//  Coletar entradas
    printf("Digite o numero de termos: ");
    scanf("%d", &termos);

//  Tratar dados
    for (iCont = 1; iCont <= termos; iCont++){
        for (iFator = iCont, fatorial = 1; iFator > 0; iFator--)
            fatorial *= iFator;
        euler += (1.0/fatorial);
        //printf("--------------%d iteracao\nfatorial: %d\neuler = %f\n\n", iCont, fatorial, euler); 
    }
    printf("O valor aproximado para %d termos eh %.5f.", termos, euler);

//  Exibir saídas

    sleep(60);
}
