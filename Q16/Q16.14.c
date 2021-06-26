#include <stdio.h>
#include <stdlib.h>
#include <time.h> //biblioteca do timer
int crescente(const void *a, const void *b){
	return(*(int*)a - *(int*)b);
}

int main(){
	float *valores;
	int i,n;
	clock_t t; //vari�vel para armazenar tempo
	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);
	
	valores = malloc(n*sizeof(float)); //aloca��o do vetor na mem�ria


	for(i=0; i<n; i++){
		printf("\n\nElemento %d: ", i+1);
		scanf("%f", &valores[i]); //programa recebe os valores do vetor
	}
	 t = clock(); 
	qsort (valores, n, sizeof(float), crescente); //passagem dos parametros para a fun��o qsort
	
	//imprimir o vetor com 1 casa decimal
	for(i=0; i<n; i++){
		printf("%.1f ", valores[i]);
	}

	free(valores); //liberar memoria alocada
	t = clock() - t; //tempo final - tempo inicial
	printf("\n\n Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000))); //convers�o para double
	return 0;
}
