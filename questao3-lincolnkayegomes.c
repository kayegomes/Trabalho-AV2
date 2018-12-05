//questao3-lincolnkayegomes.c
//matricula: 0050016105
#include <stdio.h>
int main()
{
 int i,objeto[3000],menor=0,medida;
 for(i=0;i<3000;i++)
 {printf("\nentre com o peso(g) do objeto %d\n",i+1);
 scanf("%d",&objeto[i]);
}
 menor=objeto[0];   

for(i=0;i<3000;i++)
{
 if(objeto[i]<menor)
 {    
   menor=objeto[i];}                          
    
    if(objeto[i]==menor){ 
      medida+=1;
      }
      
   }
      printf("O menor peso eh %d, %d objetos se enquadram na medida",menor,medida);
      
      
    
    
    
system("pause");
return 0;
}
