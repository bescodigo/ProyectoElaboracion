


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
	
	while(opcion!=8){
	
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
			printf("\nHarina: %f",*(vStock+indiceH));
			printf("\nMargarina: %f",*(vStock+indiceM));
			printf("\nAzucar: %f",*(vStock+indiceA));
			printf("\nLevadura: %f",*(vStock+indiceL));
			printf("\nSal: %f",*(vStock+indiceS));
			pauseClear();
		}else if(opcion==7){
			guardaStock(vStock);
		}
		
	}
	
	
}


































