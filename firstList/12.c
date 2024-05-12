#include <stdio.h>

int main(){
	
	int m1, m2, m3, m21, m22, m23;
	int med1, med2, somamed, medmed; 
	
	printf ("\ndigite tres numeros quaisquer para calcular suas medias: \n");
	   scanf ("%d", & m1);
	      scanf ("%d", & m2);
	         scanf ("%d", & m3);
	
	med1 = (m1 + m2 + m3)/ 3;
	
	printf ("\na media de %d, %d, %d e: %d \n", m1, m2, m3, med1);
	
	printf ("\ndigite outros tres numeros quaisquer para calcular suas medias: \n");
	   scanf ("%d", & m21);
	      scanf ("%d", & m22);
	         scanf ("%d", & m23);
	
	med2 = (m21 + m22 +m23)/ 3;
	
	printf ("\na media de %d, %d, %d e: %d \n", m21, m22, m23, med2);
	
	somamed = med1 + med2;
	   medmed = (med1 + med2)/ 2;
	
	printf ("\na soma das duas medias e: %d", somamed);
	   printf ("\na media entre as duas medias e: %d", medmed);
	
return 0;
}
