#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float somatoria(float total)
{
  float s2, termo, soma = 0, soma2 = 0, i = 0;

  while (i < total)
  {
    scanf("%f", &termo);

    soma += termo;
    soma2 += (termo * termo);
    i++;
  }

  s2 = (1 / (total - 1)) * (soma2 - ((1 / total) * (soma * soma)));

  return s2;
};

int main()
{
  float total;

  scanf("%f", &total);

  printf("Desvio Padrao Amostral = %f\nVariancia Amostral = %f", sqrt(somatoria(total)), somatoria(total));
}
