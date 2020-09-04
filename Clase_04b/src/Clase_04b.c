#include <stdio.h>
#include <stdlib.h>

#include "utn.h"


//Ejercicio hacer la funcion utn_getNumeroFloat()
//Hacer la funcion utn_getCaracter()

int main(void) {
	/*
	char* variable = "Ingresame algo che:";
	printf("%s",variable);
	return 0;
	*/
	setbuf(stdout,NULL);

	int edad;


	if(utn_getNumero(&edad,1,120,"\nIngresame edad: ","\nNAHHHHHH", 1) == 0)
	{
		printf("ingresaste:%d",edad);
	}



	return EXIT_SUCCESS;
}


