#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador  /  valor  /  valor  /  endereco  /  endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d  ",i); //  imprime os valores de i, que variam conforme o for é incrementado.
  printf("vet[%d] = %.1f  ",i, vet[i]); //Imprime o  conteúdo do vetor dependendo do valor de i.
  printf("*(f + %d) = %.1f  ",i, *(f+i)); //Imprime conteúdo do vetor a partir do endereço do ponteiro f, que caminha conforme a variável i é incrementada.
  printf("&vet[%d] = %X  ",i, &vet[i]); //Imprime o endereço de memória coletado do próprio vetor na posição i.
  printf("(f + %d) = %X  ",i, f+i); //imprime o endereço de memória a partir do ponteiro f, que caminha conforme a variável i é incrementada.
  }
}

