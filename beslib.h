
//	BESLIB.

//	Captura y retorna un entero.
int in_int(){
	printf("int: ");
	int value;
	scanf("%i",&value);
	fflush(stdin);
	return value;	
	
}

//	Captura y retorna un float.
int in_float(){
	printf("float: ");
	float value;
	scanf("%f",&value);
	fflush(stdin);
	return value;	
	
}

//	Captura y retorna un char.
int in_char(){
	printf("char: ");
	char value;
	scanf("%c",&value);
	fflush(stdin);
	return value;	
	
}


//	Pausa y limpia consola.
void pauseClear(){
	system("pause");
	system("cls");
}



































