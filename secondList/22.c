#include <stdio.h>

int main(){
	
	int n1, n2, resultado, op;
	
	printf ("\ndigite um numero qualquer: ");
	scanf ("%d", n1);
	
	printf ("\ndigite outro numero qualquer: ");
	scanf ("%d", n2);
	
	printf ("\ndigite qual operacao abaixo deseja realizar:");
	printf ("\nadicao \nsubtracao \nmultiplicacao \ndivisao");
	printf ("\noperacao a realizar: ");
	scanf ("%d", op);
	
	if (op == adicao); {
	   resultado = n1 + n2
	} else 
	if op == subtracao {
		resultado = n1 - n2
	} else 
	if op == multiplicacao {
	   resultado = n1 * n2
	} else
	if op == divisao {
	   resultado = n1 / n2
	}
	
	printf ("\no resultado dessa operacao e: %d", resultado);
	
 return 0;
}
