/*
 	Ejercicio 01:
	Se pide una cantidad indeterminada de edades enteras,
	informar:
	el máximo ingresado
	el mínimo ingresado
	el promedio
	la cantidad de edades ingresadas
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	char respuesta = 's';
	int edad;
	int banderaEdad = 1;
	int respuestaScan;
	int edadMaxima;
	int edadMinima;
	int acumuladorEdad = 0;
	int contador = 0;
	float promedio;

	while(respuesta == 's'){
		printf("Ingrese una edad ");//Mensaje en pantalla
		fflush(stdin); //Borramos la consola
		respuestaScan = scanf("%d",&edad); //Pedimos datos
		while(respuestaScan == 0){ //Validamos de que sea un entero
			printf("\nPorfavor, ingrese una edad valida ");
			fflush(stdin);
			respuestaScan = scanf("%d",&edad);
		}

		//Acumulador y contador
		acumuladorEdad += edad;
		contador++;

		//Guardar maximos y minimos por primera vez
		if(banderaEdad == 1){
			edadMaxima = edad;
			edadMinima = edad;
			banderaEdad = 0;
		}
		else{
			if(edad > edadMaxima){ //En caso de que la edad ingresada sea mayor
				edadMaxima = edad;
			}
			else{
				if(edad < edadMinima){ //En caso de que la edad ingresada sea menor
					edadMinima = edad;
				}
			}
		}

		//Quiere continuar?
		printf("\nDesea agregar otra edad? 's' para SI o 'n' para NO ");
		fflush(stdin);
		respuestaScan = scanf("%c",&respuesta);
		printf("respuestaScan : %d",respuestaScan);
		while(respuestaScan == 0){
			printf("\nPor favor ingrese 's' o 'n'");
			fflush(stdin);
			scanf("%c",&respuesta);
		}
	}

	//Promedio
	promedio = (float)acumuladorEdad / contador;
	printf("\nEl promedio de edad es: %.2f", promedio);
	printf("\nLa cantidad de edades ingresadas es: %d",contador);


}
