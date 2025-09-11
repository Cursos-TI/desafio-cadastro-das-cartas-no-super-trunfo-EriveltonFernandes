#include <stdio.h>


int main() {

    char inicial01[1], inicial02[1];
    char codigo01[3], codigo02[3];
    char cidade01[20], cidade02[20];
    int habitante01, habitante02;
    float area01, area02, densidade01, densidade02, densidadeinvertida01, densidadeinvertida02;
    float pib01, pib02, pibpercapita01, pibpercapita02;
    int pontos01, pontos02;
    float superpoder01, superpoder02;
    

    //Cadastro das cartas pelo usuário:
    printf("Digite a inicial do Estado: \n");
    scanf("%s", inicial01);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo01);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade01);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &habitante01);

    printf("Digite a área em km² da cidade: \n");
    scanf("%f", &area01);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib01);

    printf("Digite quantos pontos turísticos tem a cidade: \n");
    scanf("%d", &pontos01);

    //calculo da densidade, desidade invertida e pib per capta:
    densidade01 = (float) habitante01 / area01;
    pibpercapita01 = (float) habitante01 / pib01;
    densidadeinvertida01 = (float) area01 / habitante01;

    //Soma Super poderda carta 1:
    superpoder01 = habitante01 + area01 + pib01 +pontos01 +densidadeinvertida01;
    
    // Imprimir na tela para o usuário o cadastro:
    printf("Sua carta cadastrada \n Estado: %s \n Código: %s \n Cidade: %s \n População: %d \n Área: %.4f \n PIB: %.4f \n Pontos turísticos: %d \n Densidade: %.4f \n PIB per capita: %.4f \n Super Poder: %f \n", inicial01, codigo01, cidade01, habitante01, area01, pib01, pontos01, densidade01, pibpercapita01, superpoder01);

    // Cadastro segunda carta:
    printf("Digite a inicial do Estado: \n");
    scanf("%s", inicial02);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo02);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade02);

    printf("Digite a quantidade de habitantes da cidade: \n");
    scanf("%d", &habitante02);

    printf("Digite a área em km² da cidade: \n");
    scanf("%f", &area02);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib02);

    printf("Digite quantos pontos turísticos tem a cidade: \n");
    scanf("%d", &pontos02);

    //calculo densidade, densidade invertida e pib per capita:
    densidade02 = (float) habitante02 / area02;
    pibpercapita02 = (float) habitante02 / pib02;
    densidadeinvertida01 = (float) area02 / habitante02;

    //Soma Super poderda carta 2:
    superpoder02 = habitante02 + area02 + pib02 +pontos02 +densidadeinvertida02;

    // Imprimir na tela para o usuário o cadastro:
     printf("Sua carta cadastrada \n Estado: %s \n Código: %s \n Cidade: %s \n População: %d \n Área: %.4f \n PIB: %.4f \n Pontos turísticos: %d \n Densidade: %.4f \n PIB per capita: %.4f \n Super Poder: %f \n", inicial02, codigo02, cidade02, habitante02, area02, pib02, pontos02, densidade02, pibpercapita02, superpoder02);


    // Comparação das cartas:
    printf("Ganha quem tiver mais (1) do que (0). Bom jogo!! \n");
    printf("População: Carta 1: (%d) Carta 2: (%d) \n", habitante01 > habitante02, habitante02 > habitante01);
    printf("Área em km²: Carta 1: (%d) Carta 2: (%d) \n", area01 > area02, area02 > area01);
    printf("PIB: Carta 1: (%d) Carta 2: (%d) \n", pib01 > pib02, pib02 > pib01);
    printf("Pontos turísticos: Carta 1: (%d) Carta 2: (%d) \n", pontos01 > pontos02, pontos02 > pontos01);
    printf("Densidade: Carta 1: (%d) Carta 2: (%d) \n", densidade01 > densidade02, densidade02 > densidade01);
    printf("PIB per capita: Carta 1: (%d) Carta 2: (%d) \n", pib01 > pib02, pib02 > pib01);
    printf("Super Poder: Carta 1: (%d) Carta 2: (%d) \n", superpoder01 > superpoder02, superpoder02 > superpoder01);



    return 0;
}
