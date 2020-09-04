/*
 ============================================================================
 Name        : Clase_04.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void otraFuncion(float *direccion);

int main(void) {
	//int b;
	//Variable de tipo float
	float b;
	//Con el asterisco digo que la variable que va a almacenar una direccion de memoria (una direccion de memoria es un numero tambien)
	//int *p;
	//Podemos hacerlo con punteros de tipo float tambien
	float *p;

	//Una variable tiene nombre, valor y direccion de memoria
	//Un puntero es un tipo de variable que nos guarda o hace referencia a la direccion de memoria de una variable
	//p en este caso seria un puntero porque nos esta guardando la direccion de memoria de la variable b
	//Con el ampersand (&) podemos acceder a la direccion de memoria de la variable a su derecha
	p = &b;
	printf("La direccion de b es: %p",p);

	//Cuando ponemos un asterisco adelante de la variable luego de haberla declarado nos permite
	//Modificar el valor de la variable a la que accedimos con su direccion en memoria
	//En este caso con *p estamos dandole un valor de 70 a la variable b
	//Es decir con el * accedo a la direccion, la leo y escribo sobre su valor
	*p = 70.2;
	printf("\nEl valor de b es: %f",b);

	//Vamos a modificarlo desde otra funcion
	otraFuncion(p);
	printf("\nEl nuevo valor de b es: %f", b);


	//Podemos declarar un puntero para acceder a la direccion de memoria de un texto
	char *mensaje = "Hola este es un mensaje";
	//Luego para imprimirlo usamos la mascara "%s"
	printf("%s", mensaje);

}

void otraFuncion(float *direccion)
{
	//Vamos a mostrar la direccion que recibimos
	//Por mas que el puntero sea un float, podemos de todas formas, leer la direccion de memoria
	printf("\nRecibi la direccion %p", direccion);
	//Vamos a modificar el valor de la variable a la cual accedimos
	*direccion = 8.5;
}
