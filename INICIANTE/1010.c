#include <stdio.h>
 
int main() {
	
	int cod_1, num_1, cod_2, num_2;
	float val_1, val_2, total;
	
	scanf("%i %i %f", &cod_1, &num_1, &val_1);
	
	scanf("%i %i %f", &cod_2, &num_2, &val_2);
	
	total = (num_1 * val_1) + (num_2 * val_2);
	
	printf("VALOR A PAGAR: R$ %.2f\n", total);
	
    return 0;
}
