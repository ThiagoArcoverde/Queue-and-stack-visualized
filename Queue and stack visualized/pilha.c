#include "funcoes.h"

Pilha *pilha_entrar(Pilha *p){
	Pilha *novo = malloc(sizeof(Pilha));
	int total;
	
	if(novo){
		if(p == NULL){
			printf("\nEnter a new value to be added: ");
			scanf("%d", &novo->dados);
			fflush(stdin);
			novo->fim = 1; 
			novo->proximo = NULL;
			return novo;
		}
		else{
			total = p->fim;
		}
		if(p != NULL && total < 5){      
			total++;
			novo->fim = total;
			printf("\nEnter a new value to be added: ");
			scanf("%d", &novo->dados);
			fflush(stdin);
			novo->proximo = p;
			return novo;
		}
		else{
			printf("\nFull stack.\n");
			system("pause");
			return p;
		}
	}
	else{
		printf("\nError allocating memory...");
		system("pause");
		return NULL;
	}
}


Pilha *pilha_sair(Pilha *p){
	if(p){
		if(p->proximo){
			Pilha *remover = p->proximo;
			return remover;
		}
		else{
			p = NULL;
			return p;
		}
	}
	else{
		printf("\nEmpty stack.\n");
		system("pause");
		return p;
	}
}

void pilha_mostrar(Pilha *p){
	int i;
	printf("[ ");
	while(p){
		printf("\t%d", p->dados);
		p = p->proximo;
	}
	printf("\t ]\n\n");
}

void menu_mostrar(){
	printf("\nChoose a value:\n");
	printf("1 - Stack up\n");
	printf("2 - Add to the queue\n");
	printf("3 - Unstack\n");
	printf("4 - Remove from the queue\n");
	printf("0 - Quit\n\n");
}