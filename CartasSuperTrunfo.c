#include <stdio.h>

int main() {

    printf("Desafio: Nível Novato\n\n");

    // Declaração de variáveis para a Carta 1 e Carta 2
    char estado1, estado2, codigo_carta1[4], codigo_carta2[4], nome_cidade1[50], nome_cidade2[50];
    int populacao1, populacao2, num_pontos_turisticos1, num_pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;

    // Aqui o usuário vai inserir os dados referentes a Carta 1
    printf("==============================================================\n");
    printf("                Insira os dados para a Carta 1       \n");
    printf("==============================================================\n");

    printf("Insira uma letra de 'A' a 'H' para representar o primeiro estado.\n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("\nInsira a letra do estado, já fornecida anteriormente, seguida de um número de 01 a 04.\n");
    printf("Código: ");
    scanf(" %3s", codigo_carta1);

    printf("\nInsira o nome da primeira cidade.\n");
    printf("Nome da Cidade: ");
    getchar();
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);

    printf("\nInsira a quantidade de habitantes da cidade.\n");
    printf("População: ");
    scanf(" %d", &populacao1);

    printf("\nInsira a área da cidade em quilômetros quadrados.\n");
    printf("Área: ");
    scanf(" %f", &area1);

    printf("\nInsira o Produto Interno Bruto da cidade.\n");
    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("\nInsira a quantidade de pontos turísticos da primeira cidade.\n");
    printf("Pontos Turísticos: ");
    scanf(" %d", &num_pontos_turisticos1);

    // Aqui o usuário vai inserir os dados referentes a Carta 2
    printf("\n==============================================================\n");
    printf("                Insira os dados para a Carta 2       \n");
    printf("==============================================================\n");
     
    printf("Insira uma letra de 'A' a 'H' para representar o segundo estado.\n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("\nInsira a letra do estado, já fornecida anteriormente, seguida de um número de 01 a 04.\n");
    printf("Código: ");
    scanf(" %3s", codigo_carta2);

    printf("\nInsira o nome da segunda cidade.\n");
    printf("Nome da Cidade: ");
    getchar();
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);

    printf("\nInsira a quantidade de habitantes da cidade.\n");
    printf("População: ");
    scanf(" %d", &populacao2);

    printf("\nInsira a área da cidade em quilômetros quadrados.\n");
    printf("Área: ");
    scanf(" %f", &area2);

    printf("\nInsira o Produto Interno Bruto da cidade.\n");
    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("\nInsira a quantidade de pontos turísticos da primeira cidade.\n");
    printf("Pontos Turísticos: ");
    scanf(" %d", &num_pontos_turisticos2);

    // Informações cadastradas carta 1
    printf("\n==============================================================\n");
    printf("                            CARTA 1                           \n");
    printf("==============================================================\n");
    printf("\nCarta 1\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %3s \n", codigo_carta1);
    printf("Nome da Cidade: %s", nome_cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", num_pontos_turisticos1);

    // Informações cadastradas carta 2
    printf("==============================================================\n");
    printf("                            CARTA 2                           \n");
    printf("==============================================================\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %3s\n", codigo_carta2);
    printf("Nome da Cidade: %s", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", num_pontos_turisticos2);

    return 0;
}
