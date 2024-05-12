#include <stdio.h>
int main(){
	
	float cm;
	int pol;
	
	printf ("\ndigite a quantidade de polegadas: ");
	   scanf ("%d", &pol);
	
	(cm = pol*2.54);
	printf ("\n%d polegadas tem %.2f cm.", pol, cm);
	
	return 0;
}
