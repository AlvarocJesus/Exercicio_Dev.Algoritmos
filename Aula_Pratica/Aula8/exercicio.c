#include <stdio.h>
#include <stdlib.h>

// Exercicio 1
/* void juntar(int *x1, int n1, int *x2, int n2, int *x3) {
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
} */

// Exercicio 2
/* void intersec(int n1, int n2, int *x1, int *x2, int *x3) {
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

  qtd = dif;
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
         // *(x3 + z) = *(xtemp + i);
        } else {
          *(x3 + z) = *(xtemp + i);
        }
        break;
      } else {
        if (*(xtemp + i) == *(x3 + z)) {
          *(x3 + z) = 0;
          *(x3 + z) = *(xtemp + i);
          break;
        } else if (*(x3 + z) == 0) {
         *(x3 + z) = *(xtemp + i);
          break;
        }
      }
    }
  }

  for (int i = 0; i < qtd; i++) {
    printf("x3 irá conter: %d\n", *(x3 + i));
  }
  printf("%d\n", qtd);
}

int main() {
  int *x1, *x2, *x3;
  int n1, n2;

  printf("Insira a quantidade valores do vetor x1:\n");
  scanf("%d", &n1);
  printf("Insira a quantidade valores do vetor x2:\n");
  scanf("%d", &n2);

  x1 = malloc(n1 * sizeof(int));
  x2 = malloc(n2 * sizeof(int));

  intersec(n1, n2, x1, x2, x3);

  return 0;
} */

// Exercicio 3 -> feito
/* void readArray(int *v, int n) {
  int i;

  for (i = 0; i < n; i++) {
    scanf("%d", v + i);
  }

  for (i = 0; i < n; i++) {
    printf("%d ", *(v + i));
  }
}

int main() {
  int n;
  int *v;

  scanf("%d", &n);

  v = malloc(n * sizeof(int));

  readArray(v, n);
  

  return 0;
} */

// Exercicio 4
/* #define LIN 3
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
} */
