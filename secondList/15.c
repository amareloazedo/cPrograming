#include <stdio.h>
int main (){
	
	int num;
	printf ("\ndigite um numero qualquer: ");
	scanf ("%d", &num);
	
	if (num == 0){ 
	   printf ("esse numero e nulo!");
		}
	if	((num % 2 == 0) && (num != 0)){
		printf ("esse numero e par!");
      }
	else if (num != 0){
	   printf ("esse numero e impar!");
	   }
	
return 0;
}
