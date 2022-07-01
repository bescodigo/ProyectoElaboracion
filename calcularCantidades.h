#include <stdio.h>
#include <stdlib.h>





float cuantosKilos(int cantidadPanes , int tipoPan){
	float grandes=0.125;
	float chicos=0.080;
	float lomo=0.185;
	
	switch(tipoPan){
		
		case 'g':
			return grandes * cantidadPanes;
			break;
		case 'c':
			return chicos * cantidadPanes;
			break;
		case 'l':
			return lomo * cantidadPanes;
			break;
		default:
			printf("-> error...");
			return 0;
			break;
	}
}


int cuantosPanes(float kBaston, char tipoPan){
	
	int grandes=8;
	int chicos=12;
	int lomo=6;
	
	switch(tipoPan){
		
		case 'g':
			return grandes * kBaston;
			break;
		case 'c':
			return chicos * kBaston;
			break;
		case 'l':
			return lomo * kBaston;
			break;
		default:
			printf("-> error...");
			return 0;
			break;
	}
	
}


void restoBaston(float kBaston ,int cantidadPanes , int tipoPan){
	
	float grandes=0.125;
	float chicos=0.080;
	float lomo=0.185;
	
	float baston;
	float bastonSobrante=0;
	
	switch(tipoPan){
		
		case 'g':
			baston = grandes * cantidadPanes;
			printf("Peso de masa utilizada: %.3fkg\n",baston);
			
			bastonSobrante = kBaston-baston;
			printf("Peso de masa sobrante: %.3fkg\n",bastonSobrante);
			
			printf("*** Elaboracion posible con sobrante: ***\n");
			
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Grandes: |%iu|\n",cantidadPanes);
			
			tipoPan = 'c';
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Chicos : |%iu|\n",cantidadPanes);
			
			tipoPan = 'l';
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Lomo: |%iu|\n",cantidadPanes);
			break;
		case 'c':
			baston = chicos * cantidadPanes;
			printf("Peso de masa utilizada: %.3fkg\n",baston);
			
			bastonSobrante = kBaston-baston;
			printf("Peso de masa sobrante: %.3fkg\n",bastonSobrante);
			
			printf("*** Elaboracion posible con sobrante: ***\n");
			
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Chicos : |%iu|\n",cantidadPanes);
			
			tipoPan = 'g';
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Grandes: |%iu|\n",cantidadPanes);
			
			tipoPan = 'l';
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Lomo: |%iu|\n",cantidadPanes);
			break;
		case 'l':
			baston = lomo * cantidadPanes;
			printf("Peso de masa utilizada: %.3fkg\n",baston);
			
			bastonSobrante = kBaston-baston;
			printf("Peso de masa sobrante: %.3fkg\n",bastonSobrante);
			
			printf("*** Elaboracion posible con sobrante: ***\n");
			
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Lomo: |%iu|\n",cantidadPanes);
			
			tipoPan = 'c';
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Chicos : |%iu|\n",cantidadPanes);
			
			tipoPan = 'g';
			cantidadPanes = cuantosPanes(bastonSobrante, tipoPan);
			printf("Grandes: |%iu|\n",cantidadPanes);
			
			break;
		default:
			printf("-> error...");
			break;
	}
	
}
/*
//UN MENSAJE QUE TIRE LO QUE SOBRA DE MASA EL OPCION 2. LO HAGO ACA PARA NO TOCAR LE CODIGO.
void masaSobrante(float *Kbaston, char *tipoPan){
	int grandes=8;
	int chicos=12;
	int lomo=6;
	float sobranteMasa = ;
	
}

nt cuantosPanes(float kBaston, int tipoPan){
	
	int grandes=8;
	int chicos=12;
	int lomo=6;
	
	switch(tipoPan){
		
		case 'g':
			return grandes * kBaston;
			break;
		case 'c':
			return chicos * kBaston;
			break;
		case 'l':
			return lomo * kBaston;
			break;
		default:
			printf("-> error...");
			return 0;
			break;
	}
	
}

*/
















