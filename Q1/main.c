#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    int q1,q2,q3;
    float q4;
    p = &i;
    q = &j;

    q1 = (p==&i);
    q2 = *p - *q;
    q3 = **&p;
    q4 = 3 - *p/(*q) + 7;

    printf("%d", q1); // retorna 1 "verdadiro" pois p recbeu o endereço de i
    printf("\n%d", q2); // conteúdo em P menos o conteúdo em Q = 3 - 5 = -2
    printf("\n%d", q3); // conteúdo localizado no endeereeço de P = 3;
    printf("\n%f", q4); // 3 - (conteúdo de p)/(conteúdo de q) + 7 =
    // como são inteiros 3/5 = 0, logo: 3-0+7 = 10

}
