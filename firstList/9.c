#include <stdio.h>
int main (){
	
	int A, B, aux;
	
	printf ("\ninsira um valor para A: ");
	scanf ("%d", &A);
	printf ("insira um valor para B: ");
	scanf ("%d", &B);
	
	aux = A;
	A = B;
	B = aux;
	
	printf ("\no valor de A e: %d", A);
	printf ("\no valor de B e: %d", B);
	
  return 0;	
}
