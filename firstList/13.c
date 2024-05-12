#include <stdio.h>

int main(){
	
	float vlrtotal, vlrfab, vlrimp, vlrrev;
	
	printf ("\ninsira o preco de fabrica do carro: R$ ");
	scanf ("%f", &vlrfab);
	
	vlrimp = (vlrfab * 45)/100;
	vlrrev = (vlrfab * 28)/100;
	
	vlrtotal = vlrfab + vlrimp + vlrrev;
	
	printf ("\n o valor total deste carro e de : R$ %.2f\n", vlrtotal);
	
return 0;
}
