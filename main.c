#include <stdio.h>
#include <stdlib.h>
#include "beslib.h"
#include "menus.h"
#include "calcularCantidades.h"
#include "capturarDatos.h"
#include "capturarStock.h"
#include "stock.h"




void main() {
	
	
	int opcion=0;
	
	while(opcion!=3){
		
		menuInicio(&opcion);
	
		if(opcion==1){
			produccion();
		}else if(opcion==2){
			stock();
		}
	
	
	}
	
	




}


































