/*
 * fgets-01.c
 *
 *  Created on: 2/8/2015
 *      Author: utnso
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE_NA 256

int main(void){

	char *nombreApellidoCompleto = malloc(MAX_SIZE_NA);

	puts("Ingrese su nombre y apellidos completos");

	fgets(nombreApellidoCompleto,MAX_SIZE_NA,stdin);

	int i = strlen(nombreApellidoCompleto)-1;

	if ((i+1>0) && (nombreApellidoCompleto[i]=='/n'))
		nombreApellidoCompleto[i] = '/0';

	printf("Su nombre y apellidos completos es: %s",nombreApellidoCompleto);

	return 0;
}
