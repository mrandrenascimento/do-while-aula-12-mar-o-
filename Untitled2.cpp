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
	float nota, media,soma;
	char n, s, continua;
	int contador,i;
	cabecalho();
	for (i=1;i<=3;i++){
		printf("Digite a %i� Nota: ",i);
		scanf("%f",&nota);
		
	} do{
		contador+=1;
		printf("\nInsira 's' para continuar: ");
		scanf("%c",&s);
		setbuf(stdin,0);
		
		soma+=nota;

	}while (continua==s);

	printf("\nN�mero de contagem %d",contador);
	
	media=soma/3;
	
	printf("\nM�dia: %.1f \n",media);
	
	
return 0;
}

