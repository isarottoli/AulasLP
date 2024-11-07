#include <malloc.h>
#include <stdio.h>
#include "aluno.h"

void inicializa(){

    printf("Estrutura inicializada!");
    for(int i = 0; i <MAX; i++){
        v[i] = NULL;
    }

}

void ler_dado(int pos){
    if (pos < 0 || pos >= 100){
        printf("ERRO: Posicao invalida\n");
        return;
    }
    v[pos] = (p_aluno) malloc(sizeof (struct Aluno));
    printf("Digite os dados do aluno: \n");
    fflush(stdin);
    printf("Digite o nome do aluno: \n");
    scanf("%[^\n]s", v[pos]->nome);

    fflush(stdin);
    printf("Digite o codigo de matricula: \n");
    scanf("%d", &v[pos]->matricula);

    fflush(stdin);
    printf("Digite o endereco do aluno: \n");
    scanf("%[^\n]s", v[pos]->endereco);

    fflush(stdin);
    printf("Digite o telefone do aluno: \n");
    scanf("%[^\n]s", v[pos]->telefone);

    fflush(stdin);
    printf("Digite a nota do aluno: \n");
    scanf("%lf", &v[pos]->nota);


}


void imprimir_unico(int pos){
    printf("Dados do aluno solicitado: \n");
    printf("Nome: %s\n", v[pos]->nome);
    printf("Matricula: %d\n", v[pos]->matricula); //Acesse o membro matricula da estrutura
    printf("Endereco: %s\n", v[pos]->endereco);   // apontada pelo ponteiro armazenado em v[pos]
    printf("Telefone: %s\n", v[pos]->telefone);
    printf("Nota: %.2lf\n", v[pos]->nota);
    printf("----------------------------\n\n");
}

void imprimir(){

    for (int i = 0; i < MAX; i++){
        if(v[i] == NULL) return;
        imprimir_unico(i);
    }

}