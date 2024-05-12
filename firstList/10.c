#include <stdio.h>
int main (){
	
	int valor, saque, aux, c100, c50, c20, c10, c5, c2;
	
	printf ("\ninsira o valor que deseja ser sacado: ");
	   scanf ("%d", &valor);  
	
	c100 = valor/100;
	aux = valor%100;
	c50 = aux/50;
   aux = valor%50;
  	c20 = aux/20;
	valor = aux%20;
	c10 = valor/10;
   valor = aux%10;
	c5 = valor/5;
   valor = aux%5;
   c2 = valor/2;
   valor = aux%2;
   
   printf ("\ntotal de notas de 100: %d", c100);
   printf ("\ntotal de notas de 50: %d", c50);
   printf ("\ntotal de notas de 20: %d", c20);
   printf ("\ntotal de notas de 10: %d", c10);
   printf ("\ntotal de notas de 5: %d", c5);
   printf ("\ntotal de notas de 2: %d", c2);
   
	return 0;
}
