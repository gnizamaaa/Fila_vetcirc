#ifndef FILA_H
#define FILA_H
typedef struct fila Fila;

Fila* IniciaFila();
void InsereFila(Fila* enfilados, char i);
char RetiraFila(Fila* enfilados);
void ImprimeFila(Fila* entrada);
void LiberaFila(Fila* entrada);

#endif
