#include <stdio.h>

int main(){

float compra, pago, troco, moed;
   int rced, rmoed;
int c100, c50, c20, c10, c5, c2, rc100, rc50, rc20, rc10, rc5, rc2;
   int m100, m50, m25, m10, m5, rm100, rm50, rm25, rm10, rm5;
   
 printf ("\ninsira o valor da compra do cliente: R$");
    scanf ("%f", &compra);
 printf ("insira o valor pago pelo cliente: R$");
    scanf ("%f", &pago);
    
    troco = compra - pago;
 
 printf ("\no troco do cliente e de: R$ %.2f.\n", troco);
 
 rced = (int)troco;
    c100 = rced/100;
 rc100 = rced%100;
    c50 = rc100/50;
 rc50 = rc100%50;
    c20 = rc50/20;
 rc20 = rc50%20;
    c10 = rc20/10;
 rc10 = rc20%10;
    c5 = rc10/5;
 rc5 = rc10%5;
    c2 = rc5/2;
 
 moed = (float)troco - (int)troco;
   rmoed = moed*100;
 m50 = rmoed/50;
    rm50 = rmoed%50;
 m25 = rm50/25;
    rm25 = rm50%25;
 m10 = rm25/10;
    rm10 = rm25%10;
 m5 = rm10/5;
 
 printf ("\nnota(s) de 100 R$: %d", c100);
 printf ("\nnota(s) de 50 R$: %d", c50);
 printf ("\nnota(s) de 20 R$: %d", c20);
 printf ("\nnota(s) de 10 R$: %d", c10);
 printf ("\nnota(s) de 5 R$: %d", c5);
 printf ("\nnota(s) de 2 R$: %d\n", c2);
 
 printf ("\nmoeda(s) de 1 R$: %d", m5);
 printf ("\nmoeda(s) de 50: %d", m50);
 printf ("\nmoeda(s) de 25: %d", m25);
 printf ("\nmoeda(s) de 10: %d", m10);
 printf ("\nmoeda(s) de 5: %d", m5);
 
  return 0;
}
