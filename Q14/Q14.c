#include <stdio.h>
#include <stdlib.h>

int crescente(const void *a, const void *b){ //função recebe 2 elementos de qualquer tipo e retorna um inteiro
	return(*(int*)a - *(int*)b);
	//a função qsort faz a subtração dos elementos para identificar se é maior, menor ou igual e ordena a função com base nos valores que a função retorna
}

int main(){
	float *valores;
	int i,n;
	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);
	
	valores = malloc(n*sizeof(float)); //alocação do vetor na memória


	for(i=0; i<n; i++){
		printf("\n\nElemento %d: ", i+1);
		scanf("%f", &valores[i]); //programa recebe os valores do vetor
	}
	
	qsort (valores, n, sizeof(float), crescente); //passagem dos parametros para a função qsort
	
	//imprimir o vetor com 1 casa decimal
	for(i=0; i<n; i++){
		printf("%.1f ", valores[i]);
	}

	free(valores); //liberar memoria alocada
	return 0;
}
