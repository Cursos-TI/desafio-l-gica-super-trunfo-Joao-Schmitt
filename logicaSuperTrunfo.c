#include <stdio.h>
#include <string.h>

int main() {
    char estadoA[20], estadoB[20];
    char codigoA[10], codigoB[10];
    char cidadeA[30], cidadeB[30];
    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;
    int pontosTuristicosA, pontosTuristicosB;

    printf("Cadastro da Carta A\n");
    printf("Digite o estado: ");
    scanf("%s", estadoA);
    printf("Digite o código da carta: ");
    scanf("%s", codigoA);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeA);
    printf("Digite a população: ");
    scanf("%d", &populacaoA);
    printf("Digite a área (km²): ");
    scanf("%f", &areaA);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibA);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosA);

    printf("\nCadastro da Carta B\n");
    printf("Digite o estado: ");
    scanf("%s", estadoB);
    printf("Digite o código da carta: ");
    scanf("%s", codigoB);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidadeB);
    printf("Digite a população: ");
    scanf("%d", &populacaoB);
    printf("Digite a área (km²): ");
    scanf("%f", &areaB);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pibB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicosB);

    printf("\n- Carta A -\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estadoA, codigoA, cidadeA);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bi | Pontos turísticos: %d\n",
           populacaoA, areaA, pibA, pontosTuristicosA);

    printf("\n- Carta B -\n");
    printf("Estado: %s | Código: %s | Cidade: %s\n", estadoB, codigoB, cidadeB);
    printf("População: %d | Área: %.2f km² | PIB: %.2f bi | Pontos turísticos: %d\n",
           populacaoB, areaB, pibB, pontosTuristicosB);

    printf("\nComparação: População\n");
    if (populacaoA > populacaoB) {
        printf("Cidade vencedora: %s (maior população)\n", cidadeA);
    } else if (populacaoB > populacaoA) {
        printf("Cidade vencedora: %s (maior população)\n", cidadeB);
    } else {
        printf("Empate! Ambas têm a mesma população.\n");
    }

    printf("\nComparação: Densidade Populacional\n");
    float densidadeA = populacaoA / areaA;
    float densidadeB = populacaoB / areaB;

    if (densidadeA < densidadeB) {
        printf("Cidade vencedora: %s (menor densidade populacional)\n", cidadeA);
    } else if (densidadeB < densidadeA) {
        printf("Cidade vencedora: %s (menor densidade populacional)\n", cidadeB);
    } else {
        printf("Empate! Ambas têm a mesma densidade.\n");
    }

    return 0;
}
