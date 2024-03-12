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
	
	float nota;
	cabecalho();
do{

	printf("Digite uma Nota: ");
	scanf("%f",&nota);
}
while(nota<0||nota>10);
printf("Nota Informada: %.1f \n",nota);

return 0;

}

