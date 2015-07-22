/*
 * mensajes.c
 *
 *  Created on: 22/7/2015
 *      Author: utnso
 */

#include <stdio.h>

int main(){

	// ATRIBUTOS
	char nombre[20] = "Ericsson";
	char apellido[30] = "Zergesno";
	int edad = 54;
	float peso = 130;
	char direccion[30] = "labarrieta 542";

	// INICIO
	printf("\nHola mundo ansi C\n");
	printf("\n******************************\n");
	printf("%10s%20s\n","Nombre:",nombre);
	printf("%10s%20s\n","Apellido:",apellido);
	printf("%10s%20d\n","Edad:",edad);
	printf("%10s%20.2f\n","Peso(lbs):",peso);
	printf("%10s%20s\n","Direccion:",direccion);
	printf("******************************\n");



	return 0;
}
