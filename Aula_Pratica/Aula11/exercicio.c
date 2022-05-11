#include <stdio.h>
#include <stdlib.h>

// Exercicio 1
int count=0;
double res = 1;
double pot(double x, int n){
    if(count == n){
        return res;
    }else{
        count ++;
        res *= x;
        return pot(x, n);
    }
}

int main(){
    double x;
    int n=0;

    scanf("%lf", &x);
    scanf("%d", &n);

    if(n<0){
        n = n * -1;
        printf("%.4lf", 1/pot(x, n));
    }else{
        printf("%.4f", pot(x, n));
    }
}

// Exercicio 2-> se alguem conseguir me avisa
int count = 0;
int conjec(int v[],int x, int j, int n)
{
  int p = 0, i;

  if (count == n)
  {
    return 0;
  }
  else
  {
    count++;

    for (i = j; i <= n; i++)
    {
        if (x == v[i])
      {
            p++;
      }
        else
        {
            printf("%d aparece %d vez(es)\n", x, p);
            x = v[i];
            j = i;
            p = 0;
            break;
        }
    }
    return conjec(v, x, j, n);
  }
}

int main()
{
  int n;
  int i, j;

  scanf("%d", &n);

  int v[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
  }

  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (v[j] > v[j + 1])
      {
        int temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
  }
  i=0;
  conjec(v, v[i], i ,n);
}

// Exercicio 3
/* float count = 0;
float res = 0;
float har(float x)
{
  if (count == x)
  {
    return res;
  }
  else
  {
    count++;
    res += 1 / count;
    return har(x);
  }
}

int main()
{
  float x;

  scanf("%f", &x);

  printf("%.4f", har(x));
} */

// Exercicio 4
/* int count=0;
int res = 1;
int hanoi(int x){
    if(count == x){
        return res-1;
    }else{
        count ++;
        res *= 2;
        return hanoi(x);
    }
}

int main(){
    int x;

    printf("Digite o numero de discos:\n");
    scanf("%d", &x);

    printf("Numero de movimentos com %d discos: %d.\n", x, hanoi(x));
} */

// Exercicio 5
/* int count = 0;
int res = 1;
int C(int n){
    if (count == n || n == 1){
        printf("%d ", n);
        return n;
    }else{
        count++;
        printf("%d ", n);

        if (n%2==0){
            n= n / 2;
        }else if(n%2==1){
            n= (3 *n) + 1;
        }

        return C(n);
    }
}

int main(){
    int n;

    scanf("%d", &n);

    C(n);

} */
