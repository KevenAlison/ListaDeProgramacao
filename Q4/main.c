#include <stdio.h>

int main() {
  int valor;
  int *p1;
  float temp;
  float *p2;
  char aux;
  char *nome = "Ponteiros";
  char *p3;
  int idade;
  int vetor[3];
  int *p4;
  int *p5;
  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  // Espera-se que seja imprimido "20" pois o ponteiro p1 alterou o conte�do da vari�vel "valor" atravez do endere�o de mem�ria.
  printf("%d \n", valor);

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  //Espera-se que seja imprimido "29.0" pois o ponteiro p2 alterou o conte�do da vari�vel "temp" atravez do endere�o de mem�ria.
  printf("%.1f \n", temp);

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  // Espera-se que seja imprimido "P" pois o ponteiro p3 aponta para o conte�do da vari�vel "nome" na posi��o 0 do vetor, onde est� localizado o primeiro chacacter.
  printf("%c \n", aux);

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  //Espera-se que seja imprimido "e" pois o ponteiro p3 aponta para o conte�do da vari�vel "nome" na posi��o 4 do vetor, onde est� localizado o quinto chacacter.
  printf("%c \n", aux);

  /* (e) */
  p3 = nome;
  //Como n�o foi definido uma posi��o do vetor, o ponteiro recebe o endere�o da primeira posi��o da vari�vel, nome[0] ou seja, "p".
  printf("%c \n", *p3);

  /* (f) */
  p3 = p3 +4;
  //Ao somar o ponteiro deslocamos 4 casas no endere�o de mem�ria, correspondente a nome[4], na vari�vel, que armazena o caracter "e".
  printf("%c \n", *p3);

  /* (g) */
  p3--;
  //Ao decrementar o ponteiro deslocamos 1 casa para tras no endere�o de mem�ria, correspondente a nome[3], na vari�vel, que armazena o caracter "t".
  printf("%c \n", *p3);

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  //Como n�o foi definido um endere�o espec�fico, o ponteiro recebe o primeiro endere�o da vari�vel, a vari�vel "idade" recebe o conte�do da primeira posi��o do vetor, correspondente a vetor[0], ou seja, "31".
  printf("%d \n", idade);

  /* (i) */
  p5 = p4 +1;
  idade = *p5;
  //O ponteiro p5 recebe o endere�o de p4 incrementado, apontando assim para o vetor[1], a vari�vel "idade" recebe o conte�do armazenado no ponteiro, ou seja, "45".
  printf("%d \n", idade);

  /* (j) */
  p4 = p5 +1;
  idade = *p4;
  //O ponteiro p4 recebe o endere�o de p5 incrementado, apontando assim para o vetor[2], a vari�vel "idade" recebe o conte�do armazenado no ponteiro, ou seja, "27".
  printf("%d \n", idade);

  /* (l) */
  p4 = p4 -2;
  idade = *p4;
  //O ponteiro p4 recebe o endere�o dele mesmo com um decremento de 2, apontando assim para o vetor[0], a vari�vel "idade" recebe o conte�do armazenado no ponteiro, ou seja, "31".
  printf("%d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;
  //O ponteiro p5 recebe o endere�o dE VETOR na posi��o dois e decrementa uma unidade, resultando em vetor[1], como o printf imprime o conte�do de p5 temos ent�o "45";
  printf("%d \n", *p5);

  /* (n) */
  p5++;
  //O ponteiro p5 � incrementado, apontando assim para o vetor[2], como o printf imprime o conte�do de p5 temos ent�o "27";
  printf("%d \n", *p5);
  return(0);
}
