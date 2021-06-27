#include "gc.h"
#include <stdio.h>
#include <stdlib.h>

//c�digo basico de vetores alocados com uso da fun��o gc_malloc
int main(){
    int n;
    float *valores;
    int i, j;
    gc_init(); //inicia o coletor de lixo
    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    valores = gc_malloc(n*sizeof(float)); //aloca��o din�mica de vetor com preenchimento "0".

    for(i=0; i<n; i++){
        printf("\n\nElemento %d: ", i+1);
        scanf("%f", &valores[i]);
    }

    for(i=0; i<n; i++){
        printf("%f ", valores[i]);
    }
    
//n�o � necess�rio fazer libera��o de mem�ria pois a fun��o j� libera a mem�ria automaticamente
    return 0;
}

