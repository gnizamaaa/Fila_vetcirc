#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

struct fila
{
	int ini;
	int qtd;
	char vetor[9];
};

Fila *IniciaFila()
{
	Fila *saida = (Fila *)malloc(sizeof(Fila));
	saida->ini = 0;
	saida->qtd = 0;
	return saida;
}
void InsereFila(Fila *enfilados, char i)
{

	// Fila cheia
	if (enfilados->qtd >= 9)
	{
		printf("Fila cheia\n");
		return;
	}

	// Caso comum
	enfilados->vetor[(enfilados->ini + enfilados->qtd) % 9] = i;
	enfilados->qtd++;
}
char RetiraFila(Fila *enfilados)
{
	// Lista vazia
	if (enfilados->qtd < 1)
	{
		printf("N imprime lista vazia");
		return;
	}

	char aux;
	enfilados->ini = (enfilados->ini + 1) % 9;
	aux = enfilados->vetor[enfilados->ini];
	enfilados->qtd--;
	return enfilados->vetor[enfilados->qtd];
}

void ImprimeFila(Fila *entrada)
{
	int i = 0;

	for (i = 0; i < entrada->qtd; i++)
	{
		printf("%c\n", entrada->vetor[(entrada->ini + i) % 9]);
	}
}

void LiberaFila(Fila *entrada)
{
	free(entrada);
}
