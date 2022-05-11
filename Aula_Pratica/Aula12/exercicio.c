#include <stdio.h>
#include <stdlib.h>

typedef struct reg no;

no *inicializa(void);
no *insere_inicio(no *lista, int num);
void imprimir(no *lista);

struct reg
{
  int conteudo;
  struct reg *prox;
};

// Exercicio 1
/* no *ordena(no *lista, int max);

int main(void)
{
  no *lista = inicializa();

  int max, i, num;

  scanf("%d", &max);

  for (i = 0; i < max; i++)
  {
    scanf("%d", &num);
    lista = insere_inicio(lista, num);
  }

  lista = ordena(lista, max);
  imprimir(lista);

  return 0;
}

no *ordena(no *lista, int max)
{
  no *atual = (no *)malloc(sizeof(no));
  no *proximo = (no *)malloc(sizeof(no));

  atual = lista;

  for (size_t i = 0; i < max; i++)
  {
    proximo = atual->prox;
    while (lista)
    {
      int aux = 0;
      if (atual->conteudo > proximo->conteudo)
      {
        aux = atual->conteudo;
        atual->conteudo = proximo->conteudo;
        proximo->conteudo = aux;
      }
      proximo = atual;
    }
    atual = lista->prox;
  }

  return lista;
} */

// Exercicio 2
/* void busca(no *lista, int chave);

int main(void)
{
  int tam, num, chave;
  no *lista = inicializa();
  printf("Digite a quantidade de itens a serem inseridos \n");
  scanf("%d", &tam);

  printf("Digite os valores \n");
  for (int i = 0; i < tam; i++)
  {
    scanf("%d", &num);
    lista = insere_inicio(lista, num);
  }
  printf("Digite a chave de busca \n");
  scanf("%d", &chave);
  busca(lista, chave);
}

void busca(no *lista, int chave)
{
  int count = 0;

  while (lista)
  {
    if (lista->conteudo == chave)
    {
      count++;
    }
  }
  if (count != 0)
  {
    printf("Encontrado na posição %d", count);
  }
  else
  {
    printf("Item nao encontrado");
  }
} */

// Exercicio 3
// Isso ocorre porque no função inserir estamos armazenando os valores usando o método de armazenamento de pilha, com isso o ultimo valor a ser digitado retorna com a posição 0, pois ele era o primeiro a ser comparado.

// Exercicio 4
// Nao. Pois

// Exercicio 5
/* void particiona(no *lista);

int main(void)
{
  int tam, num;
  no *lista = inicializa();
  printf("Digite a quantidade de itens a serem inseridos \n");
  scanf("%d", &tam);

  printf("Digite os valores \n");
  for (int i = 0; i < tam; i++)
  {
    scanf("%d", &num);
    lista = insere_inicio(lista, num);
  }
  particiona(lista);
}

void particiona(no *lista)
{
  no *par = (no *)malloc(sizeof(no));
  no *impar = (no *)malloc(sizeof(no));

  // par = inicializa();
  // impar = inicializa();

  while (lista)
  {
    if (lista->conteudo % 2 == 0)
    {
      par->conteudo = lista->conteudo;
      par->prox = lista;
    }
    else
    {
      impar->conteudo = lista->conteudo;
      impar->prox = lista;
    }
  }

  printf("\n Lista par: ");
  while (par)
  {
    printf("%d ", par->conteudo);
    par = par->prox;
  }
  printf("\n\n");

  printf("\n Lista impar: ");
  while (impar)
  {
    printf("%d ", impar->conteudo);
    impar = impar->prox;
  }
  printf("\n\n");
} */

// Exercicio 6
typedef struct alunos notaAlunos;

notaAlunos *inicia(void);
notaAlunos *insere_notas(notaAlunos *lista, int ra, double nota);
void imprime_notas(notaAlunos *lista);

struct alunos
{
  int ra;
  double notas;
  struct reg *prox;
};

int main()
{
  notaAlunos *lista = inicia();

  int ra;
  double nota;

  while (ra != 0 && nota != 0)
  {

    printf("Entre com o RA do Aluno :");
    scanf("%d", &ra);
    printf("Entre com a média :");
    scanf("%lf", &nota);
    lista = insere_notas(lista, ra, nota);
  }

  imprime_notas(lista);
}

notaAlunos *inicia(void)
{
  return NULL;
}

notaAlunos *insere_notas(notaAlunos *lista, int ra, double nota)
{
  notaAlunos *novo = (notaAlunos *)malloc(sizeof(notaAlunos));
  novo->ra = ra;
  novo->notas = nota;
  novo->prox = lista;
  return novo;
}

void imprime_notas(notaAlunos *lista)
{
  double soma = 0;
  int qtd = 0;
  while (lista)
  {
    soma += lista->notas;
    qtd++;
    printf("O aluno com RA %d possui média : %.2lf\n", lista->ra, lista->notas);
    lista = lista->prox;
  }
  printf("A média da turma foi : %.2lf", soma / qtd);
  printf("\n\n");
}

/*---------- Funções que sempre vao ser usadas ----------*/
no *inicializa(void)
{
  return NULL;
}

no *insere_inicio(no *l, int i)
{
  no *novo = (no *)malloc(sizeof(no));
  novo->conteudo = i;
  novo->prox = l;
  return novo;
}

void imprimir(no *lista)
{
  printf("\n Lista: ");
  while (lista)
  {
    printf("%d ", lista->conteudo);
    lista = lista->prox;
  }
  printf("\n\n");
}