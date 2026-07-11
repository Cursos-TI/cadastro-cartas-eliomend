#include <stdio.h>

int main() {
    char estado1[2], estado2[2], cod1[4], cod2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;

    printf("Agora eh a vez de inserir os dados da primeira carta! Digite os dados conforme solicitado abaixo:\n");
    
    printf("Digite o estado - 'A' a 'H': \n");
    scanf(" %c", estado1);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", cod1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade (em km^2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em milhoes de reais): \n");
    scanf("%f", &pib1);

    printf("Digite os pontos da cidade: \n");
    scanf("%d", &pontos1); 

    printf("Agora eh a vez de inserir os dados da segunda carta! Digite os dados conforme solicitado abaixo:\n");

    printf("Digite o estado - 'A' a 'H': \n");
    scanf(" %c", estado2);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", cod2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    
    printf("Digite a populacao da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade (em km^2): \n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade (em milhoes de reais): \n");
    scanf("%f", &pib2);

    printf("Digite os pontos da cidade: \n");
    scanf("%d", &pontos2);

    printf("\n Obrigado por inserir os dados das duas cartas! Agora vamos comparar os dados das duas cidades:\n");

    printf("Carta 1: \n");

    printf("Estado: %s\n", estado1);
    printf("Codigo da cidade: %s\n", cod1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Pontos: %d\n", pontos1);

    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da cidade: %s\n", cod2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f milhoes de reais\n", pib2);
    printf("Pontos: %d\n", pontos2);

    return 0;
}