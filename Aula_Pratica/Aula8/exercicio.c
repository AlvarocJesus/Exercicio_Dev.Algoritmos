#include <stdio.h>
#include <stdlib.h>

// Exercicio 1
void juntar(int *x1, int n1, int *x2, int n2, int *x3) {
  int qtd, dif = 0, *xtemp;

  printf("Elementos X1:\n");
  for (int i = 0; i < n1; i++) {
    scanf("%d", x1 + i);
  }

  printf("Elementos X2:\n");
  for (int i = 0; i < n2; i++) {
    scanf("%d", x2 + i);
  }

  for (int i = 0; i < n1; i++) {
    if (*(x1 + i) == *(x2 + i)) {
      dif++;
    }
  }

  qtd = (n1 + n2) - dif;
  x3 = malloc(qtd * sizeof(int));
  xtemp = malloc(n1 + n2 * sizeof(int));

  for (int i = 0; i < n1; i++) {
    *(xtemp + i) = *(x1 + i);
  }
  for (int j = n1; j < (n1 + n2); j++) {
    *(xtemp + j) = *(x2 + (j - n1));
  }

  for (int i = 0; i < (n1 + n2); i++) {
    for (int z = 0; z < qtd; z++) {
      if (i == z) {
        if (*(xtemp + i) == *(x3 + z)) {
        } else {
          *(x3 + z) = *(xtemp + i);
        }
        break;
      } else {
        if (*(xtemp + i) == *(x3 + z)) {
          break;
        } else if (*(x3 + z) == 0) {
          *(x3 + z) = *(xtemp + i);
          break;
        }
      }
    }
  }

  for (int i = 0; i < qtd; i++) {
    printf("%d ", *(x3 + i));
  }
  printf("\n");
  printf("Tamanho X3: %d\n", qtd);
}

int main() {
  int n1, n2;
  int *x1, *x2, *x3;

  printf("Tamanho de X1:");
  scanf("%d", &n1);

  printf("Tamanho de X2:");
  scanf("%d", &n2);

  x1 = malloc(n1 * sizeof(int));
  x2 = malloc(n2 * sizeof(int));

  juntar(x1, n1, x2, n2, x3);

  return 0;
}

// Exercicio 2
/* #include <stdio.h>

int interseccao(int *x1, int *x2, int *x3, int n1, int n2, int n3) {
  int i = 0, j = 0, k = 0;
  int alterados = 0;

  for (i = 0; i < n1; i++) {
    for (j = 0; j < n2; j++) {
      if (x2[j] == x1[i]) {
        alterados += 1;
        x3[k] = x1[i];
        k += 1;
      }
    }
  }

  k = 0;

  for (i = 0; i < alterados; i++) {
    for (j = i + 1; j < alterados;) {
      if (x3[j] == x3[i]) {
        for (k = j; k < alterados; k++)
          x3[k] = x3[k + 1];

        alterados--;
      } else {
        j++;
      }
    }
  }
  return alterados;
}

int main(void) {
  int n1, n2, n3;
  int i = 0, alterados;

  printf("Tamanho x1\n");
  scanf("%d", &n1);

  printf("Tamanho x2\n");
  scanf("%d", &n2);

  if (n1 > n2) {
    n3 = n1;
  } else {
    n3 = n2;
  }

  int x1[n1], x2[n2], x3[n3];

  printf("Vetor 1\n");
  for (i = 0; i < n1; i++) {
    scanf("%d", &x1[i]);
  }

  printf("Vetor 2\n");
  for (i = 0; i < n2; i++) {
    scanf("%d", &x2[i]);
  }

  alterados = interseccao(x1, x2, x3, n1, n2, n3);

  printf("%d alterações e Vetor x3 alterado\n", alterados);

  for (i = 0; i < alterados; i++) {
    printf("%d ", x3[i]);
  }

  return 0;
} */

// Exercicio 3 -> feito
void readArray(int *v, int n) {
  for (int i = 0; i < n; i++) {
    scanf("%d", v + i);
  }

  // return *v;
}

int main() {
  int n;
  int *v;

  scanf("%d", &n);

  v = malloc(n * sizeof(int));

  readArray(v, n);
  for (int i = 0; i < n; i++) {
    printf("%d\t", *(v+i));
  }

  return 0;
}

// Exercicio 4
#define LIN 3
#define COL 3

int main() {
  float **mat, **mat2, **result;
  int i, k, j;

  mat = malloc(LIN * sizeof(float));
  mat2 = malloc(LIN * sizeof(float));
  result = malloc(LIN * sizeof(float));

  for (i = 0; i < LIN; i++)
    mat[i] = malloc(COL * sizeof(float));
  for (i = 0; i < LIN; i++)
    mat2[i] = malloc(COL * sizeof(float));
  for (i = 0; i < LIN; i++)
    result[i] = malloc(COL * sizeof(float));

  for (i = 0; i < LIN; i++)
    for (j = 0; j < COL; j++)
      scanf("%f", &mat[i][j]);

  printf("\n");

  for (i = 0; i < LIN; i++)
    for (j = 0; j < COL; j++)
      scanf("%f", &mat2[i][j]);

  printf("\n");

  for (i = 0; i < LIN; i++)
    for (j = 0; j < COL; j++)
      for (k = 0; k < COL; k++)
        result[i][j] += mat[i][k] * mat2[k][j];

  printf("Produto das Matrizes:\n");

  for (i = 0; i < LIN; i++) {
    for (j = 0; j < COL; j++) {
      printf("%.2f ", result[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < LIN; i++)
    free(mat[i]);
  free(mat);

  for (i = 0; i < LIN; i++)
    free(mat2[i]);
  free(mat2);

  for (i = 0; i < LIN; i++)
    free(result[i]);
  free(result);

  return 0;
}
