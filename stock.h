void restarStock(float *kBaston){
	
	float Harina= 0.56 * (*kBaston);
	float Margarina =0.05 * (*kBaston);
	float Azucar =0.05 * (*kBaston);
	float Levadura =0.04 * (*kBaston);
	float Sal=0.016 * (*kBaston);
	float vStock[6]={};
	int indiceH=0;
	int indiceM=1;
	int indiceA=2;
	int indiceL=3;
	int indiceS=4;
	*(vStock+indiceH) = Harina;
	printf("valor harina: %f",*(vStock+indiceH));
	*(vStock+indiceM) = Margarina;
	printf("valor margarina: %f",*(vStock+indiceM));
	*(vStock+indiceA) = Azucar;
	printf("valor azucar %f",*(vStock+indiceA));
	*(vStock+indiceL) = Levadura;
	printf("valor levadura: %f",*(vStock+indiceL));
	*(vStock+indiceS) = Sal;
	printf("valor sal: %f", *(vStock+indiceS));
	pauseClear();
	guardaStock(vStock);
}


void stock(){
	
	float Harina=0;
	float Margarina =0;
	float Azucar =0;
	float Levadura =0;
	float Sal=0;
	int indiceH=0;
	int indiceM=1;
	int indiceA=2;
	int indiceL=3;
	int indiceS=4;
	float vStock[6]={};
	
	int opcion = 0;
	
	while(opcion!=7){
		
		char stock[50]={};
		char * tok;
		int i=0;
	
		FILE *fptr=NULL;
		fptr= fopen("STOCK.txt","r");
			
		fgets(stock, 50, fptr);
		tok = strtok(stock, ",");
		while(tok!=NULL){
			if(i==0)Harina=atof(tok);
			if(i==1)Margarina=atof(tok);
			if(i==2)Azucar=atof(tok);
			if(i==3)Levadura=atof(tok);
			if(i==4)Sal=atof(tok);
			i+=1;
			tok = strtok(NULL, ",");
		}
		fclose(fptr);
		printf("\nHarina: %f",Harina);
		printf("\nMargarina: %f",Margarina);
		printf("\nAzucar: %f",Azucar);
		printf("\nLevadura: %f",Levadura);
		printf("\nSal: %f",Sal);
	
		menuStock(&opcion);
			
		if(opcion==1){
			capturaHarina(&Harina, vStock, indiceH);
		}else if(opcion==2){
			capturaMargarina(&Margarina, vStock, indiceM);
		}else if(opcion==3){
			capturaAzucar(&Azucar, vStock, indiceA);
		}else if(opcion==4){
			capturaLevadura(&Levadura, vStock, indiceL);
		}else if(opcion==5){
			capturaSal(&Sal, vStock, indiceS);
		}else if(opcion==6){
			guardaStock(vStock);
		}
		
	}
	
	
}


































