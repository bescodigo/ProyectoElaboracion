


void capturaHarina(float *Harina, float * vStock, int indiceH){
	
	printf("Ingrese cantidad de harina: \n");
	
	*Harina = in_float();
	printf("Harina ingresada: %.0f\n",*Harina);
	
	*(vStock+indiceH)  = *Harina;
	printf("stock harina: %.0f\n", *(vStock+indiceH));
	
	
	pauseClear();
	
}


void capturaMargarina(float *Margarina, float * vStock, int indiceM){
	
	printf("Ingrese cantidad de harina: \n");
	
	*Margarina = in_float();
	printf("Margarina ingresada: %.0f\n",*Margarina);
	
	*(vStock+indiceM)  = *Margarina;
	printf("stock Margarina: %.0f\n", *(vStock+indiceM));
	
	
	pauseClear();
	
}


void capturaAzucar(float *Azucar, float * vStock, int indiceA){
	
	printf("Ingrese cantidad de harina: \n");
	
	*Azucar = in_float();
	printf("Azucar ingresada: %.0f\n",*Azucar);
	
	*(vStock+indiceA)  = *Azucar;
	printf("stock Azucar: %.0f\n", *(vStock+indiceA));
	
	
	pauseClear();
	
}


void capturaLevadura(float *Levadura, float * vStock, int indiceL){
	
	printf("Ingrese cantidad de harina: \n");
	
	*Levadura = in_float();
	printf("Levadura ingresada: %.0f\n",*Levadura);
	
	*(vStock+indiceL)  = *Levadura;
	printf("stock Levadura: %.0f\n", *(vStock+indiceL));
	
	
	pauseClear();
	
}



void capturaSal(float *Sal, float * vStock, int indiceS){
	
	printf("Ingrese cantidad de harina: \n");
	
	*Sal = in_float();
	printf("Sal ingresada: %.0f\n",*Sal);
	
	*(vStock+indiceS)  = *Sal;
	printf("stock Sal: %.0f\n", *(vStock+indiceS));
	
	
	pauseClear();
	
}




void guardaStock(float *vStock){
	
	
	// Tiempo actual
	time_t t = time(NULL);
	struct tm tiempoLocal = *localtime(&t);
	
	// El lugar en donde se pondrá la fecha y hora formateadas
	char fechaHora[70];  
	
	// El formato. Mira más en https://en.cppreference.com/w/c/chrono/strftime
	char *formato = "stock_%Y-%m-%d";
	
	// Intentar formatear
	int bytesEscritos = strftime(fechaHora, sizeof fechaHora, formato, &tiempoLocal);
	
	if (bytesEscritos != 0) {
	  	// Si no hay error, los bytesEscritos no son 0
	  	printf("Fecha y hora: %s\n", fechaHora);
	} else {
	  	printf("Error formateando fecha");
	}
	
	
	FILE *fptr=NULL;
	
	fptr= fopen("STOCK.txt","w");
	
	if(fptr!=NULL){
		fprintf(fptr,"%s\n", fechaHora);	
		int i;
		for(i=0;i<=4;i++){
			fprintf(fptr,"%.0f\n", *(vStock+i));	
		}
		printf("\nExito al guardar.\n");
		pauseClear();
	}else{
		printf("\nError al guardar.\n");
		pauseClear();
	}
	
	fclose(fptr);
}

































