#include <stdio.h>

int main(){
	
	int tempo, horas, minutos, segundos;
	
	scanf("%i", &tempo);

	//DIVIDE ENTRADA POR 3600 PARA OBTER HORAS 
	horas = tempo / 3600;
	
	//DEFINE TEMPO COMO MINUTOS RESTANTES DA CONVERSAO DE HORAS
	tempo = tempo % 3600;
	
	//DIVIDE TEMPO POR 60 PARA OBTER MINUTOS
	minutos = tempo /60;
	
	//OBTEM SEGUNDOS PELA SOBRA DA CONVERSAO DOS MINUTOS 
	segundos = tempo %60;

	printf("%i:%i:%i\n", horas, minutos, segundos);
	
	return 0;
}
