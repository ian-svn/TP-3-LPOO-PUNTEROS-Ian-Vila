/*
5.  Concatenar dos cadenas usando punteros y funciones.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void concatenar(char frase1[],int *dim1, char frase2[], int *dim2);

int main(){
	int operacion, dim1, dim2;
	char frase1[30], frase2[30];
	
	do{	
		dim1=0;
		dim2=0;
	
		printf("\n\n\t\t Ingres ela primera frase: ");
		fflush(stdin);
		gets(frase1);
		fflush(stdin);
		
		printf("\n\n\t\t Ingres ela segunda frase: ");
		fflush(stdin);
		gets(frase2);
		fflush(stdin);
		
		dim1 = strlen(frase1);
		dim2 = strlen(frase2);
		
		concatenar(frase1, &dim1, frase2, &dim2);
		
		printf("\n\n\t\t Ingrese el numero '1' si quiere iniciar nuevamente el programa... ");
		operacion = getch();
		
		system("cls");
		
	}while(operacion=='1');	
	
	printf("\n\n\t\t\t\t Espero que el prograna le haya sido util saludos Ian Vila \n\n");
	
}

void concatenar(char frase1[],int *dim1, char frase2[], int *dim2){
	int x,y,z=0;
	char vectorCombinado[50];
	
	int dim = *dim1+*dim2;
	
	for(x=0;x<*dim1;x++){
		*(vectorCombinado+x) = *(frase1+x);
	}
	for(y=x;y<dim;y++,z++){
		*(vectorCombinado+y) = *(frase2+z);
	}
	
	printf("\n\t\t así queda la frase concatenada: %s", vectorCombinado);
}


