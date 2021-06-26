#include <stdio.h>
#include <stdlib.h>

void somavetorial(int n, int v1[],int v2[],int vsoma[]){
	int i;
	for(i=0; i<n; i++){
		vsoma[i]=v1[i]+v2[i];
	}
}

int main(){
	int *valores1, *valores2, *Svalores, i,n;
	void (*pontsoma)(int,int*, int*, int*) = somavetorial;
	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);
	
	valores1 = malloc(n*sizeof(int));
	valores2 = malloc(n*sizeof(int));
	Svalores = malloc(n*sizeof(int));
	
	printf("Vetor 1: ");
	for(i=0; i<n; i++){
		printf("\n\nElemento %d: ", i+1);
		scanf("%d", &valores1[i]);
	}
	printf("\n\n Vetor2: ");
	for(i=0; i<n; i++){
		printf("\n\nElemento %d: ", i+1);
		scanf("%d", &valores2[i]);
	}
	
	
	(*pontsoma)(n, valores1, valores2,Svalores);
	
	for(i=0; i<n; i++){
		printf("%d ", Svalores[i]);
	}
	
	free(Svalores);
	free(valores1);
	free(valores2);
	
	return 0;
}
