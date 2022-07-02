


void stock(){
	
	float Harina=0;
	int indiceH=0;
	float vStock[50]={};
	
	int opcion = 0;
	
	while(opcion!=3){
	
		menuStock(&opcion);
			
		if(opcion==1){
			capturaHarina(&Harina, vStock, indiceH);
		}if(opcion==2){
			guardaStock(vStock);
		}
		
	}
	
	
}


































