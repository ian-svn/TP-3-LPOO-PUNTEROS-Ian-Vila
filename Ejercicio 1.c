/*
1.  Intercambiar el valor de dos variables usando punteros y funciones.
	Mostrando los valores iniciales y valores finales.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void intercambio(int *num1, int *num2);


int main(){
	int num1, num2, operacion;
	
	do{
		
		printf("\n\n\t\tIngrese priner numero: ");
		scanf("%d",&num1);
		
		printf("\n\n\t\tIngrese segundo numero: ");
		
		scanf("%d",&num2);
	
		printf("\n\n\t\t El numero 1 es asi: %d y el numero 2 asi: %d",num1,num2);
	
		intercambio(&num1,&num2);
	
		printf("\n\n\t\tEl numero 1 es asi: %d y el numero 2 asi: %d",num1,num2);
		
		printf("\n\n\t\t Ingrese el numero '1' si quiere iniciar nuevamente el programa... ");
		operacion = getch();
		
		system("cls");
		
	}while(operacion=='1');	
	
	printf("\n\n\t\t\t\t Espero que el prograna le haya sido util saludos Ian Vila \n\n");
	
}

void intercambio(int *num1, int *num2){
	int aux;
	
	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}
