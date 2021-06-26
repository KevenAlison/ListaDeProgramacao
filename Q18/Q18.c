#include <stdio.h>
#include <stdlib.h>

void multmatriz(int LA, int CA, int CB, int **MA, int **MB, int **MC){
	int i, j, k;
        for(i = 0; i < LA; i++){
            for(j = 0; j < CB; j++){
                for(k = 0; k < CA; k++){
                    MC[i][j] = MC[i][j] + (MA[i][k] * MB[k][j]);
                }
            }
        }
	        
}

void imprimirmatriz(int linha, int coluna, int **matriz){
	int i,j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}	        
}

int main(){
	int **MA, **MB, **MC;
	int i, j,LA,CA,CB;
	
	void (*pontmultm)(int, int , int,int**, int**, int**) = multmatriz;
	void (*printm)(int, int,int**) = imprimirmatriz;
	
	printf("Informe a quantidade Linhas de A: ");
	scanf("%d", &LA);
	printf("Informe a quantidade Colunas de A e Linhas de B: ");
	scanf("%d", &CA);
	printf("Informe a quantidade Colunas de B: ");
	scanf("%d", &CB);
	
	MA = malloc(LA*sizeof(int*));
	MA[0] = malloc(CA*LA*sizeof(int));
	for(i=1; i<LA;i++){
		MA[i] = MA[i-1]+CA;
	}
	MB = malloc(CA*sizeof(int));
	MB[0] = malloc(CA*CB*sizeof(int));
	for(i=1; i<CA;i++){
		MB[i] = MB[i-1]+CB;
	}
	MC = malloc(LA*sizeof(int));
	MB[0] = malloc(LA*CB*sizeof(int));
	for(i=1; i<LA;i++){
		MC[i] = MC[i-1]+CB;
	}
	
	printf("Matriz A: ");
	for(i=0; i<LA; i++){
		for(j=0; j<CA; j++){

			scanf("%d", &MA[i][j]);
		}
	}
	printf("\n\nMatriz B: ");
	for(i=0; i<CA; i++){
		for(j=0; j<CB; j++){

			scanf("%d", &MB[i][j]);
		}
	}
	
	for(i=0; i<LA; i++){
		for(j=0; j<CB; j++){
			MC[i][j] = 0;
		}
	}
	
	
	(*pontmultm)(LA,CA, CB, MA, MB, MC);
	printf("\n\n");
	(*printm)(LA,CA,MA);
	printf(" * \n");
	(*printm)(CA,CB,MB);
	printf(" = \n");
	(*printm)(LA,CB,MC);
	
	free(MA);
	free(MB);
	free(MC);
	
	return 0;
}
