/*
 ============================================================================
 Name        : Clase_03.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Declaracion del prototipo de la funcion
//Siempre tiene que estar el prototipo declarado, por lo general antes del main, sino, aparece un "warning implicito" en consola
//Se tiene que declarar el prototipo para que el compilador verifique que el retorno de una funcion sea correcto
int sumarEnteros(int numero1, int numero2);
int dividirEnteros(int numero1, int numero2, float *resultado);

int main(void) {

	setbuf(stdout, NULL);
	int resultado;
	float numero;
	resultado = sumarEnteros(14,22);
	printf("El resultado es: %d",resultado);
	return EXIT_SUCCESS;
	//Con el ampersand (&) le paso la direccion de memoria de esa variable que quiero guardar el valor
	if(dividirEnteros(14,22,&numero) == 0){
		printf("%d",numero);
	}
}

//Desarrollo de la funcion
int sumarEnteros(int numero1, int numero2)
{
	int resultado;
	resultado = numero1 + numero2;
	return resultado;
}

//Para evitar errores, se le pasa otro parametro puntero a la funcion
//Los dos primeros parametros son parametros pasaje por valor
//El puntero es pasaje por referencia
//El puntero nos va a hacer referencia a la direccion de memoria de otra variable
int dividirEnteros(int numero1, int numero2, float *resultado){
	//Declaro una variable para retornar si la division se pudo realizar o no
	int retorno;
	if(numero2 != 0){
		*resultado = (float) numero1 / numero2;
		retorno = 0;
	}
	else{
			retorno = -1;
	}
	return retorno;
}
