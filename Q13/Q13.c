#include <stdio.h>
#include <stdlib.h>

void crescente(int n, float *valores){ //fun��o recebe numero de elementos e os vetores sem retornar nada, apenas alterando o conte�do do vetor
    int i, j, menor;
    float x;
    for(i=0; i<n; i++){
        menor = i;
    for(j=i+1; j<n; j++){
            if (valores[j] < valores[menor])
            menor = j;
    }
    x = valores[menor];
    valores[menor] = valores[i];
    valores[i] = x;
    }
}

int main(){
    int n;
    float *valores;
    int i, j;
    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    valores = malloc(n*sizeof(float)); //aloca��o din�mica das posi��es do vetor

    for(i=0; i<n; i++){
        printf("\n\nElemento %d: ", i+1);
        scanf("%f", &valores[i]);
    }

    void (*ponteiro)(int,float*) = &crescente;
    (*ponteiro)(n,valores);


    for(i=0; i<n; i++){
        printf("%f ", valores[i]);
    }
    
    free(valores);
    return 0;
}

