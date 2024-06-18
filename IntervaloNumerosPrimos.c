#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("color 0a");
    int numeroprimo=0, maximotestado, testeprimodiv, recompensasemresto=0;
    printf("\n Informe até que numero devera achar primo \n");
    scanf("%d", &maximotestado);

    for(numeroprimo=2;numeroprimo<=maximotestado;numeroprimo++)
    {
        for(testeprimodiv=1;testeprimodiv<=numeroprimo;testeprimodiv++)
        {
            if(numeroprimo%testeprimodiv==0)
                {
                    recompensasemresto=recompensasemresto+1;
                }
        }
        if(recompensasemresto==2)
        {
            printf("\n %d", numeroprimo);
        }
        
        recompensasemresto=0;
    }
}
