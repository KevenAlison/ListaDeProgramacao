#include <stdio.h>

int main()
{
    int *pulo[5], p1,p2,p3,p4,i;
    for(i = 0 ; i <= 4 ; i++){
        *(pulo+i)=i;
    }
    p1= *(pulo + 2); //p1 recebe o conteúdo localizado na posição 2 do vetor, pulo[2], que coresponde ao 3 elemento.
    p2= *(pulo + 4);
    p3= pulo + 4;
    p4= pulo + 2;

    printf("%d, %d, %d, %d", p1,p2,p3,p4);
    return 0;
}
