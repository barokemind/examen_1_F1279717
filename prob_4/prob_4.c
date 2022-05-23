#include "mbed.h"





DigitalIn sw1(p5);
DigitalIn sw2(p6);

#define sw3 p7
#define sw4 p8
#define sw5 p9

DigitalOut led_rojo(p10);
DigitalOut led_azul(p11);
DigitalOut led_amarillo(p12); 




BusIn botones(sw3,sw4,sw5);

//BusOut leds(led_rojo,led_azul,led_amarillo);


int main() 
{
    int num_mayor;
    int num_menor;
    int num_intermedio;
    int numero_variable = 1;
    int estado_anterior_boton = 0;
    estado_anterior_led = 0; 
    int num1;
    int num2;
    int num3;
    while (1) 
    {
        while(sw1.read() == 0)       
            {
               estado_anterior_boton = 0; 
               
               
               //vemos si hay que encender los leds
               if(sw2.read() == 0)
                {
                    estado_anterior_led = 0;                        

                } 
                else
                {
                    //aqui se presiono el boton
                    if(estado_anterior_led == 0)
                    {
                        estado_anterior_led = 1;
                        //ordenamos numeros
                        if(num1 < num2 && num1 < num3)
                        {
                            if(num2 < num3)
                            {
                               num_menor = num1; 
                               num_intermedio = num2; 
                               num_mayor = num3; 
                            }
                            else
                            {
                               num_menor = num1; 
                               num_intermedio = num3; 
                               num_mayor = num2;                                        
                            }
                        }

                        if(num2 < num1 && num2 < num3)
                        {
                            if(num1 < num3)
                            {
                               num_menor = num2; 
                               num_intermedio = num1; 
                               num_mayor = num3;    

                            }
                            else
                            {
                               num_menor = num2; 
                               num_intermedio = num3; 
                               num_mayor = num1;

                            }
                        }

                        if(num3 < num1 && num3 < num2)
                        {
                            if(num1 < num2)
                            {
                               num_menor = num3; 
                               num_intermedio = num2; 
                               num_mayor = num1; 
                            }
                            else
                            {
                               num_menor = num3; 
                               num_intermedio = num2; 
                               num_mayor = num1;                                        
                            }
                        }
                      

                      
                        
                        
                        //mostramos valores por led
                        for(i=0; i < num_mayor, i++)
                        {
                           led_rojo = 1;
                           wait_ms(1000);  
                           led_rojo = 0;
                           wait_ms(1000);           
                        }
                        for(i=0; i < num_intermedio, i++)
                        {
                           led_azul = 1;
                           wait_ms(1000);  
                           led_azul = 0;
                           wait_ms(1000);           
                        }
                        for(i=0; i < num_menor, i++)
                        {
                           led_amarillo = 1;
                           wait_ms(1000);  
                           led_amarillo = 0;
                           wait_ms(1000);           
                        }


                    }


















                }               



            }
        //aqui el boton fue presionado
        if(estado_anterior_boton == 0)
        {
            estado_anterior_boton = 1;
            
            switch ( numero_variable )
            {
                // declarations
                // . . .
                case 1:
                    // statements executed if the expression equals the
                    // value of this constant_expression
                    numero_variable = 2;
                    num1 = botones.read();
                    printf("El valor del bus es %d\n",num1);
 
                    
                    break;
                    
                case 2:
                    // statements executed if the expression equals the
                    // value of this constant_expression
                    numero_variable = 3;
                    num2 = botones.read();
                    printf("El valor del bus es %d\n",num2);
                    
                    break;
                    
                case 3:
                    // statements executed if the expression equals the
                    // value of this constant_expression
                    numero_variable = 1;
                    num3 = botones.read();
                    printf("El valor del bus es %d\n",num3);
                    
                    break;
                //default:
                    // statements executed if expression does not equal
                    // any case constant_expression
            }
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
            
        //printf("\nEl valor del bus es %d",botones.read());
            
        wait_ms(100);
    
    }

}