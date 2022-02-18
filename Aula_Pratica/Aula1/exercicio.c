#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Exercicio 1
int main() {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  printf("%d", num*num);

  return 0;
}

// Exercicio 2
int main() {
  float a, b, c, result;

  scanf("%f%f%f", &a, &b, &c);

  if (a != 0)
  {
    result = -b / (2 * a);

    printf("%.4f", result);
  }

  return 0;
}

// Exercicio 3
int main(){
  int h, min, seg, s, resto;

  scanf("%d", &s);

  h = s/3600;
  resto = s%3600;
  min = resto/60;
  seg = resto % 60;

  printf("%d:%d:%d", h, min, seg);

  return 0;
}

// Exercicio 4
int main(){
  double Q,L,P, media;

  scanf("%lf%lf%lf", &Q, &L, &P);

  media = ((Q * 0.2) + (L * 0.3) + (P * 0.5));

  printf("%.1lf", media);

  return 0;
}

// Exercicio 5
int main() {
  int num, cem, cinq, vint, dez, cinco, dois, um, resto;

  scanf("%d", &num);

  cem = num / 100;
  resto = num % 100;
  cinq = resto / 50;
  resto = num % 50;
  vint = resto / 20;
  resto = resto % 20;
  dez = resto / 10;
  resto = resto % 10;
  cinco = resto / 5;
  resto = resto % 5;
  dois = resto / 2;
  resto = resto % 2;
  um = resto / 1;
  resto = resto % 1;

  printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", cem, cinq, vint, dez, cinco, dois, um);

  return 0;
}

// Exercicio 6
int main(){
  int num, result, num1, num2, num3;

  scanf("%d", &num);

  num1=(num/100) % 10;
  num2=(num / 10)%10;
  num3=num % 10;


  result = (num1+ (num2 * 3) + (num3 * 5)) % 7;

  printf("%d%d", num, result);

  return 0;
}
