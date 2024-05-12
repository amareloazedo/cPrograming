
#include <stdio.h>
#include <math.h>

int main() {

   double x1, x2, a, b, c, d;
   
   printf ("\ndigite o valor de a: ");
   scanf ("%lf", &a);
   
   printf ("digite o valor de b: ");
   scanf ("%lf", &b);
   
   printf ("digite o valor de c: ");
   scanf ("%lf", &c);
   
   (d = pow(b,2) - 4*a*c);
   (x1 = (sqrt(d) - b) / (2 * a));
	(x2 = (b + sqrt(d)) / (2 * a));
   
   if (d<0) {
   	printf ("\nnao ha solucao real para este discriminante, pois nao existe raiz de numero negativo!\n");
   } else 
	if (d==0) {
	   printf ("\nha solucoes iguais para este problema: %.2lf\n", x1);
   } else
   if (d>0) {
	   printf ("\nha duas solucoes diferentes: %.2lf e %.2lf\n", x1, x2);
	}

   printf ("\nvalor D = %.2lf", d);
   printf ("\nvalor x1 = %.2lf", x1);
   printf ("\nvalor x2 = %.2lf\n", x2);

 return 0;
}
