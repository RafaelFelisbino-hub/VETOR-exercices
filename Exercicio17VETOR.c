/*Considere uma escola técnica com 25 cursos. Construa um algoritmo
que leia o nome do curso e o valor da mensalidade. O algoritmo também
deverá calcular e exibir:
● Qual o curso mais barato da escola.
● Qual é a diferença do valor mensalidade do curso mais barato em
relação à mensalidade média da escola.*/

#include <stdio.h>
#include <stdlib.h>  
#include <string.h>

int main()
{
	char curso[25][150], cursoBarato[20];
	float media;
	int i, mensalidade[25], maisBarato = 9999, somaMensalidade = 0, diferenca = 0;

	for (i = 0; i < 4; i++)
	{
		printf("Digite o nome do curso - %i:  ", i);
		scanf_s("%[^\n]s", &curso[i], 150);
		getchar();

		printf("Digite o valor da mensalidade:  ");
		scanf_s("%i", &mensalidade[i]);
		getchar();
		somaMensalidade += mensalidade[i];
	}

	media = somaMensalidade / i;
	printf("A media das mensalidades e:  %.2f\n", media);

	for (i = 0; i < 4; i++)
	{
		if (mensalidade[i] < maisBarato)
		{
			maisBarato = mensalidade[i];
			cursoBarato[19] = strcpy_s(cursoBarato, 19, curso[i]);
		}
	}
	diferenca = media - maisBarato;
	
	printf("O curso mais barato e:  %s\n", cursoBarato);
	printf("A diferenca de mensalidade entre o mais barato e a mensalidade e:  %i\n", diferenca);

	system("pause");
}