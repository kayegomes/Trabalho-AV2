//questao1-lincolnkayegomes.c
//matricula: 0050016105
#include <stdio.h>
int main()
{
  int mat[4][4],i,j,soma=0,soma2=0,soma3=0,soma4=0;
  for(i=0;i<4;i++)
  {
   for(j=0;j<4;j++)
   {printf("\nentre com o elemento [%d,%d] da matriz\n",i+1,j+1);
   scanf("%d",&mat[i][j]);
}}                              
soma=mat[3][1]+mat[1][2];
soma2=mat[3][2]+mat[2][2];
soma3=mat[3][3]+mat[3][2];
soma4=mat[3][4]+mat[4][2];

printf("o somatorio eh: \n%d\t%d\t%d\t%d",soma,soma2,soma3,soma4);
   
   system("pause");
   return 0; 
}
