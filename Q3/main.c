#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=2, j=3, *p, *q;

p = i; //Ilegal , O código roda mas o ponteiro tem que armazenar o endereço, o correto seria p = &i
q = &j; // Legal, q armazena endereço de j
p = &*&i; // Legal, P armazena endereço de i
i = (*&)j; // Ilegal, os caracteres não estão atribuidos à variàvel 
i = *&j; // legal, i recebe o conteúdo armazenado no endereço de j;
i = *&*&j; //Legal, mesmo caso que o de cima
q = *p; //Ilegal, não há conteúdo no ponteiro pois ele não está apontando para um endereço de memória
i = (*p)++ + *q; // Ilegais pois os ponteiros não estão apontando para um endereço, logo não armazenam nada


printf("%d", i); //testes

}
