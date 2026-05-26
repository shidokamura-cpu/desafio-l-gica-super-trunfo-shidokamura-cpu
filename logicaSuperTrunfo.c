#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
int main() {
// Definição das variáveis para armazenar as propriedades das cidades
// Você pode utilizar o código do primeiro desafio
    char estado1[2], estado2[2];
    char codigo_do_estado1[3], codigo_do_estado2[3];
    char nome_da_cidade1[20], nome_da_cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    long double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    long double pib_per_capita1, pib_per_capita2;
    long double super_trunfo1, super_trunfo2;  
    int contador_de_vitorias1, contador_de_vitorias2;
    int opcao, opcao_comparacao1, opcao_comparacao2; 
    int categoria_comparacao1, categoria_comparacao2;
//menu
    do {
        printf("Menu Principal:\n");
        printf("1. Como Jogar\n");
        printf("2. Cadastrar Cartas\n");
        printf("3. Batalhar\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                printf("Como jogar...\nPrimeiro cadastre duas cartas para poder compará-las.\nDepois de cadastradas, escolha a opção de Batalhas \nVocê pode batalhar com duas categorias e ver qual carta ganha ou comparar todas parar descobrir qual é o SUPER TRUNFO!!!\n");
                break;
            case 2:
                printf("Cadastrando cartas...\n");
                printf("Primeira Carta:\n");
                printf("Digite o nome do estado: \n");
                scanf("%s", estado1);
                printf("Digite o codigo da carta: (Letra + Numero) \n");
                scanf("%s", codigo_do_estado1);
                printf("Digite o nome da cidade: \n");
                scanf("%s", nome_da_cidade1);
                printf("Digite a população: \n");
                scanf("%d", &populacao1);
                printf("Digite a area em km²: \n");
                scanf("%f", &area1);
                printf("Digite o PIB: \n");
                scanf("%Lf", &pib1);
                printf("Digite o numero de pontos turisticos: \n");
                scanf("%d", &pontos_turisticos1);
                densidade_populacional1 = (float)populacao1 / area1;
                pib_per_capita1 = pib1 / area1;
                super_trunfo1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + 1/densidade_populacional1 + pib_per_capita1;

                printf("Segunda Carta: \n");
                printf("Digite o nome do estado: \n");
                scanf("%s", estado2);
                printf("Digite o codigo da carta: (Letra + Numero) \n");
                scanf("%s", codigo_do_estado2);
                printf("Digite o nome da cidade: \n");
                scanf("%s", nome_da_cidade2);
                printf("Digite a população: \n");
                scanf("%d", &populacao2);
                printf("Digite a area em km²: \n");
                scanf("%f", &area2);
                printf("Digite o PIB: \n");
                scanf("%Lf", &pib2);
                printf("Digite o numero de pontos turisticos: \n");
                scanf("%d", &pontos_turisticos2);
                densidade_populacional2 = (float)populacao2 / area2;
                pib_per_capita2 = pib2 / area2;
                super_trunfo2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + 1/densidade_populacional2 + pib_per_capita2;
                break;  
            case 3:
                printf("Menu de batalhas:\n1.Batalha de duas Categorias\n2.Batalha SUPER TRUNFO\n");
                scanf("%d", &opcao);
                switch (opcao) {
                    case 1:
                        printf("Batala de duas Categorias:\n");
                        printf("Escolha a primeira categoria para comparar:\n1. Comparar população\n2. Comparar área\n3. Comparar PIB\n4. Comparar pontos turísticos\n5. Comparar densidade populacional\n6. Comparar PIB per capita\n7. Comparar SUPER TRUNFO\n");
                        scanf("%d", &opcao_comparacao1);
                            switch (opcao_comparacao1) {
                                case 1:
                                    printf("Comparar população:\n");
                                    categoria_comparacao1 = populacao1 > populacao2 ? 1 : 0;
                                    break;
                                case 2:
                                printf("Comparar área:\n");
                                    categoria_comparacao1 = area1 > area2 ? 1 : 0;
                                    break;
                                case 3:
                                    printf("Comparar PIB:\n");
                                    categoria_comparacao1 = pib1 > pib2 ? 1 : 0;
                                    break;
                                case 4:
                                    printf("Comparar pontos turísticos:\n");
                                    categoria_comparacao1 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
                                    break;
                                case 5:
                                    printf("Comparar densidade populacional:\n");
                                    categoria_comparacao1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
                                    break;
                                case 6:
                                    printf("Comparar PIB per capita:\n");
                                    categoria_comparacao1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
                                    break;
                                case 7:
                                    printf("Comparar SUPER TRUNFO:\n");
                                    categoria_comparacao1 = super_trunfo1 > super_trunfo2 ? 1 : 0;
                                    break; 
                                default:
                                    printf("Opção de comparação inválida!\n");
                                    break;
                                }
                                
                        printf("Escolha a segunda categoria para comparar:\n1. Comparar população\n2. Comparar área\n3. Comparar PIB\n4. Comparar pontos turísticos\n5. Comparar densidade populacional\n6. Comparar PIB per capita\n7. Comparar SUPER TRUNFO\n");
                        scanf("%d", &opcao_comparacao2);
                            if (opcao_comparacao2 == opcao_comparacao1) {
                                printf("A segunda categoria deve ser diferente da primeira! Tente novamente.\n");
                            } else {
                            switch (opcao_comparacao2) {
                                case 1:
                                    printf("Comparar população:\n");
                                    categoria_comparacao2 = populacao1 > populacao2 ? 1 : 0;
                                    break;
                                case 2:
                                printf("Comparar área:\n");
                                    categoria_comparacao2 = area1 > area2 ? 1 : 0;
                                    break;
                                case 3:
                                    printf("Comparar PIB:\n");
                                    categoria_comparacao2 = pib1 > pib2 ? 1 : 0;
                                    break;
                                case 4:
                                    printf("Comparar pontos turísticos:\n");
                                    categoria_comparacao2 = pontos_turisticos1 > pontos_turisticos2 ? 1 : 0;
                                    break;
                                case 5:
                                    printf("Comparar densidade populacional:\n");
                                    categoria_comparacao2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
                                    break;
                                case 6:
                                    printf("Comparar PIB per capita:\n");
                                    categoria_comparacao2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
                                    break;
                                case 7:
                                    printf("Comparar SUPER TRUNFO:\n");
                                    categoria_comparacao2 = super_trunfo1 > super_trunfo2 ? 1 : 0;
                                    break; 
                                default:
                                    printf("Opção de comparação inválida!\n");
                                    break;
                                }  
                            }
                        if (categoria_comparacao1 && categoria_comparacao2) {
                            printf("A Carta 1 é a vencedora da batalha! \n");
                        } else if (categoria_comparacao1 != categoria_comparacao2) {
                            printf("A batalha terminou em empate! \n");
                        } else {
                            printf("A Carta 2 é a vencedora da batalha! \n");
                        }
                        break;
                    case 2:
                        printf("Comparar todas as categorias:\n");
                        printf("Qual carta vence, carta 1 ou carta 2? \n");
                        if (populacao1 > populacao2){
                            contador_de_vitorias1 += 1;
                            printf("Carta 1 Ganhou! População: %d\n",populacao1);
                        } else if (populacao2 > populacao1) {
                            contador_de_vitorias2 += 1;
                            printf("Carta 2 Ganhou! População: %d\n",populacao2);
                        } else {
                            printf("Empate na população! População: %d\n",populacao1);
                        }
                        if (area1 > area2){
                            contador_de_vitorias1 += 1;
                            printf("Carta 1 Ganhou! Area: %fkm²\n",area1);
                        } else if (area2 > area1) {
                            contador_de_vitorias2 += 1;
                            printf("Carta 2 Ganhou! Area: %fkm²\n",area2);
                        } else {
                            printf("Empate na area! Area: %fkm²\n",area1);
                        }
                        if (pib1 > pib2){
                            contador_de_vitorias1 += 1;
                            printf("Carta 1 Ganhou! Pib: %.2LfR$\n",pib1);
                        } else if (pib2 > pib1) {
                            contador_de_vitorias2 += 1;
                            printf("Carta 2 Ganhou! Pib: %.2LfR$\n",pib2);
                        } else {
                            printf("Empate no PIB! PIB: %.2LfR$\n",pib1);
                        }
                        if (pontos_turisticos1 > pontos_turisticos2){
                            contador_de_vitorias1 += 1;
                            printf("Carta 1 Ganhou! Pontos Turisticos: %d\n",pontos_turisticos1);
                        } else if (pontos_turisticos2 > pontos_turisticos1) {
                            contador_de_vitorias2 += 1;
                            printf("Carta 2 Ganhou! Pontos Turisticos: %d\n",pontos_turisticos2);
                        } else {
                            printf("Empate nos pontos turisticos! Pontos Turisticos: %d\n",pontos_turisticos1);
                        }
                        if (densidade_populacional1 < densidade_populacional2){
                            contador_de_vitorias1 += 1;
                            printf("Carta 1 Ganhou! Densidade Populacional: %.3f\n",densidade_populacional1);
                        } else if (densidade_populacional2 < densidade_populacional1) {
                            contador_de_vitorias2 += 1;
                            printf("Carta 2 Ganhou! Densidade Populacional: %.3f\n",densidade_populacional2);
                        } else {
                            printf("Empate na densidade populacional! Densidade Populacional: %.3f\n",densidade_populacional1);
                        }
                        if (pib_per_capita1 > pib_per_capita2) {
                            contador_de_vitorias1 += 1;
                            printf("Carta 1 Ganhou! PIB per Capta: %.2LfR$\n",pib_per_capita1);
                        } else if (pib_per_capita2 > pib_per_capita1) {
                            contador_de_vitorias2 += 1;
                            printf("Carta 2 Ganhou! PIB per Capta: %.2LfR$\n",pib_per_capita2);
                        } else {
                            printf("Empate no PIB per Capta! PIB per Capta: %.2LfR$\n",pib_per_capita1);
                        }
                        if (super_trunfo1 > super_trunfo2){
                            contador_de_vitorias1 += 5;
                            printf("Carta 1 Ganhou! SUPER TRUNFO: %.Lf\n",super_trunfo1);
                        } else if (super_trunfo2 > super_trunfo1) {
                            contador_de_vitorias2 += 5;
                            printf("Carta 2 Ganhou! SUPER TRUNFO: %.Lf\n",super_trunfo2);
                        } else {
                            printf("Empate no SUPER TRUNFO! SUPER TRUNFO: %.Lf\n",super_trunfo1);
                        }
                        if (contador_de_vitorias1 > contador_de_vitorias2){
                            printf("A Carta 1 é o SUPER TRUNFO!!!\n");
                            printf("Carta 1:\nEstado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\nPopulação: %d\nArea: %fkm²\nPIB: %.2LfR$\nPontos Turisticos: %d\nDensidade populacional: %.3f\nPIB per capita: %.2LfR$\nSUPER TRUNFO: %.Lf\n", estado1, codigo_do_estado1, nome_da_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, super_trunfo1);
                        } else if (contador_de_vitorias2 > contador_de_vitorias1) {
                            printf("A Carta 2 é o SUPER TRUNFO!!!\n");
                            printf("Carta 2:\nEstado: %s\nCódigo do Estado: %s\nNome da Cidade: %s\nPopulação: %d\nArea: %fkm²\nPIB: %.2LfR$\nPontos Turisticos: %d\nDensidade populacional: %.3f\nPIB per capita: %.2LfR$\nSUPER TRUNFO: %.Lf\n", estado2, codigo_do_estado2, nome_da_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2, super_trunfo2);
                        } else {
                            printf("Empate! Ambas as cartas são SUPER TRUNFO!!!\n");
                        }
                        break;
                    default:
                        printf("Opção de comparação inválida!\n");
                    }
                    break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Não Pode, Escolha uma opção do menu! \n");
        }
        if (opcao != 0) {
            printf("Retornando ao menu principal...\n");
        }
    } while (opcao != 0);
        
    return 0;
}
/* exemplo de entrada pra testar o programa, mas da pra brincar com qualquer numero 
NÃO USE AS VIRGULAS NA HORA DE DIGITAR OS NUMEROS, APENAS PONTOS PARA SEPARAR AS CASAS DECIMAIS, EX: 12325000.00 
Carta 1: 
A
A01
Sampa
12,325,000
1,521.11
699,280,000,000
50
Carta 2:
B
B02
Rio
6,748,000
1,200.25
300,500,000,000
30
*/
