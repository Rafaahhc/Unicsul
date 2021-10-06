#include <stdio.h>
#include <string.h>

int main()
{

//Declarando os arrays onde serão guardadas as quantidades de eleitores 
 int q;
 int qt;
 int qtd;

 int obrigatorios[q];
 int facultativos[qt];
 int naoeleitores[qtd];

//Variável que vai receber a idade do usuário
 int i;

//Variável para continuar o programa
 char parar[3];
 char comp1[4];
 char comp2[]="nao";

 do{
  printf("Quantos anos você tem?\n");
  scanf("%d", &i);

  if(i>17 && i<70)
  {
   q++;
  }
  else if( i==16 || i==17 || i>69)
  {
   qt++;
  }
  else
  {
   qtd++;
  }
  printf("Quer continuar o programa? Se sim, digite sim, se não digite nao (sem acento)\n");
  scanf("%s", comp1);
 }
 while(strcmp(comp1, comp2)!= 0);


 
  printf("Há %d eleitores\n", q);
  printf("Há %d eleitores facultativos\n", qt);
  printf("Há %d não eleitores\n", qtd);
  printf("O total de moradores é de: %d\n", q+qt+qtd);

}
