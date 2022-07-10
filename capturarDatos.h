






void capturaCantidadPan(int *cantidadPanes){
	
		printf("Ingrese cantidad de panes.\n");
		*cantidadPanes = int_in();
		printf("--------------------------------------------\n");
	
}

void capturaTipo(char *tipoPan){

	printf("Ingrese tipo de pan \n'g'(Burguer Grande)\n'c'(Chico)\n'l'(Lomo).\n");
	*tipoPan = char_in();
	printf("--------------------------------------------\n");

}

void capturaPeso(float *peso){
	printf("Ingrese peso del Baston.\n");
	*peso = float_in();
	printf("--------------------------------------------\n");
}






void produccion(){
	
	int opcion=0;
	
	while(opcion!=4){
	
		float kBaston=0;
		char tipoPan='-';
		int cantidadPanes=0;
		opcion=0;
		
		
		menuProduccion(&opcion);
		
		if(opcion==1){
		//	Calcular cantidad de kilos por panes ingresados y tipo.
		
			capturaCantidadPan(&cantidadPanes);
			capturaTipo(&tipoPan);
			
			kBaston = cuantosKilos(cantidadPanes , tipoPan);
		
			printf("Cantidad de panes: |%iu|\nPanes tipo: |%c|\nPeso de masa total: |%.3fg|\n",cantidadPanes, tipoPan,kBaston );
			pauseClear();
		
		}else if(opcion==2){
		//	Calcular cantidad de panes por kilos de masa ingresado y tipo.
			capturaPeso(&kBaston);
			
			capturaTipo(&tipoPan);
		
			cantidadPanes = cuantosPanes(kBaston, tipoPan);
		
			printf("Peso del Baston : |%.3fg|\nPanes tipo: |%c|\nCantidad de panes: |%iu|\n",kBaston, tipoPan, cantidadPanes);
			pauseClear();
		}else if(opcion==3){
			//	Produccion (restar de stock) y
			//	Calcular cantidad de panes por kilos de masa sobrante y tipo.
			
			capturaPeso(&kBaston);
			
			printf("\nRestar de Stock? s/n");
			char op = char_in();
			(op=='s')?restarStock(&kBaston):printf("NO se resto del stock.");
			
			capturaCantidadPan(&cantidadPanes);
			capturaTipo(&tipoPan);
			
			restoBaston(kBaston, cantidadPanes, tipoPan);
			pauseClear();
		}
		
		
		
	
	}
	
}































