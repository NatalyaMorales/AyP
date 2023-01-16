/******************************************************************************

Creado por Natalya Patricia Morales De la Vega
Laboratorio U3 - Programa que te da la hora 1 segundo después

*******************************************************************************/
#include <stdio.h>

int main()
{
    //Leer datos de entrada
    int hh,mm,ss;
    printf("\nPrograma que te da la hora 1 segundo después\n");
    printf("\nIntroduzca la hora de la forma (HH:MM:SS): ");
    scanf("%d:%d:%d", &hh,&mm,&ss);
    
    if (hh<=23 && hh>=0 && mm<=59 && mm>=0 && ss<=59 && ss>=0) //Identificar si es una hora válida
    {
        if (hh==23 && mm==59 && ss==59)
            printf("\nLa hora un segundo después es: 00:00:00");
            else
            {
                if (ss<59)
                {
                    ss = ss + 1;
                    printf("\nLa hora un segundo después es: %02d:%02d:%02d",hh,mm,ss);
                }
                if (ss==59)
                {
                    if (mm<59)
                    {
                        mm = mm + 1;
                        printf("\nLa hora un segundo después es: %02d:%02d:00",hh,mm);
                    }
                    if (mm==59)
                    {
                        hh = hh + 1;
                        printf("\nLa hora un segundo después es: %02d:00:00",hh);
                    }
                }
            }
    }
        else 
        printf("\nERROR: No es una hora válida");

    return 0;
}





