#include <stdio.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador  /  valor  /  valor  /  endereco  /  endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d  ",i); //  imprime os valores de i, que variam conforme o for � incrementado.
  printf("vet[%d] = %.1f  ",i, vet[i]); //Imprime o  conte�do do vetor dependendo do valor de i.
  printf("*(f + %d) = %.1f  ",i, *(f+i)); //Imprime conte�do do vetor a partir do endere�o do ponteiro f, que caminha conforme a vari�vel i � incrementada.
  printf("&vet[%d] = %X  ",i, &vet[i]); //Imprime o endere�o de mem�ria coletado do pr�prio vetor na posi��o i.
  printf("(f + %d) = %X  ",i, f+i); //imprime o endere�o de mem�ria a partir do ponteiro f, que caminha conforme a vari�vel i � incrementada.
  }
}

