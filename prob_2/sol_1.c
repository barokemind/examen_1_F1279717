#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    
    int valor_entrante;
    int acumulador;
    
    int salida;
    salida = 1;
    valor_entrante = 1;
    acumulador = 0;
    printf("evaluacion de un listado de numeros\n");
    while (salida == 1)
    {
        
        printf("introduzca numero positivo menor a 580: ");
        scanf("%d",&valor_entrante);
        

        while(valor_entrante >= 580)
        
        {
            printf("numero erroneo, vuelva a ingresar numero positivo menor a 580: ");
            scanf("%d",&valor_entrante);    
        }

        if(valor_entrante == 0)
        {
            printf("eso es todo amigos\n");
            salida = 0;
            exit(0);
        }
        
        printf("%d es un numero valido!\n",valor_entrante);  
        acumulador = 0;             
        for(int i = 1 ; i < valor_entrante ; i++)
        {
            int resto = valor_entrante % i;
            if(resto==0)  
            {
                acumulador = acumulador + i;
            
                
            
            }
        

        }
        
        printf("la suma de divisores es: %d\n",acumulador);

        if(acumulador > valor_entrante)
        {
            printf("es un numero abundante\n");
        }
        else if(acumulador < valor_entrante) 
        {
            printf("es un numero deficiente\n");
        }
        else
        {
            printf("es un numero perfecto\n");
        }
    }







}