#include <stdio.h>

int main(){
	
	int l1, l2, l3;
	
	printf ("\ndigite o valor do primeiro lado do triangulo: ");
	    scanf ("%d", &l1);
	printf ("digite o valor do segundo lado do triangulo: ");
       scanf ("%d", &l2);
	printf ("digite o valor do terceiro lado do triangulo: ");
	    scanf ("%d", &l3);
	    
   if (l1 < l2+l3 && l2 < l1+l2 && l3 < l1+l2) {
   	
   	if (l1 != l2 && l3 != l1 && l2 != l3) {
   	   printf ("\neste triangulo e do tipo escaleno.");
  	 }
	   if (l1 == l2 && l2 == l3 && l3 == l1) {
		   printf ("\neste triangulo e do tipo equilatero."); 
		   
    } else {   	
    	   if (l1 == l2 || l2 == l3 || l1 == l3) {
    	      printf("\nesse triangulo e do tipo isoceles.");
		   }
	}
			  	
	} else {
	   printf ("\nessas medidas nao formam um triangulo.");
   }
	   
 return 0;
}
