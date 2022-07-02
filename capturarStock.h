


float Margarina =0;
float Azucar =0;
float Levadura =0;
float Sal=0;


void capturaHarina(float *Harina, float * vHarina, int indiceH){
	
	printf("Ingrese cantidad de harina: \n");
	
	*Harina = in_float();
	printf("Harina ingresada: %.0f\n",*Harina);
	
	*(vHarina+indiceH)  = *Harina;
	printf("stock harina: %.0f\n", *(vHarina+indiceH));
	
	
	system("pause");
	system("cls");
	
}
void guardaStock(float *vStock){
	
	FILE *fptr=NULL;
	
	fptr= fopen("stockHarina.txt","w");
	
	if(fptr!=NULL){
		fprintf(fptr,"%.0f\n", *(vStock+0));
		printf("\nExito al guardar.\n");
		pauseClear();
	}else{
		printf("\nError al guardar.\n");
		pauseClear();
	}
	fclose(fptr);
}

































