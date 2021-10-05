#include <stdio.h>

int main(void)
{
 int n;
  printf("Quantos livros você quer comprar?\n");
  scanf("%d", &n);
  
 float A;
 A = 0.25 * n + 7.5;
 float B;
 B = 0.5 * n + 2.5;
 float C;
 C = 0.65 * n + 1.5;

 if (n<=0)
 {
   printf("Insira um valor válido\n");
 }
 else
 {
   if((A<B)&&(A<C))
   {
    printf("Critério A, $%.2f\n", A);
   }
   else if(B<C)
   {
      printf("Critério B,$%.2f\n", B);
   }
   else
   {
      printf("Critério C,$%.2f\n", C);
   }
 }
}
