/*
3.  Encontrar el mayor y el menor elemento de un arreglo usando punteros y
	funciones.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int mayor = -99999;
int menor= 99999;

void hallarMayorMenor(int vector[],int *dim,int *mayor, int *menor);

int main(){
	int operacion, x=-1, dim, vector[30];
	
	do{
		x=-1;
		mayor = -99999;
		menor= 99999;
		
		printf("\n\n\t\t Rellene el vector: \n\n\t  Aviso: Recuerde que para terminar el ingreso de numero debera ingresar un numero menor o igual a 0 \n\n");
		
		do{
			x++;
			printf("\t\t Ingrese el numero en la posicion %d: ",x+1);
			scanf("%d",&vector[x]);
		}while(vector[x]>0&&vector[x]<=1000);
		
		hallarSumaPromedio(vector,&x,&mayor,&menor);
		
		printf("\n\n\t\t Ingrese el numero '1' si quiere iniciar nuevamente el programa... ");
		operacion = getch();
		
		system("cls");
		
	}while(operacion=='1');	
	
	printf("\n\n\t\t\t\t Espero que el prograna le haya sido util saludos Ian Vila \n\n");
	
}

void hallarSumaPromedio(int vector[],int *dim,int *mayor, int *menor){
	int x;
//	
//	printf(" dim: %d  menor: %d  mayor: %d",*dim, *menor, *mayor);
//	
//	for(x=0;x<*dim;x++){
//		printf("\n\t %d",*(vector+x));
//	}

	for(x=0;x<*dim;x++){
		if(*mayor<*(vector+x)){
			*mayor = *(vector+x);
		}
		if(*menor>*(vector+x)){
			*menor = *(vector+x);
		}
	}

	printf("\n\n\t\t El numero mayor fue: %d y numero menor fue %d", *mayor,*menor);
}


