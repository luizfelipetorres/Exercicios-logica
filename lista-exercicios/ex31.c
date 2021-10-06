#include <stdio.h>
#include <unistd.h>

/*
No Futebol Americano, usa-se o Quarterback Rating como um índice 
que indica o desempenho do quarterback (quando maior, melhor). 
Ele é calculado como indicado aseguir: Calcula-se o percentual de passes
completados em relação aos passes tentados pelo quarterback. 
Deste valor subtrai-se 0,3 e divide-se por 0,2. Este valor não deve ser
maior que 2,375 ou menor que 0 (caso seja, ajusta-se o 
valor para 2,375 ou 0, respectivamente).
Em seguida, calcula-se a razão de jardas passadas pela quantidade 
de passes tentados. Deste valor, subtrai-se 3 e divide-se por 4. 
Novamente, este valor não deve ser maior que 2,375 
ou menor que 0 (caso seja, procede-se como no caso anterior).
Agora, calcula-se a razão de passes para touchdows 
pelo número de passes tentados. Divide-se o valor por 0,05. 
Mais uma vez, este valor não deve ser maior que 2,375 ou
menor que 0 (caso seja, procede-se como de costume).
Então, calcula-se a razão entre passes interceptados e
o número de passes tentados. Deste valor, subtrai-se 0,095 e 
divide-se o resultado por 0,04. Como de praxe, este valor não
deve ser maior que 2,375 ou menor que 0 (caso seja, atua-se como explicado).
O quarterback rating é calculando somando-se as quatro parcelas anteriores,
multiplicando a soma por 100 e dividindo-se o produto por 6.
Escreva um programa, que leia o número de passes tentados, 
o número de passes completos, o número de jardas passadas, 
o número de passes para touchdown e o número de passes interceptados 
e informe o QB Rating do quarterback

    1 - (p_completos / p_tentados) - 0.3

    


    ENTRADAS:   p_tentatos, p_completos,        (int)
                p_touchdown, p_interceptados    (int)
                jardas                          (float)
    
    SAIDAS:     qb_rating                       (float)

*/

int main(){
//  Variáveis
    int p_tentados, p_completos, p_touchdown, p_interceptados;
    float jardas;
    float qb_rating;
    float etapa1, etapa2, etapa3, etapa4;

//  Coletar entradas
    printf("\nDigite o numero de passes TENTADOS: ");
    scanf("%d", &p_tentados);
    
    printf("\nDigite o numero de passes COMPLETOS: ");
    scanf("%d", &p_completos);

    printf("\nDigie o numero de JARDAS passadas: ");
    scanf("%d", &jardas);

    printf("\nDigite o numero de passes para TOUCHDOWN: ");
    scanf("%d", &p_touchdown);

    printf("\nDigite o numero de passes INTERCEPTADOS: ");
    scanf("%d", &p_interceptados);

//  Tratar dados
    etapa1 = ((p_completos / p_tentados) - 0.3) / 0.2;
    if (etapa1 >= 2.375)
        etapa1 = 2.375;
    else if (etapa1 < 0)
        etapa1 = 0;

    etapa2 = ((jardas / p_tentados) - 3) / 4;
    if (etapa2 >= 2.375)
        etapa2 = 2.375;
    else if (etapa2 < 0)
        etapa2 = 0;

    etapa3 = (p_touchdown / p_tentados) / 0.05;
    if (etapa3 >= 2.375)
        etapa3 = 2.375;
    else if (etapa3 < 0)
        etapa3 = 0;
    
    etapa4 = ((p_interceptados / p_tentados) - 0.095) / 0.04;
    if (etapa4 >= 2.375)
        etapa4 = 2.375;
    else if (etapa4 < 0)
        etapa4 = 0;
    
    qb_rating = ((etapa1 + etapa2 + etapa3 + etapa4) * 100) / 6;

//  Exibir saídas
    printf("\netapa1: %.3f\netapa1: %.3f\netapa1: %.3f\netapa1: %.3f\n", etapa1, etapa2, etapa3, etapa4);
    printf("O Quarterback Rating eh de %.3f.", qb_rating);
    sleep(1000);
}