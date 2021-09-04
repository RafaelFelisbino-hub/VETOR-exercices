#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeroDependentes, i, j, contIdade = 0;

    for(i = 0; i < 3; i++){
        contIdade = 0;
        printf("Numero de dependentes: ");
        scanf("%i",&numeroDependentes);

        int *arr = malloc(sizeof(int) * numeroDependentes);

        for(j = 0; j < numeroDependentes; j++){
            printf("Idade do %i dependente: ",j+1);
            scanf("%i",&arr[j]);

            if(arr[j] < 18)
                contIdade++;
            else
                printf("Dependente maior de 18\n");
        }
        printf("Valor total do auxilio para o %i funcionario = %i\n", i+1, 60 * contIdade);
        printf("\n");
    }
    return 0;
}
