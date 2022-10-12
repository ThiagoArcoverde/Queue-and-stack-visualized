#include "funcoes.h"

void fila_entrar(Fila **f){
	Fila *aux, *novo = malloc(sizeof(Fila));
	int num, total;
	
	if(novo){
		printf("Enter a new value to be added: ");
		scanf("%d", &num);
		fflush(stdin);
		novo->dados = num;
		novo->proximo = NULL;
		
		if(*f == NULL){
			novo->fim = 0;
			*f = novo;
		}
		else{
			aux = *f;
			total = aux->fim;
			if(total <= 5){
				while(aux->proximo && total <= 5){
					total++;
					aux->fim = total;
					aux = aux->proximo;
				}
				if(total <= 5){
					aux->proximo = novo;
				}
				else{
					printf("\nFull queue.\n");
					system("pause");
				}
			}
		}
	}
	else{
		printf("\nError allocating memory...\n");
	}

}

Fila *fila_sair(Fila **f){
	Fila *remover = NULL;
	
	if(*f){
		remover = *f;
		*f = remover->proximo;
	}
	else{
		printf("\nEmpty queue...\n");
		system("pause");
	}
	return *f;
}

void fila_mostrar(Fila *f){
	printf("[ ");
	while(f){
		printf("\t%d", f->dados);
		f = f->proximo;
	}
	printf("\t ]\n\n");	
}