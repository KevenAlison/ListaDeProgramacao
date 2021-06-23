#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value; //Válido, vetor aloha recebe 2.2 na posição 3.
   	scanf("%f", &aloha); //Válido, define o endereço correspondente a primeira posição do vetor Aloha como entrada para dados.
    aloha= "value"; //Inválido pois o vetor é do tipo float;
	printf("%f", aloha); //Inválido pois, embora o programa rode, não estamos imprimindo o conteúdo do vetor
    coisas[4][4] = aloha[3]; //Válido, a posição da patriz vai receber o conteúdo de aloha[3]
    coisas[5] = aloha; // Inválido, precisamos definir a linha e a coluna da matriz para alocar o conteúdo. Também não definimos a posição do vetor aloha.
	pf = value; //Inválido
    pf = aloha; //Válido


}
