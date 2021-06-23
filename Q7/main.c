#include <stdio.h>

int main()
{
    int mat[4], *p, x;
    mat[0]=001;
    mat[1]=002;
    mat[2]=003;
    mat[3]=004;
    //p = mat + 1; //válido, p recebe endereço correspondente a posição mat[1];

    //p = mat++; //invalido

    // p = ++mat; //invalido

    x = (*mat)++; //Válida, x recebe conteúdo da posição mat[0] porém não incrementa; 
    
    printf("%d", x);

    return 0;
}
