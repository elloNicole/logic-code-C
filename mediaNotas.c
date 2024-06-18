#include <stdio.h>
#include <stdlib.h>

void main(void)
{ 
   system("color 3f");
   
   int    nota, acumulado, resultado, i;
    i=1;
    acumulado=0;
    
    printf("Digite 5 notas entre zero e 100");
    
   while(i<=5)
   {
   	printf("\nNota:       \n");
   	scanf("%d", &nota);
   	if(nota<0 || nota>100)
   		{ 
   			printf("Favor digitar novamente a nota.\n");
		}
	   else
	   {
	   		acumulado=acumulado+nota;
   			i++;
	   }
   }
    resultado=acumulado/5;
  	printf("\nSua media eh: %d  \n", resultado);

   if (resultado>=60)
   { 
		printf("\nParabens voce foi aprovado! \n");
   }
   else 
   {
   	if (resultado<=20)
   	{
   	printf("\nVoce foi reprovado. \n");
   } 	
   	else
   	{
   	printf("\nVoce esta de recuperacao")
	   ;
	   	}
}
	return;
}
