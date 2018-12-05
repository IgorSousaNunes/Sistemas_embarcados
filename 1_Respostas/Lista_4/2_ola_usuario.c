#include<stdio.h>
#include<string.h>

void main (){
	FILE *arquivo;
	char nome[30];
	char arq[34];
	int idade;
	
	printf("Digite o seu nome: ");
	scanf("%s",nome);
	printf("Digite a sua idade: ");
	scanf("%d",&idade);
	strcpy(arq,nome);
	strcat(arq,".txt");

	arquivo = fopen(arq,"w");
	fprintf(arquivo,"Nome: %s\n",nome);
	fprintf(arquivo,"Idade: %d\n",idade);
	fclose(arquivo);
}
