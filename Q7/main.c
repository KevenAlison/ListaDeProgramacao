#include <stdio.h>

int main()
{
    int mat[4], *p, x;
    mat[0]=001;
    mat[1]=002;
    mat[2]=003;
    mat[3]=004;
    //p = mat + 1; //v�lido, p recebe endere�o correspondente a posi��o mat[1];

    //p = mat++; //invalido

    // p = ++mat; //invalido

    x = (*mat)++; //V�lida, x recebe conte�do da posi��o mat[0] por�m n�o incrementa; 
    
    printf("%d", x);

    return 0;
}
