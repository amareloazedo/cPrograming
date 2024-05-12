#include <stdio.h>
int main(){
	
  float r, h, A, V;
  
  printf ("\ninsira a altura do cilindro: ");
  scanf ("%f", &h);
  
  printf ("insira o raio desse cilindro: ");
  scanf ("%f", &r);
  
  (A = (2 * 3.14 * r) * (h + r));
  (V = 3.14 *(r * r)* h);
  
  printf ("\na area do cilindro e: %.2f", A);
  printf ("\no volume do cilindro e: %.2f", V);
	
return 0;
}
