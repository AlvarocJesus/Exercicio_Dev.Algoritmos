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
no *ordena(no *lista, int max);

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
  int i;
  no *atual = (no *)malloc(sizeof(no));
  no *proximo = (no *)malloc(sizeof(no));

  atual = lista;

  for (i = 0; i < max; i++)
  {
    proximo = atual->prox;
    while (proximo!=NULL)
    {
      int aux = 0;
      if (atual->conteudo > proximo->conteudo)
      {
        aux = atual->conteudo;
        atual->conteudo = proximo->conteudo;
        proximo->conteudo = aux;
      }
      proximo = proximo->prox;
    }
    atual = atual->prox;
  }

  return lista;
}

// Exercicio 2
void busca(no *lista, int chave);

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
  int encontro = 0;

  while (lista)
  {
    if (lista->conteudo == chave)
    {
      printf("Encontrado na posição %d", count);
      encontro++;
    }
    count++;
    lista = lista->prox;
  }
  if (encontro == 0)
  {
    printf("Item nao encontrado");
  }
}

// Exercicio 3
// Isso ocorre porque no função inserir estamos armazenando os valores usando o método de armazenamento de pilha, com isso o ultimo valor a ser digitado retorna com a posição 0, pois ele era o primeiro a ser comparado.

// Exercicio 4
// Não, já que como explicado no exercício anterior, a lista ligada funciona através de um esquema de pilha, sendo assim o último termo é o primeiro a ser lido, logo há outras formas mais práticas de se buscar um elemento dentro de uma lista, a função da lista ligada é apenas inserir e remover variáveis.

// Exercicio 5
void particiona(no *lista, int tam);

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
  particiona(lista, tam);
}

void particiona(no *lista, int tam)
{
  int par[tam];
  int impar[tam];

  int i = 0, j = 0, k;

  while (lista)
  {
    if (lista->conteudo % 2 == 0)
    {
      par[i] = lista->conteudo;
      i++;
    }
    else
    {
      impar[j] = lista->conteudo;
      j++;
    }
    lista = lista->prox;
  }

  printf("\nLista par:");
  for (k = i - 1; k >= 0; k--)
  {
    printf("%d ", par[k]);
  }

  printf("\nLista impar:");
  for (k = j - 1; k >= 0; k--)
  {
    printf("%d ", impar[k]);
  }
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

/*------------------------------------------------------------*/

// Exercicio 6
typedef struct alunos notaAlunos;

notaAlunos *inicia(void);
notaAlunos *insere_notas(notaAlunos *lista, int ra, double nota);
void imprime_notas(notaAlunos *lista, int tam);

struct alunos
{
  int ra;
  double notas;
  struct alunos *prox;
};

int main()
{
  notaAlunos *lista = inicia();

  int ra, tam=0;
  double nota;

  printf("Para sair, digite 0 como valor de RA do aluno\n");
  while (1)
  {
    printf(" Entre com o RA do Aluno：\n");
    scanf("%d", &ra);
    printf(" Entre com a média ：\n");
    scanf("%lf", &nota);
    if(ra == 0 && nota == 0){
        break;
    }else{
        tam++;
        lista = insere_notas(lista, ra, nota);
    }
  }

  imprime_notas(lista, tam);
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

void imprime_notas(notaAlunos *lista, int tam)
{
  int rav[tam], i, qtd=0;
  double nota[tam],soma = 0;
  
  while (lista)
  {
    soma += lista->notas;
    rav[qtd]=lista->ra;
    nota[qtd]=lista->notas;
    qtd++;
    lista = lista->prox;
  }
  
for(i=tam-1;i>=0;i--){
    printf("O aluno com RA %d possui média ：%.2lf\n", rav[i], nota[i]);
}
  
  printf("A média da turma foi ：%.2lf", soma / tam);
  printf("\n\n");
}