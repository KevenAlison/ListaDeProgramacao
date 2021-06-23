#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=2, j=3, *p, *q;

p = i; //Ilegal , O c�digo roda mas o ponteiro tem que armazenar o endere�o, o correto seria p = &i
q = &j; // Legal, q armazena endere�o de j
p = &*&i; // Legal, P armazena endere�o de i
i = (*&)j; // Ilegal, os caracteres n�o est�o atribuidos � vari�vel 
i = *&j; // legal, i recebe o conte�do armazenado no endere�o de j;
i = *&*&j; //Legal, mesmo caso que o de cima
q = *p; //Ilegal, n�o h� conte�do no ponteiro pois ele n�o est� apontando para um endere�o de mem�ria
i = (*p)++ + *q; // Ilegais pois os ponteiros n�o est�o apontando para um endere�o, logo n�o armazenam nada


printf("%d", i); //testes

}
