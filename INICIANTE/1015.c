#include <stdio.h>
#include <math.h>

int main(){
	
	float X1, Y1, X2, Y2, distancia;
	
	scanf("%f %f", &X1,&Y1);
	
	scanf("%f %f", &X2,&Y2);
	
	distancia = sqrt( pow( X2 - X1 ,2) + pow( Y2 - Y1 ,2) );
	printf("%.4f\n", distancia);
	
	return 0;
}
