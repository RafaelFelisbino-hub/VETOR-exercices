/*Elaborar um algoritmo que leia a idade de 10 pessoas e informa quantas
pessoas tem idade maior que a idade m�dia desta turma.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() 
{
	int idade[10], i, idadeMaior = 0, totalIdade = 0;
	float mediaIdade;

	setlocale(LC_ALL, "Portuguese");

	for (i = 0; i <= 9; i++) 
	{
		printf("Digite as idades:  ");
		scanf_s("%i", &idade[i]);
		totalIdade += idade[i];
	}
	
	mediaIdade = totalIdade / i;
	printf("\nA m�dia de idade da turma �:  %.0f\n", mediaIdade);
	
	for (i = 0; i <= 9; i++) 
	{
		if (idade[i] > mediaIdade)
			printf("\nIdade dos alunos acima da m�dia de idade:  %i", idade[i]);
	}

	printf("\n\n");
	system("pause");
}