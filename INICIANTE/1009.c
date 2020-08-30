#include <stdio.h>
 
int main() {
	
	char name[100];
	double fixo, vendas, total;
	
	
	scanf("%s", &name);
	scanf("%lf", &fixo);
	scanf("%lf", &vendas);
	
	total = fixo + (vendas*0.15);
	
	printf("TOTAL = R$ %.2lf\n", total);
	
    return 0;
}
