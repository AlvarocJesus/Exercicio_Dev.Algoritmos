#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a, n;

	srand(time(0));

	a = 1 + (rand() % 100);

	do
	{
		scanf("%d", &n);

		if (n<a)
		{
			printf("Numero pequeno\n");
		}
		else if (n>a)
		{
			printf("Numero grande\n");
		}
	} while (a != n);
	
	printf("Acertou!!\n");
	
	return 0;
}
