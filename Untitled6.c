#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
void cabecalho(){
	setlocale(LC_ALL,"");
	system("cls\\clear");
	printf("\n\tSENAI DENDEZEIRO\n");
	fflush(stdin);
}
int main(){
	char resultado [200];
	float nota,soma=0,media;
	int i;
	
	cabecalho();
	for(i=1;i<=3;i++){
	
		
	printf("digite a %iª Nota: ",i);
	scanf("%f",&nota);
	
	soma+=nota;
}	cabecalho();
	media=soma/3;
	
	if(media>=7){
		strcpy(resultado,"Aprovado!");
	}else if(media>=5){
		strcpy(resultado,"Recuperação!");
	}else {strcpy(resultado,"Reprovado!");
	}
	printf("Média: %f \n",media);
	printf("Resultado:%s \n",resultado);
	return 0;
}
