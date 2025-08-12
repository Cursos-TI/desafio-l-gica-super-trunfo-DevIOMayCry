#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    char cod1[4], cod2[4], nome1[50], nome2[50], estado1[3], estado2[3];
    // char %s
    float area1, area2, pib1, pib2, ppc1, ppc2, densi1, densi2, SuperPoder1, SuperPoder2;
    // float %f
    int pop1, pop2, npt1, npt2;
    // int %d

    printf("Bem-vindo ao Super Trunfo \n");
    printf("Vamos começar, para isso, basta seguir as instruções para cadastrarmos as cartas \n");
    printf("__________________________________________ \n");


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

        densi1 = pop1 / area1;
        ppc1 = pib1 *1e9 / pop1;
        SuperPoder1 = pop1 + area1 + pib1 + npt1 + ppc1 - densi1;
    
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

        densi2 = pop2 / area2;
        ppc2 = pib2 *1e9 / pop2;
        SuperPoder2 = pop2 + area2 + pib2 + npt2 + ppc2 - densi2;


            printf("__________________________________________ \n");
            printf("\nObrigado pelas informações!\n");
            printf("__________________________________________ \n");
            printf("CARTA 1 \n");
            printf("%s - %s - %s \n", cod1, nome1, estado1);
            printf("População: %d \n", pop1);
            printf("Área em km²: %.2f \n", area1);
            printf("PIB: %.2f \n", pib1);
            printf("Número de pontos turísticos: %d \n", npt1);
            printf("Densidade populacional: %.2f \n", densi1);
            printf("PIB per capita: %.2f \n", ppc1);
            printf("Super Poder: %.2f \n", SuperPoder1);

            printf("__________________________________________ \n");
            printf("CARTA 2 \n");
            printf("%s - %s - %s \n", cod2, nome2, estado2);
            printf("População: %d \n", pop2);
            printf("Área em km²: %.2f \n", area2);
            printf("PIB: %.2f \n", pib2);
            printf("Número de pontos turísticos: %d \n", npt2);
            printf("Densidade populacional: %.2f \n", densi2);
            printf("PIB per capita: %.2f \n", ppc2);
            printf("Super Poder: %.2f \n", SuperPoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

            printf("__________________________________________ \n");
            printf("VAMOS JOGAR SUPER TRUNFO!! \n");
            printf("%s - %s - %s VS %s - %s - %s \n", cod1, nome1, estado1, cod2, nome2, estado2);
            printf("ABAIXO APARECERÁ OS RESULTADOS DAS BATALHAS ENTRE CADA ATRIBUTO\n");

            printf("POPULAÇÃO:\n");
            if (pop1 > pop2) {
                printf("%s - %s - %s tem maior população.\n", cod1, nome1, estado1);
            } else {
                printf("%s - %s - %s tem maior população.\n", cod2, nome2, estado2);
            }

            printf("ÁREA:\n");
            if (area1 > area2) {
                printf("%s - %s - %s tem maior área.\n", cod1, nome1, estado1);
            } else {
                printf("%s - %s - %s tem maior área.\n", cod2, nome2, estado2);
            }

            printf("PIB:\n");
            if (pib1 > pib2) {
                printf("%s - %s - %s tem maior PIB.\n", cod1, nome1, estado1);
            } else {
                printf("%s - %s - %s tem maior PIB.\n", cod2, nome2, estado2);
            }

            printf("NÚMERO DE PONTOS TURÍSTICOS:\n");
            if (npt1 > npt2) {
                printf("%s - %s - %s tem maior número de pontos turísticos.\n", cod1, nome1, estado1);
            } else {
                printf("%s - %s - %s tem maior número de pontos turísticos.\n", cod2, nome2, estado2);
            }

            printf("DENSIDADE POPULACIONAL:\n");
            if (densi1 < densi2) {
                printf("%s - %s - %s tem menor densidade populacional.\n", cod1, nome1, estado1);
            } else {
                printf("%s - %s - %s tem menor densidade populacional.\n", cod2, nome2, estado2);
            }

            printf("PIB PER CAPITA:\n");
            if (ppc1 > ppc2) {
                printf("%s - %s - %s tem maior PIB per capita.\n", cod1, nome1, estado1);
            } else {
                printf("%s - %s - %s tem maior PIB per capita.\n", cod2, nome2, estado2);
            }
            
            printf("SUPER PODER:\n");
            if (SuperPoder1 > SuperPoder2) {
                printf("%s - %s - %s tem maior Super Poder.\n", cod1, nome1, estado1);
            } else {
                printf("%s - %s - %s tem maior Super Poder.\n", cod2, nome2, estado2);
            }
            



    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
