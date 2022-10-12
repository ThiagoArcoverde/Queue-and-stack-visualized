#ifndef FUNCOES_H
#define FUNCOES_H

#include <stdio.h>
#include <stdlib.h>
#define tamanho 5

typedef struct fila{
	int dados;
	int ini;
	int fim;
	struct fila *proximo;
}Fila;

typedef struct pilha{
	int dados;
	int ini;
	int fim;
	struct pilha *proximo;
}Pilha;

void fila_entrar(Fila **f);
Fila *fila_sair(Fila **f);
void fila_mostrar(Fila *f);

Pilha *pilha_entrar(Pilha *p);
Pilha *pilha_sair(Pilha *p);
void pilha_mostrar(Pilha *p);

void menu_mostrar();

#endif