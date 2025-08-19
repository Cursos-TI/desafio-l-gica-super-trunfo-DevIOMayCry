#include <stdio.h>

int main() {
    // Definição de variáveis

    char cod1[4], cod2[4], nome1[50], nome2[50], estado1[3], estado2[3];
    // char %s
    float area1, area2, pib1, pib2, ppc1, ppc2, densi1, densi2, SuperPoder1, SuperPoder2;
    // float %f
    int pop1, pop2, npt1, npt2, atributo;
    // int %d

    // Introdução ao jogo!

    printf("Bem-vindo ao Super Trunfo \n");
    printf("Vamos começar, para isso, basta seguir as instruções para cadastrarmos as cartas \n");
    printf("__________________________________________ \n");

    // Criação dos atributos para a carta 1
    printf("Carta - Cidade 1 \n");

    printf("Crie um código para a Cidade 1: (ex: A01)\n");
    scanf("%s", cod1);

    printf("Digite o nome dessa Cidade: (sem acentos, ex São = Sao)\n");
    scanf(" %49[^\n]", nome1);

    printf("Digite a sigla do Estado de %s: \n", nome1);
    scanf("%s", estado1);
    
    printf("Digite a população de %s - %s:\n", nome1, estado1);
    scanf("%d", &pop1);

    printf("Digite a área de %s - %s: (em km², formato americano)\n", nome1, estado1);
    scanf("%f", &area1);

    printf("Digite o PIB de %s - %s: (em bilhões de R$, formato americano)\n", nome1, estado1);
    scanf("%f", &pib1);    

    printf("Digite o número de Pontos Turísticos de %s - %s:\n", nome1, estado1);
    scanf("%d", &npt1); 

    densi1 = pop1 / area1; //densidade sempre ganha a menor!!
    ppc1 = pib1 * 1e9 / pop1;
    SuperPoder1 = pop1 + area1 + pib1 + npt1 + ppc1 - densi1;

    // Cadastrando a Carta 2
    printf("__________________________________________ \n");
    printf("Carta - Cidade 2 \n");

    printf("Crie um código para a Cidade 2: (ex: A01)\n"); 
    scanf("%s", cod2);

    printf("Digite o nome dessa Cidade: (sem acentos, ex São = Sao)\n");
    scanf(" %49[^\n]", nome2);
    
    printf("Digite a sigla do Estado de %s: \n", nome2);
    scanf("%s", estado2);

    printf("Digite a população de %s - %s:\n", nome2, estado2);
    scanf("%d", &pop2);

    printf("Digite a área de %s - %s: (em km², formato americano)\n", nome2, estado2);
    scanf("%f", &area2);

    printf("Digite o PIB de %s - %s: (em bilhões de R$, formato americano)\n", nome2, estado2);
    scanf("%f", &pib2);    

    printf("Digite o número de Pontos Turísticos de %s - %s:\n", nome2, estado2);
    scanf("%d", &npt2); 

    densi2 = pop2 / area2; //densidade sempre ganha a menor
    ppc2 = pib2 * 1e9 / pop2;
    SuperPoder2 = pop2 + area2 + pib2 + npt2 + ppc2 - densi2;

    //No nível AVENTUREIRO, vou deixar as informações das cartas COMENTADAS.
    // (mantive seus comentários exatamente como estavam)
    
    printf("__________________________________________ \n");
    printf("VAMOS JOGAR SUPER TRUNFO!! \n");
    printf("%s - %s - %s VS %s - %s - %s \n", cod1, nome1, estado1, cod2, nome2, estado2);
    printf("ESCOLHA UMA DAS OPÇÕES PARA COMPARAÇÃO\n");

    printf("1. POPULAÇÃO:\n");
    printf("2. ÁREA:\n");
    printf("3. PIB:\n");
    printf("4. NÚMERO DE PONTOS TURÍSTICOS:\n");
    printf("5. DENSIDADE POPULACIONAL:\n");
    printf("6. PIB PER CAPITA:\n");
    printf("7. SUPER PODER:\n");
    
    printf("Digite abaixo o número da sua escolha:\n");
    scanf("%d", &atributo);

    //REALIZANDO ALTERAÇÕES PARA O NÍVEL AVENTUREIRO
    switch (atributo) {
        case 1:
            printf("População de %s - %s - %s: %d\n", cod1, nome1, estado1, pop1);
            printf("População de %s - %s - %s: %d\n", cod2, nome2, estado2, pop2);
            if (pop1 > pop2) {
                printf("%s - %s - %s tem a população maior!\n", cod1, nome1, estado1);
            } else if (pop1 < pop2) {
                printf("%s - %s - %s tem a população maior!\n", cod2, nome2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Área de %s - %s - %s: %.2f\n", cod1, nome1, estado1, area1);
            printf("Área de %s - %s - %s: %.2f\n", cod2, nome2, estado2, area2);
            if (area1 > area2) {
                printf("%s - %s - %s tem a área maior!\n", cod1, nome1, estado1);
            } else if (area1 < area2) {
                printf("%s - %s - %s tem a área maior!\n", cod2, nome2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB de %s - %s - %s: %.2f\n", cod1, nome1, estado1, pib1);
            printf("PIB de %s - %s - %s: %.2f\n", cod2, nome2, estado2, pib2);
            if (pib1 > pib2) {
                printf("%s - %s - %s tem o PIB maior!\n", cod1, nome1, estado1);
            } else if (pib1 < pib2) {
                printf("%s - %s - %s tem o PIB maior!\n", cod2, nome2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Número de pontos turísticos de %s - %s - %s: %d\n", cod1, nome1, estado1, npt1);
            printf("Número de pontos turísticos de %s - %s - %s: %d\n", cod2, nome2, estado2, npt2);
            if (npt1 > npt2) {
                printf("%s - %s - %s tem o número de pontos turísticos maior!\n", cod1, nome1, estado1);
            } else if (npt1 < npt2) {
                printf("%s - %s - %s tem o número de pontos turísticos maior!\n", cod2, nome2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade populacional de %s - %s - %s: %.2f\n", cod1, nome1, estado1, densi1);
            printf("Densidade populacional de %s - %s - %s: %.2f\n", cod2, nome2, estado2, densi2);
            if (densi1 < densi2) {
                printf("%s - %s - %s tem menor densidade populacional!\n", cod1, nome1, estado1);
            } else if (densi1 > densi2) {
                printf("%s - %s - %s tem menor densidade populacional!\n", cod2, nome2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6:
            printf("PIB per capita de %s - %s - %s: %.2f\n", cod1, nome1, estado1, ppc1);
            printf("PIB per capita de %s - %s - %s: %.2f\n", cod2, nome2, estado2, ppc2);
            if (ppc1 > ppc2) {
                printf("%s - %s - %s tem o PIB per capita maior!\n", cod1, nome1, estado1);
            } else if (ppc1 < ppc2) {
                printf("%s - %s - %s tem o PIB per capita maior!\n", cod2, nome2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 7:
            printf("Super Poder de %s - %s - %s: %.2f\n", cod1, nome1, estado1, SuperPoder1);
            printf("Super Poder de %s - %s - %s: %.2f\n", cod2, nome2, estado2, SuperPoder2);
            if (SuperPoder1 > SuperPoder2) {
                printf("%s - %s - %s tem o Super Poder maior!\n", cod1, nome1, estado1);
            } else if (SuperPoder1 < SuperPoder2) {
                printf("%s - %s - %s tem o Super Poder maior!\n", cod2, nome2, estado2);
            } else {
                printf("Empate!\n");
            }
            break;

        default: 
            printf("Opção Inválida\n"); 
            break;
    }

    
    return 0;
}