#include <stdio.h>
int main(){
	
	int n1, n2;
	
	printf ("\ndigite o primeiro valor: ");
      scanf ("%d", &n1);
	printf ("digite o segundo valor: ");
      scanf ("%d", &n2);
	
	if (n1 > n2) {
	   printf ("\n%d e maior que %d!", n1, n2);
	}
	if (n2 > n1) {
      printf ("\n%d e maior que %d!", n2, n1);
	}
	else {
		printf ("\nos dois numeros sao iguais!");
	}
	     
	return 0;
}
