#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
}
// O primeiro c�digo imprime o conte�do armazenado nas tr�s primeiras posi��es do vetor vet. vet[0] == 4 , vet[1] == 9 , vet[2] == 3.

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}
//O segundo c�digo imprime o endere�o de mem�ria das posi��es do vetor, vet[0], vet[1] e vet[2], que correspondem aos endere�os de mem�ria 61FE10, 61FE14, 61FE18, respectivamente.
// � poss�vel perceber que os ultimos elementos do endere�o de mem�ria incrementam 4 em cada posi��o, isso se d� por estarmos manipulando um vetor do tipo int, que possui 4 bytes.
