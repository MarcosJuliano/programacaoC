#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;
    int opcao1, opcao2;

    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta: ");
    scanf(" %s", codigo1);
    getchar(); // Limpa o buffer

    printf("Nome da Cidade: ");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("População: ");
    scanf(" %lu", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    getchar();

    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta: ");
    scanf(" %s", codigo2);
    getchar();

    printf("Nome da Cidade: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área (em km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf(" %f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    // Menu Interativo para Escolher Dois Atributos
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf(
        "
        1 - População\n
        2 - Área\n
        3 - PIB\n
        4 - Pontos Turísticos\n
        5 - Densidade Populacional\n
        6 - PIB per Capita\n
        7 - Super Poder\n"
        );
    scanf(" %d", &opcao1);

    do {
        printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
        scanf(" %d", &opcao2);
    } while (opcao2 == opcao1);

    int vitoriasCarta1 = 0, vitoriasCarta2 = 0;

    // Função para realizar comparação
    int comparar(float valor1, float valor2)
    {
        return (valor1 > valor2) ? 1 : (valor1 < valor2) ? 2 : 0;
    }

    float atributos1 [] = {populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1, superPoder1};
    float atributos2 [] = {populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2, superPoder2};

    int resultado1 = comparar(atributos1[opcao1 - 1], atributos2[opcao1 - 1]);
    int resultado2 = comparar(atributos1[opcao2 - 1], atributos2[opcao2 - 1]);

    if (resultado1 == 1) vitoriasCarta1++;
    else if (resultado1 == 2) vitoriasCarta2++;

    if (resultado2 == 1) vitoriasCarta1++;
    else if (resultado2 == 2) vitoriasCarta2++;

    printf("\nResultado:\n");
    if (vitoriasCarta1 > vitoriasCarta2) printf("Carta 1 venceu!\n");
    else if (vitoriasCarta2 > vitoriasCarta1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    return 0;
}

