#include <stdio.h>
#include <stdlib.h>

// Exercicio 1


// Exercicio 2


// Exercicio 3
int main(){
  int a, b;
  int *ptr;

  a=5;
  b = 3;
  ptr=&a;
  *ptr = 10;
  ptr = &b;
  *ptr = *ptr + 4;

  printf("a) %d\n", *ptr);
  printf("b) %d\n", b);
  printf("c) %d\n", a);
}

// Exercicio 4
int main(void)
{
  int x = 5;
  int *ptr;

  ptr = &x;

  printf("a) %d\n", *ptr);
  printf("b) %d\n", ptr);
  printf("c) %d\n", &ptr);
  printf("d) %d\n", &*ptr);
  printf("e) %d\n", **&ptr);

  return 0;
}