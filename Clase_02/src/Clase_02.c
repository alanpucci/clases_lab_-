/*
 * Solicitar al usuario que ingrese una serie de números la cual finaliza al introducir el 999
 * (el 999 no debe ser tenido en cuenta para dicho cálculo).
 * Una vez finalizado el ingreso de números el programa deberá mostrar el promedio de dichos números por pantalla.
 * */

#include <stdio.h>
#include <stdlib.h>


int main()
{
	setbuf(stdout,NULL);

    int acumulador = 0;
    int numero;
    int contador = 0;
    float promedio;

    while(1)
    {
    	printf("Ingrese un numero");
    	scanf("%d",&numero);
    	if(numero != 999)
    	{
    		acumulador += numero;
    		contador++;
    	}
    	else
    	{
    		break;
    	}
    }
    promedio = (float)acumulador / contador;
    printf("\nLa edad promedio es: %.2f",promedio);
}
