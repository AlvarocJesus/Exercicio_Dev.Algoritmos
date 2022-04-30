#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Exercicio 1
int main()
{
	FILE *fr = fopen("maiorR.txt", "r");

	int i, ind = 0;
	float maior = 0, num1;
	int total = sizeof(float) * sizeof(fr);

	for (i = 0; i < sizeof(float) * sizeof(fr); i++)
	{
		fscanf(fr, "%f", &num1);
		if (maior < num1)
		{
			maior = num1;
			ind = i;
		}
	}

	printf("Maior: %.4f na posicao %d\n", maior, ind + 1);
	printf("Total de Elementos: %d\n", total);
}

// Exercicio 2
int main()
{
	FILE *fr = fopen("quadradoR.txt", "r");

	float x[20] = {}, y[20] = {}, num1;
	int d1 = 0, d2 = 0, i;

	for (i = 0; i < 20; i++)
	{
		fscanf(fr, "%f", &num1);

		if (i % 2 == 0)
		{
			x[d1] = num1;
			d1++;
		}
		else if (i % 2 != 0)
		{
			y[d2] = num1;
			d2++;
		}
	}
	fclose(fr);
	for (i = 0; i < 8; i++)
	{
		float soma = pow(x[i], 2) + pow(y[i], 2);
		printf("%.4f %.4f %.4f\n", x[i], y[i], soma);
	}
}

// Exercicio 3
int main()
{
	FILE *fr = fopen("notasR.txt", "r");

	float nota;
	char nome[100] = {};

	for (int i = 0; i < 20; i++)
	{
		fscanf(fr, "%s %f", nome, &nota);
		if (nota >= 5)
		{
			printf("%s %.1f\n", nome, nota);
		}
	}
	fclose(fr);
}

// Exercicio 4
int main()
{
	FILE *fr = fopen("prodMistoR.txt", "r");

	float x[3] = {}, y[3] = {}, z[3] = {}, valor = 0, num1;
	int d1 = 0, d2 = 0, d3 = 0;

	for (int i = 0; i < 9; i++)
	{
		fscanf(fr, "%f", &num1);

		if (i >= 0 && i < 3)
		{
			x[d1] = num1;
			d1++;
		}
		else if (i >= 3 && i < 6)
		{
			y[d2] = num1;
			d2++;
		}
		else if (i >= 6 && i < 9)
		{
			z[d3] = num1;
			d3++;
		}
	}

	fclose(fr);

	valor = x[0] * ((y[1] * z[2]) - (z[1] * y[2])) + y[0] * ((z[1] * x[2]) - (z[2] * x[1])) + z[0] * ((x[1] * y[2]) - (y[1] * x[2]));

	printf("x = (%.4f, %.4f, %.4f)\n", x[0], y[0], z[0]);
	printf("y = (%.4f, %.4f, %.4f)\n", x[1], y[1], z[1]);
	printf("z = (%.4f, %.4f, %.4f)\n", x[2], y[2], z[2]);
	printf("Volume: %.4f\n", valor);
}

// Exercicio 5
int main()
{
	FILE *fr = fopen("empresaR.txt", "r");

	char name[100] = {}, gender;
	int age;
	int total_25 = 0, total = (sizeof(char) + sizeof(char)) + sizeof(fr), total_f = 0;

	printf("Total de funcionarios: %d\n", total);

	printf("\n");

	for (int i = 0; i < total; i++)
	{
		fscanf(fr, "%s %c %d", name, &gender, &age);

		if (age >= 25)
		{
			printf("Nome do funcionario +25: %s idade: %d\n", name, age);
			total_25++;
		}

		if (gender == 'f')
		{
			total_f++;
		}
	}

	fclose(fr);

	printf("\n");

	printf("Total de funcionarios +25: %d\n", total_25);

	printf("\n");

	printf("Total de funcionarias: %d", total_f);
}