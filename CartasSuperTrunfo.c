#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados da primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para armazenar os dados da segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

   // Cadastro da primeira carta
   printf("Digite uma letra representando um estado de (A - H): ");
   scanf(" %c", &estado1);

   printf("Digite o código da carta (ex: A01, B03): ");
   scanf("%s", codigo1);

   printf("Digite o nome da cidade (ex: Aracaju, Fortaleza): ");
   scanf("%s", nomeCidade1);  // Não permite espaços no nome da cidade

   printf("Digite a população da cidade: ");
   scanf("%d", &populacao1);

   printf("Digite a área da cidade (km²): ");
   scanf("%f", &area1);

   printf("Digite o PIB da cidade: ");
   scanf("%f", &pib1);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontosTuristicos1);

   // Cadastro da segunda carta
   printf("\nDigite uma letra representando um estado de (A - H): ");
   scanf(" %c", &estado2);

   printf("Digite o código da carta (ex: A01, B03): ");
   scanf("%s", codigo2);

   printf("Digite o nome da cidade (ex: Belém, Curitiba): ");
   scanf("%s", nomeCidade2);  // Não permite espaços no nome da cidade

   printf("Digite a população da cidade: ");
   scanf("%d", &populacao2);

   printf("Digite a área da cidade (km²): ");
   scanf("%f", &area2);

   printf("Digite o PIB da cidade: ");
   scanf("%f", &pib2);

   printf("Digite o número de pontos turísticos: ");
   scanf("%d", &pontosTuristicos2);

   // Exibir os dados das cartas
   printf("\nPrimeira Carta:\n");

   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", nomeCidade1);
   printf("População: %d habitantes\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões\n", pib1);
   printf("Pontos turísticos: %d\n", pontosTuristicos1);

   printf("\nSegunda Carta:\n");

   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", nomeCidade2);
   printf("População: %d habitantes\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões\n", pib2);
   printf("Pontos turísticos: %d\n", pontosTuristicos2);

   return 0;
}