#include <stdio.h>

int main () {
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Carta 1\n");

    printf ("Digite o nome do estado\n");
    scanf("%s",estado);

    printf("Digite o código da carta\n");
    scanf("%s",codigo);

    printf("Digite o nome da cidade\n");
    scanf("%s",cidade);

    printf("Qual o tamanho da populacão\n");
    scanf("%d",&populacao);

    printf("Digite o tamanho da cidade em km\n");
    scanf("%f",&area);

    printf("Digite o pib da cidade\n");
    scanf("%f",&pib);

    printf("Digite a quantidade de pontos turisticos\n");
    scanf(" %d",&pontosturisticos);

    printf("Carta 1\n");
    
    printf("Estado: %s \n",estado);
    printf("Código da carta: %s \n",codigo);
    printf("Cidade: %s \n",cidade);
    printf("populacão: %d \n",populacao);
    printf("Área: %f \n",area);
    printf("pib: %f \n",pib);
    printf("Pontos turisticos: %d \n",pontosturisticos);

    



  



   





    



}