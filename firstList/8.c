#include <stdio.h>
#include <stdlib.h>

   float fixo, comm, vendas = 0;

int main(){
	
	printf ("\ninsira o valor do salario fixo do vendedor: ");
 	   scanf ("%f", &fixo);
	printf ("insira o valor total de vendas do mes do vendedor: ");
	   scanf ("%f", &vendas);
	
   comm = vendas * 15 / 100;

	printf ("\no salario fixo deste vendedor e: R$ %.2f \n", fixo);
	   printf ("o valor de vendas no mes e de: R$ %.2f. \n", vendas);
	      printf ("o valor de comissoes do vendedor no mes e de: R$ %.2f. \n", comm);
	         printf ("o valor total do salario do vendedor e de: R$ %.2f. \n", fixo + comm);
 
   return 0;
   }
