#include<stdio.h>

void main (){
	FILE *arquivo;
	
	arquivo = fopen("ola_mundo.txt","w");
	fprintf(arquivo,"Ola mundo!");
	fclose(arquivo);
}
