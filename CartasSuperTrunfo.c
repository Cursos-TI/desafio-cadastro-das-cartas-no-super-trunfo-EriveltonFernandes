#include <stdio.h>


int main() {

    char inicial01[1], inicial02[1];
    char codigo01[3], codigo02[3];
    char cidade01[20], cidade02[20];
    int habitante01, habitante02;
    float area01, area02;
    float pib01, pib02;
    int pontos01, pontos02;

    //Cadastro de cartas pelo usuário:

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

    // Imprimir na tela para o usuário o cadastro

    printf("Sua carta cadastrada \n Estado: %s \n Código: %s \n Cidade: %s \n População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d \n", inicial01, codigo01, cidade01, habitante01, area01, pib01, pontos01);

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

    // Imprimir na tela para o usuário o cadastro

    printf("Sua carta cadastrada \n Estado: %s \n Código: %s \n Cidade: %s \n População: %d \n Área: %.2f \n PIB: %.2f \n Pontos turísticos: %d \n", inicial02, codigo02, cidade02, habitante02, area02, pib02, pontos02);





    return 0;
}
