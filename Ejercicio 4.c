/*
4.  Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
	el resultado final.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void copiar(char frase1[],int *dim1, char frase2[], int *dim2);

int main(){
	int operacion, dim1, dim2;
	char frase1[30], frase2[30];
	
	do{	
		printf("\n\n\t\t Programa para copiar un vector dentro de otro");
		
		printf("\n\t\t\ Ingrese la primera palabara: ");
		fflush(stdin);
		gets(frase1);
		fflush(stdin);
		
		printf("\n\t\t\ Ingrese la segunda palabara: ");
		fflush(stdin);
		gets(frase2);
		fflush(stdin);
		
		dim1 = strlen(frase1);
		dim2 = strlen(frase2);
		
		copiar(frase1, &dim1, frase2, &dim2);
		
		printf("\n\n\t\t Ingrese el numero '1' si quiere iniciar nuevamente el programa... ");
		operacion = getch();
		
		system("cls");
		
	}while(operacion=='1');	
	
	printf("\n\n\t\t\t\t Espero que el prograna le haya sido util saludos Ian Vila \n\n");
	
}

void copiar(char frase1[],int *dim1, char frase2[], int *dim2){
	int x;
	
	for(x=0;x<*dim2;x++){
		*(frase2+x) = *(frase1+x);
	}
	
	printf("\n\t\t así queda la primera frase ingresada: %s",frase1);
	printf("\n\t\t así queda la segunda frase ingresada: %s",frase1);
}


