#include <stdio.h>
 
int main() {

	int funcionario, horas;
	float valor, salario;
	
	scanf("%i", &funcionario);
	scanf("%i", &horas);
	scanf("%f", &valor);
	
	salario = horas*valor;
	
	printf("NUMBER = %i\nSALARY = U$ %.2f\n", funcionario, salario); 
	
    return 0;
}
