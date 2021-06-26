//Assim como os elementos j� estudados, as fun��es tamb�m ocupam um determinado local na mem�ria, com os ponteiros � poss�vel acessar esses locais sem chamar as fun��o diretamente. 
//Essa forma de acessar a fun��o tras algumas funcionalidades especiais, como a de passar uma fun��o como argumento para outra fun��o.

#include <stdio.h>

void maior(int a, int b){

	if(a>b){
		printf("%d eh maior que %d", a, b);
	}else{
		printf("%d eh maior que %d", b, a);
	}
}

int main(){
	void (*pontmaior)(int,int) = maior; //tipo de valor que a vari�vel retorna + nome do ponteiro + tipo das vari�veis de entrada da fun��o + nome da fun��o
	int a, b;
	printf("Digite 2 numeros e veja qual eh o maior: \n");
	printf("Primeiro numero: \n");
	scanf("%d", &a);
	printf("Segundo numero: \n");
	scanf("%d", &b);

	(*pontmaior)(a,b); //ao recuperar o conte�do do ponteiro estamos automaticamente apontando para o conte�do da fun��o pois o ponteiro armazena o endere�o de onde a fun��o est� localizada
	return 0;

}

