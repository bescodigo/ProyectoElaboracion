




void menuInicio(int *opcion){
	
	printf("-------------------MENU-INICIO---------------------\n");
	printf("\n\n\tIngrese Opcion: \n");
	printf("\t1 - Produccion.\n");
	printf("\t2 - Stock.\n");
	printf("\t3 - Salir.\n");
	printf("--------------------------------------------\n");

	*opcion = in_int();
	system("cls");
}


void menuProduccion(int *opcion){
	
	printf("-------------------MENU-PRODUCCION--------------------\n");
	printf("\n\n\tIngrese Opcion: \n");
	printf("\t1 - Cuantos kilos por pan.\n");
	printf("\t2 - Cuantos panes por kilo.\n");
	printf("\t3 - Elaboracion: baston y resto.\n");
	printf("\t4 - Menu Inicio.\n");
	printf("--------------------------------------------\n");
	
	*opcion = in_int();
	system("cls");
}


void menuStock(int *opcion){
	
	printf("-------------------MENU-STOCK--------------------\n");
	printf("\n\n\tIngrese Opcion: \n");
	printf("\t1 - Ingresar Harina.\n");
	printf("\t2 - Guardar Stock.\n");
	printf("\t3 - Menu Inicio.\n");
	printf("--------------------------------------------\n");
	
	*opcion = in_int();
	system("cls");
}







































