#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "beslib.h"
#include "menus.h"
#include <time.h>
#include "calcularCantidades.h"
#include "capturarStock.h"
#include "stock.h"
#include "capturarDatos.h"




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


































