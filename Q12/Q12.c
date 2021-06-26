//Assim como os elementos já estudados, as funções também ocupam um determinado local na memória, com os ponteiros é possível acessar esses locais sem chamar as função diretamente. 
//Essa forma de acessar a função tras algumas funcionalidades especiais, como a de passar uma função como argumento para outra função.

#include <stdio.h>

void maior(int a, int b){

	if(a>b){
		printf("%d eh maior que %d", a, b);
	}else{
		printf("%d eh maior que %d", b, a);
	}
}

int main(){
	void (*pontmaior)(int,int) = maior; //tipo de valor que a variável retorna + nome do ponteiro + tipo das variáveis de entrada da função + nome da função
	int a, b;
	printf("Digite 2 numeros e veja qual eh o maior: \n");
	printf("Primeiro numero: \n");
	scanf("%d", &a);
	printf("Segundo numero: \n");
	scanf("%d", &b);

	(*pontmaior)(a,b); //ao recuperar o conteúdo do ponteiro estamos automaticamente apontando para o conteúdo da função pois o ponteiro armazena o endereço de onde a função está localizada
	return 0;

}

