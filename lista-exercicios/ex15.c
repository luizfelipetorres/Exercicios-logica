#include <stdio.h>
#include <unistd.h>

/*
    Nun dia de sol, você deseja medir a altura de um prédio,
    porém, a trena não é suficientemente longa.
    Assumindo que seja possível medir sua sombra e a do prédio no chão,
    e que vc lembre da sua altura, 
    fala um programa para ler os dados necessários e calcular a altura do prédio

    ENTRADAS:   altura_pessoa, sombra_pessoa, sombra_predio
    SAIDAS:     altura_predio
*/

int main(){

//  Variáveis
    float altura_pessoa, altura_predio;
    float sombra_pessoa, sombra_predio;

//  Coletar entradas
    printf("Digite a sua altura: ");
    scanf("%f", &altura_pessoa);

    printf("\nDigite o tamanho da sua sombra: ");
    scanf("%f", &sombra_pessoa);

    printf("\nDigite o tamanho da sombra do prédio: ");
    scanf("%f", &sombra_predio);

//  Tratar dados
    altura_predio = (sombra_pessoa / altura_pessoa) * sombra_predio;

//  Exibir saídas
    printf("O tamanho aproximado do prédio é de %.2f.", altura_predio);

    sleep(60);
}