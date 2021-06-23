#include <stdio.h>

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%d ",*(vet+i));
  }
}
// O primeiro código imprime o conteúdo armazenado nas três primeiras posições do vetor vet. vet[0] == 4 , vet[1] == 9 , vet[2] == 3.

int main(){
  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);
  }
}
//O segundo código imprime o endereço de memória das posições do vetor, vet[0], vet[1] e vet[2], que correspondem aos endereços de memória 61FE10, 61FE14, 61FE18, respectivamente.
// É possível perceber que os ultimos elementos do endereço de memória incrementam 4 em cada posição, isso se dá por estarmos manipulando um vetor do tipo int, que possui 4 bytes.
