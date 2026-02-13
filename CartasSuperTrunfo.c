#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    /* ======================
       Declaração das variáveis
       ====================== */

    /* Carta 1 */
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    /* Carta 2 */
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    /* ======================
       Leitura dos dados - Carta 1
       ====================== */
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    /* Cálculos da Carta 1 */
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = pib1 / (float)populacao1;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    /* ======================
       Leitura dos dados - Carta 2
       ====================== */
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    /* Cálculos da Carta 2 */
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = pib2 / (float)populacao2;

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    /* ======================
       Comparações
       ====================== */
    int popVence = populacao1 > populacao2;
    int areaVence = area1 > area2;
    int pibVence = pib1 > pib2;
    int pontosVence = pontos1 > pontos2;
    int densidadeVence = densidade1 < densidade2; /* menor vence */
    int pibPerCapitaVence = pibPerCapita1 > pibPerCapita2;
    int superPoderVence = superPoder1 > superPoder2;

    /* ======================
       Exibição das comparações
       ====================== */
    printf("\n=========================\n");
    printf("Comparacao de Cartas\n");
    printf("=========================\n");

    printf("Populacao: Carta 1 venceu (%d)\n", popVence);
    printf("Area: Carta 1 venceu (%d)\n", areaVence);
    printf("PIB: Carta 1 venceu (%d)\n", pibVence);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosVence);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadeVence);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapitaVence);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoderVence);

    return 0;
}