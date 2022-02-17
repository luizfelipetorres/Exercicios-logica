#include <stdio.h>
#include <unistd.h>

/*

*/

int main(){
//  Variáveis
    int iContPar;                               //Variavel do laço principal 
    int n1, n2;                                 //Numeros supostamente primos
    int divisores_primo1, divisores_primo2;     //Quantidade de divisores de n1 e n2
    int limite_sup = 1000, limite_inf = 500;    //Limite superior e inferior do laço
    int verificar_n1, verificar_n2;             //Auxiliar: usado para verificar se n1 e n2 são primos
    int validador;

//  Tratar dados
    //Iterar todos os números pares de 500 a 1000
    for (iContPar = limite_inf; iContPar <= limite_sup; iContPar++){
        validador = 0;

        if ((iContPar % 2) == 0){

            //Iterar dois numeros que somados são igual a iContPat
            for (n1 = iContPar, n2 = 0; n1 > 0, n2 < iContPar, n2 <= n1, validador == 0; n1--, n2++){
                
                //Verificar se n1 é primo
                for (verificar_n1 = 1, divisores_primo1 = 0; verificar_n1 <= n1; verificar_n1++)
                    if ((n1 % verificar_n1) == 0)
                        divisores_primo1++;

                //Verificar se n2 é primo
                for (verificar_n2 = 1, divisores_primo2 = 0; verificar_n2 <= n2; verificar_n2++)
                    if ((n2 % verificar_n2) == 0)
                        divisores_primo2++;

                //Se n1 e n2 tiverem apenas 2 divisores, são primos e somados são igual a iContPar
                if ((divisores_primo1 == 2) && (divisores_primo2 == 2)){
                    printf("%d: %d + %d\n", iContPar, n1, n2);
                    validador++;
                }
            }
        }
    }
    sleep(60);
}