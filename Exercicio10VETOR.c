/*Utilizando vetor construa um algoritmo que leia o peso de 10 pessoas.
Calcule e escreva a média dos pesos das 10 pessoas;*/

#include <stdio.h>
#include <stdlib.h> 

int main() 
{
	float vetor[10], media, somaPeso = 0, mediaPessoas = 0;
	int i;

	for (i = 0; i < 10; i++) 
	{
		printf("Digite os pesos:  ");
		scanf_s("%f", &vetor[i]);
		somaPeso += vetor[i];
	}
	
	media = somaPeso / i;
	printf("A media do peso das pessoas e:  %.2f\n", media);

	for (i = 0; i < 10; i++) 
	{
		mediaPessoas = media - vetor[i]; 
		printf("A media da %i pessoa e:  %.2f\n",i, mediaPessoas);
	}

	system("pause");
}