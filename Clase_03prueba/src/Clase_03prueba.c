/*
 ============================================================================
 Name        : Clase_03prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getInt(char *mensaje, char *mensajeError, int *pNumero);
int sumarNumeros(int numero1, int numero2, int *pResultado);
int restarNumeros(int numero1, int numero2, int *pResultado);
int multiplicarNumeros(int numero1, int numero2, int *pResultado);
int dividirNumeros(int numero1, int numero2, int *pResultado);

int main(void)
{
	setbuf(stdout,NULL);
	int primerNumero;
	int segundoNumero;
	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoDivision;

	if(getInt("Ingrese el primer numero: ", "\nPor favor, ingrese un numero valido: ", &primerNumero) == 0)
	{
		if(getInt("\nIngrese el segundo numero: ", "\nPor favor, ingrese un numero valido: ",&segundoNumero) == 0)
		{
			if(sumarNumeros(primerNumero, segundoNumero, &resultadoSuma) == 0 &&
			   restarNumeros(primerNumero, segundoNumero, &resultadoResta) == 0 &&
			   multiplicarNumeros(primerNumero, segundoNumero, &resultadoMultiplicacion) == 0)
			{
				printf("El resultado de la suma es: %d", resultadoSuma);
				printf("El resultado de la resta es: %d", resultadoResta);
				printf("El resultado de la multiplicacion es: %d", resultadoMultiplicacion);
				if(dividirNumeros(primerNumero, segundoNumero, &resultadoDivision) == 0)
				{
					printf("El resultado de la division es: %d", resultadoDivision);
				}
				else
				{
					printf("No se puede dividir por 0");
				}
			}
		}
	}
}

int getInt(char *mensaje, char *mensajeError, int *pNumero)
{
	int retorno = -1;
	int numero;
	int respuestaScan;
	printf("%s",mensaje);
	fflush(stdin);
	respuestaScan = scanf("%d",&numero);
	while(respuestaScan == 0)
	{
		printf("%s",mensajeError);
		fflush(stdin);
		respuestaScan = scanf("%d",&numero);
	}
	*pNumero = numero;
	retorno = 0;
	return retorno;
}

int sumarNumeros(int numero1, int numero2, int *pResultado)
{
	int retorno = -1;
	*pResultado = numero1 + numero2;
	retorno = 0;
	return retorno;
}

int restarNumeros(int numero1, int numero2, int *pResultado)
{
	int retorno = -1;
	*pResultado = numero1 - numero2;
	retorno = 0;
	return retorno;
}

int multiplicarNumeros(int numero1, int numero2, int *pResultado)
{
	int retorno = -1;
	*pResultado = numero1 * numero2;
	retorno = 0;
	return retorno;
}

int dividirNumeros(int numero1, int numero2, int *pResultado)
{
	int retorno = -1;
	if(numero2 != 0)
	{
		*pResultado = numero1 / numero2;
		retorno = 0;
	}
	return retorno;
}
