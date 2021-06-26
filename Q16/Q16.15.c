#include <stdio.h>
#include <stdlib.h>
#include <time.h> //biblioteca do timer

float comparacao(float *a, float *b){ 
	return *a - *b;
}

void FuncOrden(int n, float *valores, float(*comp)(float*,float*)){ //função recebe numero de elementos e os vetores sem retornar nada, apenas alterando o conteúdo do vetor
    int i, j, menor;
    float x;
    for(i=0; i<n; i++){
        menor = i;
    for(j=i+1; j<n; j++){
    		if (comp(&valores[j],&valores[menor])<0)
            menor = j;
    }
    x = valores[menor];
    valores[menor] = valores[i];
    valores[i] = x;
    }
}

int main(){
	float *valores;
	int i,n;
	
	clock_t t; //variável para armazenar tempo
	printf("Informe a quantidade de elementos: ");
	scanf("%d", &n);
	
	valores = malloc(n*sizeof(float));
	float (*ponteiro)(float*,float*) = comparacao;
	for(i=0; i<n; i++){
		printf("\n\nElemento %d: ", i+1);
		scanf("%f", &valores[i]);
	}
	t = clock();
	FuncOrden(n, valores,ponteiro); 
	
	for(i=0; i<n; i++){
		printf("%.1f ", valores[i]);
	}

	free(valores); //liberar memoria alocada
	t = clock() - t; //tempo final - tempo inicial
	printf("\n\n Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000))); //conversão para double
	return 0;
}
