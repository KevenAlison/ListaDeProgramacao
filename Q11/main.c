#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value; //V�lido, vetor aloha recebe 2.2 na posi��o 3.
   	scanf("%f", &aloha); //V�lido, define o endere�o correspondente a primeira posi��o do vetor Aloha como entrada para dados.
    aloha= "value"; //Inv�lido pois o vetor � do tipo float;
	printf("%f", aloha); //Inv�lido pois, embora o programa rode, n�o estamos imprimindo o conte�do do vetor
    coisas[4][4] = aloha[3]; //V�lido, a posi��o da patriz vai receber o conte�do de aloha[3]
    coisas[5] = aloha; // Inv�lido, precisamos definir a linha e a coluna da matriz para alocar o conte�do. Tamb�m n�o definimos a posi��o do vetor aloha.
	pf = value; //Inv�lido
    pf = aloha; //V�lido


}
