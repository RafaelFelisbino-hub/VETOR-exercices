/*Criar um algoritmo que defina um vetor para conter 10 nomes de
candidatos e imprima os nomes das que estão nas posições impares.*/

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

int main()
{
	char nome[150][300], nomeImpar[300];
	int i, impar = 0;

	for (i = 0; i < 10; i++) 
	{
		printf("Digite os nomes:  ");
		scanf_s("%[^\n]s", &nome[i], 300);
		getchar();
	}
	for (i = 0; i < 10; i++) 
	{
		if (i % 2 == 1)
		{
			nomeImpar[150] = strcpy_s(nomeImpar, 150, nome[i]);

			printf("Os nomes dos numeros impares sao>  %s\n", nomeImpar);
		}
	}
	system("pause");
}
