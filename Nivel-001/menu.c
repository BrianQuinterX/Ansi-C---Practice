/*
 * menu.c
 *
 *  Created on: 23/7/2015
 *      Author: utnso
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STRING 255

int elegirOpcion(void);
char* devolverCadena(char*);


int main(){

	printf("\n*******Bienvenido al Menu******\n");

	int i = elegirOpcion();
	char *nombre= malloc(MAX_STRING);
	int edad;
	char *direccion = malloc(MAX_STRING);

	while (i!=0){

		switch(i){
			case 1:
				printf("\nIngrese su nombre: ");
				fgets(nombre,MAX_STRING,stdin); // no deja entrar datos a la variable
				printf("Su nombre es %s\n",devolverCadena(nombre));
				break;
			case 2:
				printf("\nIngrese su edad: ");
				scanf("%d",&edad);
				printf("Usted tiene %d anios\n",edad);
				break;
			case 3:
				printf("\nIngrese su direccion: ");
				fgets(direccion,MAX_STRING,stdin); // no deja entrar datos a la variable
				printf("Usted vive en %s\n",devolverCadena(direccion));
				break;
			default:
				printf("\nOpcion incorrecta!!\nVuelva a elegir una opcion\n");
		}
		i = elegirOpcion();
		free(nombre);
		free(direccion);
	}
	printf("\nVuelva Pronto ...\n");
	return 0;
}



int elegirOpcion(){
	printf("\n********************************\n");
	printf("1 . Mostrar tu nombre.\n");
	printf("2 . Mostrar tu edad.\n");
	printf("3 . Mostrar tu direccion.\n");
	printf("0 . Salir.\n");
	printf("********************************\n");
	int opcion=0;
	printf("Elija una opcion: ");
	fflush(stdin);
	scanf("%d",&opcion);
	fflush(stdin);
	return opcion;
}

char* devolverCadena(char * cadena){
	if ((strlen(cadena)>0) && (cadena[strlen(cadena)-1]=='\n'))
		cadena[strlen(cadena)-1]='\0';
	return cadena;
}

