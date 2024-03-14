#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Bibliotecas
#include<string.h>
void cabecalho(){
	
	setlocale(LC_ALL, "");
	system("cls\\clear");
	printf("\n=== SENAI DENDEZEIRO ===\n");
	fflush(stdin);
}
int main(){
	int valor,somaGeral=0, contadorGeral=0,somaPares=0 pares=0,impares;
	float mediaPares, mediaGeral;
	
	printf("Digite um Número");
	scanf("%i",&valor);
	
	while(valor!=0){
		if(valor>0){
			contadorGeral++;
			somaGeral+=valor;
			
			if(valor % 2==0){
				pares++;
				
				somaPares+=valor;
				
			}else{
				impares++;
			}
		}
		printf("Digite um Número: ");
		scanf("%i",&valor);
	}
	
		if(contadorGeral==0){
			printf("Não foi informado um numero positivo");
		}else{
			//cast
			mediaGeral=somaGeral/(float)contadorGeral;
			mediaPares=somaPares/(float)pares;
			
			printf("")]
}

}
return 0;	
}
