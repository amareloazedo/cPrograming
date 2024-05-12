#include <stdio.h>
float main(){
	
	float quantia, valor;
	
	printf ("\ninsira a quantia de macas compradas: ");
	scanf ("%f", &quantia);
	
	if (quantia >= 12) {
	   (valor = quantia*0.25);		
	}
	else {
		(valor = quantia*0.30);
	} 
	
	printf ("o valor da compra e de R$%.2f", valor);
	
 return 0;	
}
