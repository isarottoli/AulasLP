#define MAX 100
typedef struct Aluno{
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    double nota;
}aluno; //apelido para struct Aluno

typedef aluno *p_aluno; //ponteiro para aluno

extern p_aluno v[MAX]; //v[MAX] = vetor do tipo ponteiro

//cabeçalho

/**
* Função inicializa - responsavel por retribuir NULL a todas
 * as posições do vetor v;
*/

void inicializa();

/**
 * Função para ler os dados a partir do console
 * @param pos Posição do vetor
 */
void ler_dado(int pos);

/**
 * Função para imprimir apena um dado
 * @param pos
 */

void imprimir_unico(int pos);

/**
 * imprimir todos os dados do vetor que esteja preenchido
 */
void imprimir();