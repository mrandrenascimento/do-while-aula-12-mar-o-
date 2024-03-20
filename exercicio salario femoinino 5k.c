#include<stdio.h>
#include<stldlib.h>
#include<locale.h>
#include<ctype.h>

int main(){
serlocale(LC_ALL,"");
int idade, opcao,maiorIdade=0,menorIdade=999;
int quantidadeSalario=0, mulher5k=0;
char sexo;
float salario,somaSalario=0, mediaSalario;

do{
	printf("Código \t Descrição \n") ;
	printf("1 \t Adicionar Pessoa \n");
	printf("2t\ Exibir Resultado e Sair \n");
	printf("Digite a Opção desejada: ");
	scanf("%i",&opcao);
	
	switch (opcao){
		case 1:
			printf("Digite sua idade: ");
			scanf("%i",&idade);
			fflush(stdin);
			printf("Digite o sexo-F ou S:");
			scanf("%c",&sexo);
			printf("Digte o salario: ");
			scanf("%f",&salario);
			
			sexo =touper(sexo);
			if(idade >maiorIdade){
				
				maiorIdade=idade;
			}if(idade<menorIdade){
				menorIdade=idade;
			}quantidadeSalario++;
			somaSalario+=salario;
			if(sexo=='F'&&salario>=5000){
				mulher5k++;
			}break;
			case 2:
			mediaSalario=somaSalario/quantidadeSalario;
			printf("Média salario do grupo: R$ %.2f\n",media);
				
	}
}
	
return 0;	
}

