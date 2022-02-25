#include <stdio.h>
#include <stdlib.h>

// Exercicio 1
int main(){
  int num1, num2;

  scanf("%d%d", &num1, &num2);

  if(num1<num2){
    printf("%d %d", num2, num1);
  } else {
    printf("%d %d", num2, num1);
  }

  return 0;
} 

// Exercicio 2
int main()
{
  int num1, num2, num3;

  scanf("%d%d%d", &num1, &num2, &num3);

  if ((num1 < num2) && (num2 < num3) && (num1<num3))
  {
    printf("%d %d %d", num1, num2, num3);
  }
  else if ((num1 < num2) && (num2 > num3)&&(num1<num3))
  {
    printf("%d %d %d", num1, num3, num2);
  }
  else if ((num1 > num2) && (num2 < num3) && (num1 < num3))
  {
    printf("%d %d %d", num2, num1, num3);
  }
  else if ((num1 > num2) && (num2 < num3) && (num1 > num3))
  {
    printf("%d %d %d", num2, num3, num1);
  }
  else if ((num1 > num2) && (num2 > num3) && (num1 > num3))
  {
    printf("%d %d %d", num3, num2, num1);
  }

  return 0;
} 

// Exercicio 3
int main() {
  int n1, n2, n3, n4;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  if (n1 < n2 && n2 < n3 && n3 < n4)
    printf("%d %d %d %d", n1, n2, n3, n4);
  else if (n1 < n3 && n3 < n2 && n2 < n4)
    printf("%d %d %d %d", n1, n3, n2, n4);
  else if (n1 < n3 && n3 < n4 && n4 < n2)
    printf("%d %d %d %d", n1, n3, n4, n2);
  else if (n1 < n2 && n2 < n4 && n4 < n3)
    printf("%d %d %d %d", n1, n2, n4, n3);
  else if (n1 < n4 && n4 < n2 && n2 < n3)
    printf("%d %d %d %d", n1, n4, n2, n3);
  else if (n1 < n4 && n4 < n3 && n3 < n2)
    printf("%d %d %d %d", n1, n4, n3, n2);

  else if (n2 < n1 && n1 < n3 && n3 < n4)
    printf("%d %d %d %d", n2, n1, n3, n4);
  else if (n2 < n1 && n1 < n4 && n4 < n3)
    printf("%d %d %d %d", n2, n1, n4, n3);
  else if (n2 < n3 && n3 < n1 && n1 < n4)
    printf("%d %d %d %d", n2, n3, n1, n4);
  else if (n2 < n3 && n3 < n4 && n4 < n1)
    printf("%d %d %d %d", n2, n3, n4, n1);
  else if (n2 < n4 && n4 < n1 && n1 < n3)
    printf("%d %d %d %d", n2, n4, n1, n3);
  else if (n2 < n4 && n4 < n3 && n3 < n1)
    printf("%d %d %d %d", n2, n4, n3, n1);

  else if (n3 < n1 && n1 < n2 && n2 < n4)
    printf("%d %d %d %d", n3, n1, n2, n4);
  else if (n3 < n1 && n1 < n4 && n4 < n2)
    printf("%d %d %d %d", n3, n1, n4, n2);
  else if (n3 < n2 && n2 < n1 && n1 < n4)
    printf("%d %d %d %d", n3, n2, n1, n4);
  else if (n3 < n2 && n2 < n4 && n4 < n1)
    printf("%d %d %d %d", n3, n2, n4, n1);
  else if (n3 < n4 && n4 < n1 && n1 < n2)
    printf("%d %d %d %d", n3, n4, n1, n2);
  else if (n3 < n4 && n4 < n2 && n2 < n1)
    printf("%d %d %d %d", n3, n4, n2, n1);

  else if (n4 < n1 && n1 < n2 && n2 < n3)
    printf("%d %d %d %d", n4, n1, n2, n3);
  else if (n4 < n1 && n1 < n3 && n3 < n2)
    printf("%d %d %d %d", n4, n1, n3, n2);
  else if (n4 < n2 && n2 < n1 && n1 < n3)
    printf("%d %d %d %d", n4, n2, n1, n3);
  else if (n4 < n2 && n2 < n3 && n3 < n1)
    printf("%d %d %d %d", n4, n2, n3, n1);
  else if (n4 < n3 && n3 < n2 && n2 < n1)
    printf("%d %d %d %d", n4, n3, n2, n1);
  else if (n4 < n3 && n3 < n1 && n1 < n2)
    printf("%d %d %d %d", n4, n3, n1, n2);
} 

// Exercicio 4
int main()
{
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if ((((b - c) * -1) < a)&& (a< b + c)){
    if ((((c - a) * -1) < b)&& (b< c + a)){
      if ((((a - b) * -1) < c)&&(c < a + b)){
        printf("S");
      }
      else{
        printf("N");
      }
    }else{
      printf("N");
    }
  }else{
    printf("N");
  }

  return 0;
} 

// Exercicio 5
int main()
{
  int num1, num2, num3, num4;

  scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

  if ((num2 + num3 > num1) && (num3 + num1 > num2) && (num1 + num2 >num3))
  {
    printf("S");
  }
  else if ((num3 + num4 >num2) && (num4 + num2 >num3) && (num2 + num3 >4))
  {
    printf("S");
  }
  else if ((num4 + num1 >num3) && (num1 + num3 >num4) && (num3 + num4 >num1))
  {
    printf("S");
  }
  else if ((num1 + num2 >num4) && (num2 + num4 >num1) && (num4 + num1 >num2))
  {
    printf("S");
  }
  else
  {
    printf("N");
  }

  return 0;
}

// Exercicio 6
int main()
{
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  for (int i = 1; i < c; i++)
  {
    if (((i * a) >= b) && ((i * a) <= c))
    {
      printf("%d ", i * a);
    }
  }

  return 0;
} 

// Exercicio 7
int main()
{
  int n=0, num, ant = 0, prox = 1;

  scanf("%d", &num);

  for (int i = 0; i <= n-1; i++) {
    n = prox+ant;
    ant=prox;
    prox = n;
  }
    printf("%d\n", ant);

  return 0;
} 

// Exercicio 8
int main(){
  int num, temp=0, prox=0, final=0;

  scanf("%d", &num);

  while ((num/10)>0){
    temp = num % 10;
    num = num / 10;
    prox = prox * 10 + temp;
    final = prox * 10 + num;
  }
  printf("%d", final);

  return 0;
} 

// Exercicio 9
int main()
{
  int a, b, temp;

  scanf("%d%d", &a, &b);

  if (a < b)
  {
    for (int i = 1; i < a; i++)
    {
      if((a%i==0)&&(b%i==0)){
        temp = i;
      }
    }
  }
  else
  {
    for (int i = 1; i < b; i++)
    {
      if ((a % i == 0) && (b % i == 0))
      {
        temp = i;
      }
    }
  }

  printf("MDC = %d", temp);

  return 0;
} 