/*
 ============================================================================
 Name        : Clase_01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);
	/*
	//Declaramos variables enteras
	int numeroUno;
	int numeroDos;
	int resultado;
	int resultadoScan;

	//Mensaje en consola
	printf("Ingrese el primer numero: ");

	//Entrada de dato
	//%d (int) , %f (float), %c (char)
	//El primer parametro se llama "mascara", en el segundo parametro determinamos en que variable queremos que se guarde
	//El "&" nos sirve para autorizar a la funcion scanf guardar el valor que ingresemos en la variable determinada
	//resultadoScan nos sirve para verificar si fue exitosa o no la toma de datos, va a ser 1 o 0
	resultadoScan = scanf("%d", &numeroUno);

	//Ahora debemos validar de que sea un numero y no otra cosa
	while(resultadoScan == 0){
		printf("\nError, por favor reingrese el numero 1: ");
		//Antes de volver a pedir con el scanf, debemos reiniciar los valores de la variable
		fflush(stdin);
		resultadoScan = scanf("%d", &numeroUno);
	}

	printf("\nIngrese el segundo numero: ");
	resultadoScan = scanf("%d", &numeroDos);

	while(resultadoScan == 0){
		printf("\nPor favor, reingrese el numero 2: ");
		fflush(stdin);
		resultadoScan = scanf("%d", &numeroDos);
	}

	//Realizamos la suma
	resultado = numeroUno + numeroDos;

	//Mostramos la suma en consola
	//Con el modificador %d determinamos en que tipo de variable quermos imprimir y en que lugar, luego como siguientes parametros
	//Escribimos la cantidad de variables como veces %d pusimos, en orden de primero a ultimo
	printf("\nLa suma es: %d", resultado);
	*/



	//Ejercicio: Pedir 5 numeros y mostrar el promedio, el maximo y el minimo
	/*
	int numero;
	int acumulador = 0;
	float promedio;
	int respuestaScan;
	int i;
	int numeroMaximo;
	int numeroMinimo;

	for(i = 0; i < 5; i++){
		printf("\nIngrese un numero: ");
		respuestaScan = scanf("%d", &numero);

		while(respuestaScan == 0){
			printf("Error, reingrese el numero");
			fflush(stdin);
			respuestaScan = scanf("%d", &numero);
		}
		acumulador += numero;
		if(i == 0){
			numeroMaximo = numero;
			numeroMinimo = numero;
		}
		else{
			if(numero > numeroMaximo){
				numeroMaximo = numero;
			}
			else{
				if(numero < numeroMinimo){
					numeroMinimo = numero;
				}
			}
		}
	}

	promedio = (float)acumulador / i;

	printf("\nEl promedio es: %.2f", promedio);
	printf("\nEl maximo es: %d", numeroMaximo);
	printf("\nElMinimo es: %d",numeroMinimo);
	*/

}
