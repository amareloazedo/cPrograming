#include <stdio.h>
int main(){
	
	int a, b, c, aux;
	
	printf ("\ninsira o primeiro valor: ");
	   scanf ("%d", &a);
	printf ("insira o segundo valor: ");
	   scanf ("%d", &b);
   printf ("insira o terceiro valor: ");
	   scanf ("%d", &c);
	
	if (a > b){
		aux = a;
		a = b;
		b = aux;
	} 
	if (a > c){
		aux = a;
		a = c;
		c = aux;
	}
	if (b > c){
		aux = b;
		b = c;
		c = aux;
	}
	
	printf ("\no maior valor e: %d.", c);
	
   return 0;
}
