#include <stdio.h>
#include <unistd.h>

int main(){
//  Variáveis
    float soma = 0.0;           //Resultado
    int potencia, iPotencia;    //Valor da potencia e controlador do laço
    int numero;                 //Entrada do usuario
    int denominador;            

//  Coletar entradas
    printf("Digite a quantidade de termos: ");
    scanf("%d", &numero);

//  Tratar dados
    for (iPotencia = 1; iPotencia <= numero; iPotencia++){
        potencia = (iPotencia * 2) - 1;
        denominador = potencia * potencia * potencia;

        //par     -> somar
        //impar   -> subtrair
        if (((iPotencia - 1) % 2) == 0){
            soma += (1.0/denominador);
            printf("\n--------------%d iteracao\n+ 1/(%d^3)\nSoma: %f\n", iPotencia, potencia, soma);
        }else{
            soma -= (1.0/denominador);
            printf("\n--------------%d iteracao\n- 1/(%d^3)\nSoma: %f\n", iPotencia, potencia, soma);
        }
    }

    sleep(60);
}