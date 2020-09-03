/*
	Ejercicio 02:
	Al ejercicio anterior :
	Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
	ademas de informar lo anterior ....informar:
	la persona mas joven de las casadas
	a persona mas Vieja de las solteras
	de los estados civiles , cual fue el mas ingresado
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);

	char respuesta = 's';
	int edad;
	int respuestaScan;
	char estadoCivil;
	int banderaCasadas = 1;
	int jovenCasada;
	int banderaSoltera = 1;
	int viejaSoltera;
	int contadorSoltero = 0;
	int contadorCasado = 0;
	int contadorDivorciado = 0;
	int acumuladorEdad = 0;
	int contadorEdad = 0;
	float promedio;

	while(respuesta == 's'){
		printf("Ingrese su edad: ");
		fflush(stdin);
		respuestaScan = scanf("%d",&edad);
		while(respuestaScan == 0 ){
			printf("\nPor favor, ingrese una edad valida: ");
			fflush(stdin);
			respuestaScan = scanf("%d",&edad);
		}
		printf("\nIngrese su estado civil 's' para soltera, 'c' para casada, 'd' para divorciada: ");
		fflush(stdin);
		scanf("%c",&estadoCivil);
		while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'd'){
			printf("\nPor favor, ingrese un estado civil valido: ");
			fflush(stdin);
			scanf("%c",&estadoCivil);
		}

		acumuladorEdad += edad;
		contadorEdad++;

		switch(estadoCivil){
		case 's':
			if(banderaSoltera == 1){
				viejaSoltera = edad;
				banderaSoltera = 0;
			}
			else{
				if(edad > viejaSoltera){
					viejaSoltera = edad;
				}
			}
			contadorSoltero++;
		break;
		case 'c':
			if(banderaCasadas == 1){
				jovenCasada = edad;
				banderaCasadas = 0;
			}
			else{
				if(edad < jovenCasada){
					jovenCasada = edad;
				}
			}
			contadorCasado++;
		break;
		case 'd':
			contadorDivorciado++;
		break;
		}

		printf("Desea continuar? 's' para SI 'n' para NO: ");
		fflush(stdin);
		scanf("%c",&respuesta);
		while(respuesta != 's' && respuesta != 'n'){
			printf("\nPor favor, ingrese 's' o 'n' ");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
	}

	//Promedio
	promedio = (float)acumuladorEdad / contadorEdad;


	printf("\nEl promedio de edad es: %.2f",promedio);
	printf("\nLa edad mas joven de las casadas es: %d años",jovenCasada);
	printf("\nLa edad mas vieja de las solteras es: %d años",viejaSoltera);
	//Condicional para saber cual fue el mas elegido
	if(contadorCasado > contadorDivorciado && contadorCasado > contadorSoltero){
		printf("\nEl estado civil mas elegido es casado");
	}
	else{
		if(contadorDivorciado > contadorCasado && contadorDivorciado > contadorSoltero){
			printf("\nEl estado civil mas elegido es divorciado");
		}
		else{
			printf("\nEl estado civil mas elegido es soltero");
		}
	}

}
