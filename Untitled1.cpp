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
	int i, soma;
	float nota, media;
	
cabecalho();
for(i=1;i<=2;i++){
	
	do{

	printf("Digite a %i� Nota: ",i);
	scanf("%f",&nota);
}
	while(nota<0||nota>10);

		soma=soma+nota;}
		
		
	if (media>=7){
	printf("\nAprovado!");
}	else if (media>=5){
	printf("\nRecupera��o");
}	else{printf("\nReprovado");
}	
	media=soma/2;
	printf("\nM�dia: %.1f \n",media);
	
return 0;
}


