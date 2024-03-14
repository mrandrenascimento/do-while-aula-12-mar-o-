#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void cabecalho(){
	setlocale(LC_ALL,"");
	system("cls\\clear");
	printf("\n\tSENAI DENDEZEIRO\n");
	fflush(stdin);
}
int main(){
	
	int valor, soma=0, contador=0;
	float media;

cabecalho();
	printf("Digite um numero: ");
	scanf("%i",&valor);
	
	while(valor>0){
		contador++;
		soma+=valor;
		printf("Digite um numero: ");
		scanf("%i",&valor);
	}
	if(contador==0){
		printf("Não foi informado um numero positivo.");
	}else{
		media=soma/contador;
		printf("Média: %.1f\n",media);
		
	}return 0;
}
	

