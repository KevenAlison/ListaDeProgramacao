#include "gc.h"
#include <stdio.h>
#include <stdlib.h>

//código basico de vetores alocados com uso da função gc_malloc
int main(){
    int n;
    float *valores;
    int i, j;
    gc_init(); //inicia o coletor de lixo
    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    valores = gc_malloc(n*sizeof(float)); //alocação dinâmica de vetor com preenchimento "0".

    for(i=0; i<n; i++){
        printf("\n\nElemento %d: ", i+1);
        scanf("%f", &valores[i]);
    }

    for(i=0; i<n; i++){
        printf("%f ", valores[i]);
    }
    
//não é necessário fazer liberação de memória pois a função já libera a memória automaticamente
    return 0;
}

