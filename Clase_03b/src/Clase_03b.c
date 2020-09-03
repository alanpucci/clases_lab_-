/*
 Pedir al usuario dos numeros float
 -Funcion sumar
 -Funcion restar
 -Funcion multiplicar
 -Funcion dividir

 Todas las funciones en caso de exito return 0
 En caso de error return -1
 */

#include <stdio.h>
#include <stdlib.h>

float sumarNumeros(float numero1, float numero2, float *resultado);
float restarNumeros(float numero1, float numero2, float *resultado);
float multiplicarNumeros(float numero1, float numero2, float *resultado);
float dividirNumeros(float numero1, float numero2, float *resultado);

int main(void)
{
	setbuf(stdout,NULL);
	float primerNumero;
	float segundoNumero;
	int respuestaScan;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;
	printf("Ingrese el primer numero: ");
	fflush(stdin);
	respuestaScan = scanf("%f",&primerNumero);
	while(respuestaScan == 0)
	{
		printf("\nPor favor, ingrese un numero valido: ");
		fflush(stdin);
		respuestaScan = scanf("%f",&primerNumero);
	}
	printf("\nIngrese el segundo numero: ");
	fflush(stdin);
	respuestaScan = scanf("%f",&segundoNumero);
	while(respuestaScan == 0)
	{
		printf("\nPor favor, ingrese un numero valido: ");
		fflush(stdin);
		respuestaScan = scanf("%f",&segundoNumero);
	}
	if(sumarNumeros(primerNumero,segundoNumero,&resultadoSuma) == 0)
	{
		printf("\nEl resultado de la suma es: %.2f", resultadoSuma);
	}
	if(restarNumeros(primerNumero,segundoNumero,&resultadoResta) == 0)
	{
		printf("\nEl resultado de la suma es: %.2f", resultadoResta);
	}
	if(multiplicarNumeros(primerNumero,segundoNumero,&resultadoMultiplicacion) == 0)
	{
		printf("\nEl resultado de la multiplicacion es: %.2f", resultadoMultiplicacion);
	}
	if(dividirNumeros(primerNumero,segundoNumero,&resultadoDivision) == 0)
	{
		printf("\nEl resultado de la division es: %.2f", resultadoDivision);
	}



	return EXIT_SUCCESS;
}

float sumarNumeros(float numero1, float numero2, float *resultado)
{
	int retorno = -1;
	*resultado = numero1 + numero2;
	retorno = 0;
	return retorno;
}

float restarNumeros(float numero1, float numero2, float *resultado)
{
	int retorno = -1;
	*resultado = numero1 - numero2;
	retorno = 0;
	return retorno;
}

float multiplicarNumeros(float numero1, float numero2, float *resultado)
{
	int retorno = -1;
	*resultado = numero1 * numero2;
	retorno = 0;
	return retorno;
}

float dividirNumeros(float numero1, float numero2, float *resultado)
{
	int retorno;
	if(numero2 != 0)
	{
		*resultado = numero1 / numero2;
		retorno = 0;
	}
	else
	{
		retorno = -1;
	}
	return retorno;
}
