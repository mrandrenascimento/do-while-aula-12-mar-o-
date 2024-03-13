	#include <stdio.h>
#include <stdlib.h>
#include  <locale.h>
void cabecalho(){
	setlocale(LC_ALL,"");
	system("cls\\clear");
	printf("\n\tSENAI DENDEZEIRO\n");
	fflush(stdin);
}
int main(){
	float nota, media,soma;
	char continua;
	int contador,i;
	
	for (i=1;i<=3;i++){
		printf("Digite a %iª Nota: ",i);
		scanf("%f",&nota);
		
	}	
	do{
				
		contador=contador+1;
		printf("\tTecla 's' se deseja continuar\n");
		scanf("%c",&continua);
		setbuf(stdin,0);
		soma+=nota;
	}while((continua=='s')||(continua=='S'));	
	printf("O bloco foi repetido %d vezes",contador);

media=soma/3;
return 0;
}
