#include <stdio.h>

int main()
{
    char x1[4], *p1;
    p1 = x1;
    printf("%d\n",p1); //6422012
    printf("%d\n",++p1); //6422013
    printf("%d\n",++p1); //6422014
    printf("%d\n",++p1); //6422015
	//Como esperado cada incremento desloca o endereço em 1 byte.
    printf("\n\n");

    int x2[4], *p2;
    p2 = x2;
    printf("%d\n",p2); //6421984
    printf("%d\n",++p2); // 6421988
    printf("%d\n",++p2); // 6421992
    printf("%d\n",++p2); //6421996
	//Diferente do proposto na questão anterior cada incremento deslocou o endereço em 4 bytes, não 2.
     printf("\n\n");

    float x3[4], *p3;
    p3 = x3;
    printf("%d\n",p3); //6421968
    printf("%d\n",++p3); //6421972
    printf("%d\n",++p3); //6421976
    printf("%d\n",++p3); //6421980
	//Como esperado cada incremento desloca o endereço em 4 bytes.
     printf("\n\n");

    double x4[4], *p4;
    p4 = x4;
    printf("%d\n",p4); //6421936
    printf("%d\n",++p4); //6421944
    printf("%d\n",++p4); //6421952
    printf("%d\n",++p4); //6421960
    //Como esperado cada incremento desloca o endereço em 8 bytes.
    return 0;
}
