#include <stdio.h>
#include <stdlib.h>

void menu(int *opcion){
	system("cls");
	printf("-------------------MENU---------------------\n");
	printf("\n\n\tIngrese Opcion: \n");
	printf("\t1 - Cuantos kilos por pan.\n");
	printf("\t2 - Cuantos panes por kilo.\n");
	printf("\t3 - Elaboracion: baston y resto.\n");
	printf("\t4 - Stock Elaboracion.\n");
	printf("\t5 - Salir.\n");
	scanf("%i",opcion);
	fflush(stdin);
	printf("--------------------------------------------\n");
}



void capturaCantidadPan(int *cantidadPanes){
	
		printf("Ingrese cantidad de panes.\n");
		scanf("%i",cantidadPanes);
		fflush(stdin);
		printf("--------------------------------------------\n");
	
}

void capturaTipo(char *tipoPan){

	printf("Ingrese tipo de pan \n'g'(Burguer Grande)\n'c'(Chico)\n'l'(Lomo).\n");
	scanf("%c",tipoPan);
	fflush(stdin);
	printf("--------------------------------------------\n");

}

void capturaPeso(float *peso){
	printf("Ingrese peso del Baston.\n");
	scanf("%f",peso);
	fflush(stdin);
	printf("--------------------------------------------\n");
}



































