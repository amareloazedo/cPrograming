
#include <stdio.h>

int main() {
	
	char tarifa;
	float vf, vp, icms, consumo;
	float A, B, C, a, b, c;
	
	printf ("\ninsira qual o tipo da tarifa: ");
	scanf ("%s", &tarifa);
	
	printf ("insira o valor do consumo: ");
	scanf ("%f", &consumo);
	
if (tarifa == 'A' || 'a'){
		vp = 0.3 * (consumo * 0.5);
	}

	if (tarifa == 'B' || 'b'){
		vp = 0.3 * (consumo * 0.8);
	}

	if (tarifa == 'C' || 'c'){
		vp = 0.3 * (consumo * 1);
	}
	
   printf ("\no valor a ser pago pela conta de energia e de R$ %.2f.", vp);
	 
	return 0;
}
