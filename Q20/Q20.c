#include "gc.h"
#include <stdio.h>
#include <stdlib.h>

//c�digo basico de vetores alocados com uso da fun��o gc_malloc
int main(){
    int n;
    float *valores;
    int i, j;
    clock_t t1;
    clock_t t2;
    gc_init(); //inicia o coletor de lixo
    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    
	
	t1 = clock();
	valores1 = malloc(n*sizeof(float)); //aloca��o din�mica de vetor.
    for(i=0; i<n; i++){
        printf("\n\nElemento %d: ", i+1);
        scanf("%f", &valores1[i]);
    }

    for(i=0; i<n; i++){
        printf("%f ", valores1[i]);
    }
    free(valores1);
    t1 = clock() - t1;
    
    t2 = clock();
	valores2 = gc_malloc(n*sizeof(float)); //aloca��o din�mica de vetor com preenchimento "0".
    for(i=0; i<n; i++){
        printf("\n\nElemento %d: ", i+1);
        scanf("%f", &valores1[i]);
    }

    for(i=0; i<n; i++){
        printf("%f ", valores2[i]);
    }
    t2 = clock() - t2;
    
    printf("\n\n Tempo de execucao: %lf", ((double)t1)/((CLOCKS_PER_SEC/1000)));
    printf("\n\n Tempo de execucao: %lf", ((double)t2)/((CLOCKS_PER_SEC/1000)));
    
    
    
//n�o � necess�rio fazer libera��o de mem�ria pois a fun��o j� libera a mem�ria automaticamente
    return 0;
}

