#include <stdio.h>
int main(){
	
	int num;
	
	printf ("\ndigite um valor qualquer: ");
	scanf ("%d", &num);
	
	if (num > 0) {
		printf ("o numero %d e positivo!", num);
	}
	else {
      num = -(num);
		printf ("o numero -%d e negativo!", num);
   }
	
	return 0;
}
