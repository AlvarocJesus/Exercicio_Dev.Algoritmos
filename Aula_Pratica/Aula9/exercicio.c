#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Exercicio 1
int main()
{
  int i = 0;
  char texto[50] = {};
  fgets(texto, 50, stdin);
  int tam = 0;
  for (i = 0; i < 50; i++)
  {
    if ((texto[i] != '\n') && (texto[i] != '\0'))
    {
      tam++;
    }
    else
    {
      break;
    }
  }
  printf("%d", tam);
}

// Exercicio 2
int main()
{
  int i = 0;
  char texto[50] = {};
  fgets(texto, 50, stdin);
  int masc = 0;
  for (i = 0; i < 55; i++)
  {
    if ((texto[i] >= 'A') && (texto[i] <= 'Z'))
    {
      masc++;
    }
  }
  printf("%d", masc);
}

// Exercicio 3
int main()
{
  int i = 0;
  char texto[51] = {};
  fgets(texto, 56, stdin);
  int masc = 0;
  for (i = 0; i < 55; i++)
  {
    if ((texto[i] >= 'a') && (texto[i] <= 'z'))
    {
      masc++;
    }
  }
  printf("%d", masc);
}

// Exercicio 4
int main()
{
  int i = 0, ch;
  char texto[50] = {};
  fgets(texto, 50, stdin);
  for (i = 0; i < 55; i++)
  {
    if ((texto[i] >= 'a') && (texto[i] <= 'z'))
    {
      ch = texto[i] - 32;
      texto[i] = ch;
    }
    else if ((texto[i] >= 'A') && (texto[i] <= 'Z'))
    {
      ch = texto[i] + 32;
      texto[i] = ch;
    }
  }
  printf("%s", texto);
}

// Exercicio 5
int main()
{
  int i = 0;
  char texto[50] = {};
  fgets(texto, 55, stdin);
  int tam = 0;
  for (i = 1; i < 55; i++)
  {
    if (texto[i] != '\0')
    {
      tam++;
    }
    else
    {
      break;
    }
  }
  char temp;
  for (i = 0; i < tam / 2; i++)
  {
    temp = texto[i];
    texto[i] = texto[tam - i - 1];
    texto[tam - i - 1] = temp;
  }
  printf("%s", texto);
}

// Exercicio 6
int main()
{
  int i = 0;
  char texto[50] = {}, texto1[50] = {};

  fgets(texto, 50, stdin);
  fgets(texto1, 50, stdin);

  char num1[50] = {}, num2[50] = {};
  int tam1 = 0, tam2 = 0;
  for (i = 0; i < 50; i++)
  {
    if ((texto[i] >= '0') && (texto[i] <= '9'))
    {
      num1[tam1] = texto[i];
      tam1++;
    }
  }
  for (i = 0; i < 50; i++)
  {
    if ((texto1[i] >= '0') && (texto1[i] <= '9'))
    {
      num2[tam2] = texto1[i];
      tam2++;
    }
  }

  int num01 = atoi(num1);
  int num02 = atoi(num2);

  printf("%d", num01 + num02);
}

// Exercicio 7
int main()
{
  int i = 0;
  char texto[50] = {}, texto1[50] = {};
  fgets(texto, 50, stdin);
  fgets(texto1, 50, stdin);
  int tam1 = 0, tam2 = 0;
  for (i = 1; i < 50; i++)
  {
    if (texto[i] != '\0')
    {
      tam1++;
    }
    else
    {
      break;
    }
  }
  for (i = 1; i < 50; i++)
  {
    if (texto1[i] != '\0')
    {
      tam2++;
    }
    else
    {
      break;
    }
  }
  char falta[50] = {};
  int menor, falta1;
  int tam3 = 0;
  if (tam1 > tam2)
  {
    menor = tam2;
    falta1 = tam1;
    for (i = 0; i < tam1; i++)
    {
      falta[i] = texto[i];
    }
  }
  else
  {
    menor = tam1;
    falta1 = tam2;
    for (i = 0; i < tam2; i++)
    {
      falta[i] = texto1[i];
    }
  }
  int n3 = tam1 + tam2;
  char uniao[50] = {};
  for (i = 0; i < menor; i++)
  {
    uniao[tam3] = texto[i];
    uniao[tam3 + 1] = texto1[i];
    tam3 += 2;
  }

  int faltam = n3 - tam3;
  if (faltam > 0)
  {
    for (i = 0; i < faltam; i++)
    {
      uniao[tam3 + i] = falta[n3 - falta1 + i];
    }
  }

  printf("%s", uniao);
}