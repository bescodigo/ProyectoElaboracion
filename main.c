#include <stdio.h>
#include <stdlib.h>
#include "calcularCantidades.h"
#include "capturarDatos.h"



void main() {
	
	
	int opcion=0;
	
	
	while(opcion!=5){
	
		float kBaston=0;
		char tipoPan='-';
		int cantidadPanes=0;
		opcion=0;
		
		
		menu(&opcion);
		
		if(opcion==1){
		//	Calcular cantidad de kilos por panes ingresados y tipo.
		
			capturaCantidadPan(&cantidadPanes);
			capturaTipo(&tipoPan);
			
			kBaston = cuantosKilos(cantidadPanes , tipoPan);
		
			printf("Cantidad de panes: |%iu|\nPanes tipo: |%c|\nPeso de masa total: |%.3fg|\n",cantidadPanes, tipoPan,kBaston );
			system("pause");
		
		}else if(opcion==2){
		//	Calcular cantidad de panes por kilos de masa ingresado y tipo.
			capturaPeso(&kBaston);
			
			capturaTipo(&tipoPan);
		
			cantidadPanes = cuantosPanes(kBaston, tipoPan);
		
			printf("Peso del Baston : |%.3fg|\nPanes tipo: |%c|\nCantidad de panes: |%iu|\n",kBaston, tipoPan, cantidadPanes);
			
			system("pause");
		
		}else if(opcion==3){
			//	Calcular cantidad de panes por kilos de masa sobrante y tipo.
			
			capturaPeso(&kBaston);
			
			capturaCantidadPan(&cantidadPanes);
			capturaTipo(&tipoPan);
			
			restoBaston(kBaston, cantidadPanes, tipoPan);
			system("pause");
			
		}
		
		
		
	
	}
	




}


































