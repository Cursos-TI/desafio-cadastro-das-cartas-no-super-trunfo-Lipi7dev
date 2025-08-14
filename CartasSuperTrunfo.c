#include <stdio.h>



int main(){

    char estado [20];
    char codigo [20];
    char cidade [20];
    int populacao;
    float area;
    float pib;
    int pontos;


    // Entrada de dados da carta 1

    printf("Digite o nome de um estado\n");
    scanf("%s", estado);

    printf("Digite o código da carta\n");
    scanf("%s", codigo);

    printf("Digite o nome de uma cidade\n");
    scanf("%s", cidade);

    printf("Digite o numero da populaçao do estado\n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área\n");
    scanf("%f", &area);

    printf("Digite o Pib do Estado\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos);

    //Saida de dados da carta 1

    printf("Carta 1\n");

    printf("Estado: %s\n",estado);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Quantidade de pontos turisticos: %d\n", pontos);


    //Entrada de Dados carta 2

    printf("Digite o nome de um estado\n");
    scanf("%s", estado);

    printf("Digite o código da carta\n");
    scanf("%s", codigo);

    printf("Digite o nome de uma cidade\n");
    scanf("%s", cidade);

    printf("Digite o numero da populaçao do estado\n");
    scanf("%d", &populacao);

    printf("Digite o tamanho da área\n");
    scanf("%f", &area);

    printf("Digite o Pib do Estado\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf("%d", &pontos);


    //Saida de dados carta 2

    printf("Carta 2\n");

    printf("Estado: %s\n",estado);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Area: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Quantidade de pontos turisticos: %d\n", pontos);



    return 0; 


}


