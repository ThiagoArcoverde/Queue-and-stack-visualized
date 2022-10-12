#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int op;
Pilha *pilha;
Fila *fila;

int main(){
	pilha = NULL;
	fila = NULL;
	op = 1;
	while(op != 0){
		system("cls");
		printf("Queue: ");
		fila_mostrar(fila);
		printf("Stack: ");
		pilha_mostrar(pilha);
		menu_mostrar();
		scanf("%d", &op);
		switch(op){
			case 1:
				pilha = pilha_entrar(pilha);
				break;
			case 2:
				fila_entrar(&fila);
				break;
			case 3:
				pilha = pilha_sair(pilha);
				break;
			case 4:
				fila = fila_sair(&fila);
				break;
		}
	}
	return(0);
}