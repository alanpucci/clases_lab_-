/*
 * utn.c
 *
 *  Created on: Sep 3, 2020
 *      Author: alane
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * utn_getNumero : Pide al usuario un numero
 * pResultado: Direccion de memoria de la variable donde escribe el valor ingresado por el usuario
 * min: valor minimo valido (inclusive)
 * max: valor maximo valido (no inclusive)
 * msg: El mensaje que imprime para pedir un valor
 * msgError: mensaje que imprime si el rango no es valido
 * Retorno: 0: si esta todo OK. -1: Si hubo un error
 */

int utn_getNumero(int* pResultado,int min,int max,char* msg,char* msgError, int reintentos)
{
	int numeroQueIngresaElUsuario;
	int variableDeRetorno=-1;
	//printf("Ingresame algo che:");


	do
	{
		printf("%s",msg);
		fflush(stdin);
		scanf("%d",&numeroQueIngresaElUsuario);
		if(numeroQueIngresaElUsuario>=min && numeroQueIngresaElUsuario<max)
		{
			// escribir "numero" en la dire que tiene pResultado
			*pResultado = numeroQueIngresaElUsuario;
			variableDeRetorno=0;
			break;
		}
		else
		{
			printf("%s",msgError);
			reintentos--;
		}
	}while(reintentos >= 0);

	return variableDeRetorno;
}
