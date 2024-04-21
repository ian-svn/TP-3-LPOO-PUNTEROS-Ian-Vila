/*
2.  Encontrar la suma y el promedio de los elementos de un arreglo usando
	punteros y funciones.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int suma = 0;
float promedio=0;

void hallarSumaPromedio(int vector[],int *dim,int *suma, float *promedio);

int main(){
	int operacion, x=-1, dim, vector[30];
	
	do{
		x=0;
		suma = 0;
		promedio = 0;
		
		printf("\n\n\t\t Rellene el vector: \n\n\t  Aviso: Recuerde que para terminar el ingreso de numero debera ingresar un numero menor o igual a 0 \n\n");
		
		do{
			x++;
			printf("\t\t Ingrese el numero en la posicion %d: ",x);
			scanf("%d",&vector[x]);
		}while(vector[x]>0&&vector[x]<=1000);
		
		hallarSumaPromedio(vector,&x,&suma,&promedio);
		
		printf("\n\n\t\t Ingrese el numero '1' si quiere iniciar nuevamente el programa... ");
		operacion = getch();
		
		system("cls");
		
	}while(operacion=='1');	
	
	printf("\n\n\t\t\t\t Espero que el prograna le haya sido util saludos Ian Vila \n\n");
	
}

void hallarSumaPromedio(int vector[],int *dim,int *suma, float *promedio){
	int x;
	for(x=0;x<*dim;x++){
		*suma = *suma + *(vector+x);
	}
	
	*promedio =  (float)*suma / (float)(*dim-1);
	
	printf("\n\t\t La suma fue: %d y el promedio fue de: %0.2f",*suma,*promedio);
}


