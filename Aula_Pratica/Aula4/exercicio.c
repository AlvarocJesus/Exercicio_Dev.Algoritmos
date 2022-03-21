#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercicio 2
int maxTax(double *taxas, int n)
{
  int max = 0, i, index=0;

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &taxas[i]);
  }

  for (i = 0; i < n; i++)
  {
    if (max < taxas[i])
    {
      // printf("%lf \n", taxas[i]);
      // printf("maior: %d \n", taxas[1]>taxas[2]);
      // printf("%d \n", i);
      max = taxas[i];
      index = i;
    }
  }
  return index;
}

int main()
{
  int n;

  scanf("%d", &n);
  double taxas[n];

  printf("%d", maxTax(taxas, n));

  return 0;
}

// Exercicio 3
int inverte(int *vetor, int n)
{
  int i, k, v[n];

  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
  }

  for (i = 0, k = n; i < n && k >= 0; i++, k--)
  {
    v[i] = vetor[k];
  }

  printf("%ls\n", v);

  return *v;
}

int main()
{
  int n;

  scanf("%d", &n);

  int vetor[n];

  printf("%d", inverte(vetor, n));

  return 0;
}

// Exercicio 4
double desvPad(double *valores, int n)
{
  int i;
  double media = 0, somatoria = 0, soma = 0, s;

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &valores[i]);
  }

  for (i = 0; i < n; i++)
  {
    soma += valores[i];
  }
  media = soma / n;

  for (i = 0; i < n; i++)
  {
    somatoria += ((valores[i] - media) * (valores[i] - media));
  }

  s = sqrt(somatoria / n - 1);

  return s;
}

int main()
{
  int n;

  scanf("%d", &n);

  double valores[n];

  printf("Desvio Padrao Amostral = %.2lf\nVariancia Amostral = %.2lf", desvPad(valores, n), pow(desvPad(valores, n), 2));

  return 0;
}

// Exercicio 5
double modulo(double *x, int n){
  double sum=0, mod;
  int i;

  for ( i = 0; i < n; i++)
  {
    scanf("%lf", &x[i]);
  }

  for (i = 0; i < n; i++)
  {
    sum += pow(x[i], 2);
  }

  mod = sqrt(sum);

  return mod;
}

int main(){
  int n;

  scanf("%d", &n);

  double x[n];

  printf("Modulo = %.2lf", modulo(x, n));



  return 0;
}

// Exercicio 6
int main(){

}

// Exercicio 8
#define PI 3.14159265358979323846

double calcAng(double *x, double *y, int n)
{
  double cosseno = 0, sumX = 0, sumY = 0, mult = 0;
  int i;

  for (i = 0; i < 0; i++)
  {
    scanf("%lf", &x[i]);
  }
  for (i = 0; i < 0; i++)
  {
    scanf("%lf", &y[i]);
  }

  for (i = 0; i < 0; i++)
  {
    sumX += (x[i] * x[i]);
    sumY += pow(y[i], 2);
    mult += (x[i] * y[i]);
  }

  cosseno = cos((mult / (sumX * sumY)));
  printf("%lf", cosseno);

  return (cosseno * 180) / PI;
}

int main()
{
  int n;
  scanf("%d", &n);

  double x[n], y[n];

  printf("Angulo entre os vetores: %.4lf graus.", calcAng(x, y, n));
}

// Exercicio 9
void prodVet(double *x, double *y)
{
  int i;
  double x1, x2, x3;
  for (i = 0; i < 3; i++)
  {
    scanf("%lf", &x[i]);
  }
  for (i = 0; i < 3; i++)
  {
    scanf("%lf", &y[i]);
  }

  x1 = (x[1] * y[2]) - (x[2] * y[1]);
  x2 = (x[2] * y[0]) - (x[0] * y[2]);
  x3 = (x[0] * y[1]) - (x[1] * y[0]);

  printf("\nProduto Vetorial = (%.2lf, %.2lf, %.2lf)\n", x1, x2, x3);
}

int main()
{
  double x[3], y[3];
  prodVet(x, y);
}

// Exercicio 10
double minDist(double *x, double *y, int n)
{
  int i;

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &x[i]);
  }

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &y[i]);
  }
}

double maxDist(double *x, double *y, int n)
{
  int i;
  double sum = 0, dist;

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &x[i]);
  }

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &y[i]);
  }

  for (i = 0; i < n; i++)
  {
    sum += pow(y[i] - x[i], 2);
  }
  dist = sqrt(sum);
  return dist;
}

int main()
{
  int n;
  scanf("%d", &n);

  double x[n], y[n];

  // printf(" Menor Distancia: %.2lf\nMaior Distancia: %.2lf", minDist(x, y, n), maxDist(x, y, n));
  printf("Maior Distancia: %.2lf", maxDist(x, y, n));
}

// Exercicio 11
double minDist(double *x, double *y, int n)
{
  int i;
  double sum = 0, dist;

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &x[i]);
  }
  for (i = 0; i < n; i++)
  {
    sum += pow(y[i] - x[i], 2);
  }
  dist = sqrt(sum);
  return dist;
}

double maxDist(double *x, double *y, int n)
{
  int i;
  double sum = 0, dist;

  for (i = 0; i < n; i++)
  {
    scanf("%lf", &x[i]);
  }

  for (i = 0; i < n; i++)
  {
    sum += pow(y[i] - x[i], 2);
  }
  dist = sqrt(sum);
  return dist;
}

int main()
{
  int n;
  scanf("%d", &n);

  double x[n], y[n];

  printf(" Menor Distancia: %.2lf\nMaior Distancia: %.2lf", minDist(x, y, n), maxDist(x, y, n));
}

// Exercicio 12
int encontra(int *vetor, int n)
{
  int i, valor;

  for (i = 0; i < n; i++)
  {
    scanf("%d", &vetor[i]);
  }

  scanf("%d", valor);

  for (i = 0; i < n; i++)
  {
    if (valor == vetor[i])
    {
      return i;
    }
  }
}

int main()
{
  int n, res;
  scanf("%d", &n);

  int vetor[n];
  res = encontra(vetor, n);

  if (res != 0)
  {
    printf("%d", res);
  }
  else
  {
    printf("%d", -1);
  }
}