#include "fila.h"

int main(){
	Fila* minhafilinha;
	
	minhafilinha = IniciaFila();
	
	InsereFila(minhafilinha, 'a');
	InsereFila(minhafilinha, 'b');
	InsereFila(minhafilinha, 'c');
	InsereFila(minhafilinha, 'd');
	InsereFila(minhafilinha, 'e');
	InsereFila(minhafilinha, 'f');
	InsereFila(minhafilinha, 'g');
	InsereFila(minhafilinha, 'h');
	InsereFila(minhafilinha, 'i');
	
	ImprimeFila(minhafilinha);
	InsereFila(minhafilinha, 'a');
	ImprimeFila(minhafilinha);
	
	RetiraFila(minhafilinha);
	ImprimeFila(minhafilinha);

	InsereFila(minhafilinha, 'a');
	ImprimeFila(minhafilinha);
	
	LiberaFila(minhafilinha);
}
