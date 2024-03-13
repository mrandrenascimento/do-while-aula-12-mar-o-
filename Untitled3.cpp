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
	int contador=0;
	char continua; //nao precisamos inicializar a variavel 'continua' pois o testa é
	cabecalho();
	do{
		//comando a serem repetidos.
		
		printf("\tRepetindo...\n");
		
		contador=contador+1;
		printf("\tTecla 's' se deseja continuar\n");
		scanf("%c",&continua);
		setbuf(stdin,0);
	}while((continua=='s')||(continua=='S'));	//ou||
	printf("O bloco foi repetido %d vezes",contador);
return 0;	
}


