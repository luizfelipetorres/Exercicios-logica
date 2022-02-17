#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    float soma = 0;
    int termo;
    int iCont, jCont;
    int potencia = 1;


//  Coletar entradas
    printf("Digite o numero de termos: ");
    scanf("%d", &termo);

//  Tratar dados
    for (iCont = 0; iCont < termo; iCont++){

        if ((iCont % 2) == 0){
            soma += 1;
        }else{
            soma -= 1;
        }
    }


//  Exibir saídas
    printf("O valor aproximado de pi no termo %d eh %f.", termo, soma);

    sleep(60);
}













/*
    for (iCont = 0; iCont < termo; iCont++){
        for (jCont = 1; jCont < (termo * 2); jCont += 2)
            potencia *= iCont;
        
        if ((iCont % 2) == 0)
            soma += (1.0 / potencia);
        else
            soma -= (1.0 / potencia);
    }
*/