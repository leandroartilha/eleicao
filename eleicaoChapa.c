#include <stdio.h>
#include <stdlib.h>

#define MAX 5

typedef struct{
	
	char nomeChapa[50];
	char nomeResp[50];
	int numVotos;
	
} Chapa;

Chapa cadastroChapa(){
	
	Chapa ch;
	int i;
	
	printf("\n\nNome da chapa: ");
	gets(ch.nomeChapa);
	printf("Nome do responsavel: ");
	gets(ch.nomeResp);
		
	return ch;
}

void exibirChapa(Chapa c){
	printf("\n\nNome da chapa: %s ", c.nomeChapa);
	printf("\nNome do responsavel: %s ", c.nomeResp);
}

void listarChapa(Chapa list[]){
	int i;
	for(i=0; i<2; i++){
		exibirChapa(list[i]);
	}
}

void main(){
	
	Chapa chapas[2];
	Chapa cad;
	int i;
	int contChapas = -1;
	///////////////////
	int voto[MAX];
	int chapa1 = 0;
	int chapa2 = 0;
	
	for(i=0; i<2; i++){
		cad = cadastroChapa();
		chapas[++contChapas] = cad;
	}
	
	listarChapa(chapas);
	
	printf("\nHora da votacao: \nVote 1 para o primeiro candidado ou 2 para o segundo candidato\n");
	for(i=0; i<MAX; i++){
		printf("\nVoto %d:\t\t", i + 1);
		scanf("%d", &voto[i]);
		if(voto[i] == 1 ){
			chapa1++;	
		}else if(voto[i] == 2){
			chapa2++;
		}
	}
	
	printf("\n\nChapa 1: %d", chapa1);
	printf("\nChapa 2: %d", chapa2);
	
	if(chapa1 > chapa2){
		printf("\n\nChapa 1 eh o vencedor!");
	}else if(chapa2 > chapa1){
		printf("\n\nChapa 2 eh o vencedor!");
	}else{
		printf("\n\nEmpate!");
	}
	
}








