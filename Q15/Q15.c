#include <stdio.h>
#include <stdlib.h>

int comparacao(const void *a, const void *b){
	return(*(int*)a - *(int*)b);
}

int main(){
	float *valores;
	int i,n;
	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);
	
	valores = malloc(n*sizeof(float));
	int (*ponteiro)(const void*,const void*) = comparacao;
	for(i=0; i<n; i++){
		printf("\n\nElemento %d: ", i+1);
		scanf("%f", &valores[i]);
	}
	
	qsort (valores, n, sizeof(float), *ponteiro);
	
	for(i=0; i<n; i++){
		printf("%.1f ", valores[i]);
	}

	free(valores);
	return 0;
}
