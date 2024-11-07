#include <stdio.h>
#include "aluno.h"

p_aluno v[MAX];
int main() {
    int posicao = 0;
    int posicao_desejada = 0;

    inicializa();

    int opcao = 0;

    do{
        printf("Menu principal: \n");
        printf("1. Cadastrar novo aluno\n");
        printf("2. Mostrar o aluno\n");
        printf("3. Mostrar todos os alunos\n");
        printf("9. Sair\n");

        printf("Digite a opcao: \n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                ler_dado(posicao);
                posicao++;
                break;
            case 2:
                printf("Digite a posicao desejada: \n");
                scanf("%d", &posicao_desejada);
                imprimir_unico(posicao_desejada);
                break;
            case 3:
                imprimir();
                break;
            case 9:
                printf("Fim! \n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }while (opcao != 9);

    return 0;
}
