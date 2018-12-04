//questao2-lincolnkayegomes.c
//matricula: 0050016105
#include <stdio.h>
int main()
{
  int i,cont=0;
  char palavra[30],letra;
  printf("\nentre com uma palavra\n");
  gets(palavra);
  printf("entre com uma letra\n");
  scanf("%c",&letra);
  for(i=0;palavra[i];i++)
  {
   if(palavra[i]==letra)
   cont++;
                               
{
}}   
 printf("\na letra %c aparece %d vez(s) na palavra %s\n",letra,cont,palavra);

system("pause");
return 0;
}
