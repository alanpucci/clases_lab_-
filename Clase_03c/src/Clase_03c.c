
#include <stdio.h>
#include <stdlib.h>

int sumar(float operadorA, float operadorB, float *pResultado);
int restar(float operadorA, float operadorB, float *pResultado);
int dividir(float operadorA, float operadorB, float *pResultado);
int multiplicar(float operadorA, float operadorB, float *pResultado);
int getFloat(char *mensaje,char *mensajeError,int reintentos,float *pResultado);

int main(void) {

	setbuf(stdout,NULL);
	float numUno;
	float numDos;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;

/*
	printf("\nIngrese el primer operando: ");
	fpurge(stdin);
	resultadoScan = scanf("%f", &numUno);
	while (resultadoScan == 0) {
		printf("\nError, Ingrese un numero: ");
		fpurge(stdin);
		resultadoScan = scanf("%f", &numUno);
	}
*/

	if(getFloat("\nIngrese el primer operando: ","\nError, Ingrese un numero: ",2,&numUno) == 0)
	{
		if(getFloat("\nIngrese el segundo operando: ","\nError, Ingrese un numero: ",2,&numDos) == 0)
		{
			if (sumar(numUno, numDos, &resultadoSuma) == 0) {
					printf("\nEl resultado de la suma es: %.2f", resultadoSuma);
				} else {
				    printf("\nAlgo salio mal");
				}
				if (restar(numUno, numDos, &resultadoResta) == 0) {
					printf("\nEl resultado de la resta es: %.2f", resultadoResta);
				} else {
				    printf("\nAlgo salio mal");
				}
				if (dividir(numUno, numDos, &resultadoDivision) == 0) {
					printf("\nEl resultado de la division es: %.2f", resultadoDivision);
				} else {
					printf("\nNo se puede dividir por 0");
				}
				if (multiplicar(numUno, numDos, &resultadoMultiplicacion) == 0) {
					printf("\nEl resultado de la multiplicacion es: %.2f",
							resultadoMultiplicacion);
				}else {
					printf("\nAlgo salio mal");
				}
		}

	}



	return EXIT_SUCCESS;
}

int sumar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA + operadorB;
	retorno = 0;

	return retorno;
}

int restar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA - operadorB;
	retorno = 0;

	return retorno;
}

int dividir(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	if (operadorB != 0) {
		*pResultado = operadorA / operadorB;
		retorno = 0;
	}

	return retorno;
}

int multiplicar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA * operadorB;
	retorno = 0;

	return retorno;
}

int getFloat(char *mensaje,char *mensajeError,int reintentos,float *pResultado)
{
	int retorno = -1;
	int resultadoScan;
	float bufferFloat;
	printf("%s",mensaje);
	fflush(stdin);
	resultadoScan = scanf("%f", &bufferFloat);
	while (resultadoScan == 0 && reintentos > 0)
	{
		reintentos--;
		printf("%s",mensajeError);
		fflush(stdin);
		resultadoScan = scanf("%f", &bufferFloat);
	}
	if(resultadoScan != 0)
	{ //TODO OK
		*pResultado = bufferFloat;
		retorno = 0;
	}
	return retorno;
}
