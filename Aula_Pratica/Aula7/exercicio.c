#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pontos
{
  int x;
  int y;
} meusPontos;

int main()
{
  int n;
  float dist, soma = 0;

  scanf("%d", &n);

  struct pontos meusPontos[n];

  for (int i = 0; i < n; i++)
  {
    if (i != n - 1)
    {
      soma += sqrt(((pow((meusPontos[i + 1].x - meusPontos[i].x), 2) + pow((meusPontos[i + 1].y - meusPontos[i].y), 2))));
      printf("%d\n", meusPontos[i + 1].x - meusPontos[i].x);
      printf("%f\n", sqrt(((pow((meusPontos[i + 1].x - meusPontos[i].x), 2) + pow((meusPontos[i + 1].y - meusPontos[i].y), 2)))));
    }
    else
    {
      soma += sqrt(((pow((meusPontos[0].x - meusPontos[n-1].x), 2) + pow((meusPontos[0].y - meusPontos[n-1].y), 2))));
      printf("%d\n", meusPontos[i + 1].x - meusPontos[i].x);
      printf("%f\n", sqrt(((pow((meusPontos[0].x - meusPontos[n - 1].x), 2) + pow((meusPontos[0].y - meusPontos[n - 1].y), 2)))));
    }
  }
  dist = soma;

  printf("Perimetro: %.4lf\n", dist);

  return 0;
}