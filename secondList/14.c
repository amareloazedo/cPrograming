#include <stdio.h>
int main(){
	
	int num;
	
	printf ("\ndigite um numero qualquer: ");
	scanf ("%d", &num);
	
	if (num > 0){
		printf("\nesse numero e positivo!");
	} 
	else if (num < 0){
		printf ("\nesse numero e negativo!");
	} 
	else {
	printf ("\nesse numero e nulo!");
	}

return 0;
}
