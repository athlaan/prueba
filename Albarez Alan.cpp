#include <stdio.h>
#include <stdlib.h>


int main(void){
	
	int Vianda;					// 1 = Vegetales, 2 = Carne, 3 = Pescado o Frutas
	int precios[] = {500, 1500, 1200};
	int Operador;
	int Cantidad;
	int CantidadTotal = 0;	
	int precio = 0;
	int VentaDeVegetales = 0;
	int VentaDeCarne = 0;
	int VentaDePescadoOFrutas = 0;

		//Insertar Operador, Cantidad y la vianda
	do{
		
	printf("Ingrese Numero de Operador: ");
	scanf("%d", &Operador);
	
	printf("Ingrese Cuanto Vendio: ");
	scanf("%d", &Cantidad);
	
	if(Cantidad >= 4){				//Cantidad de ventas que Superan las 4 unidades
		CantidadTotal++;
	}

	
	
	printf("Ingrese La vianda que vendio: ");
	scanf("%d", &Vianda);
	
	
	// En Esta parte, el usuario al ingresar uno de los 3, lo que hara es. Agarrar la posicion del array y sumarle lo que esta en esa posicion

	switch(Vianda){
		
		case 1: {
				
				VentaDeVegetales += precios[Vianda - 1];
			break;
		}
			
		case 2:{
				
				VentaDeCarne += precios[Vianda - 1];
			break;
		} 	
				
		case 3: {
				
				VentaDePescadoOFrutas += precios[Vianda - 1];
			break;
		}
	}
			
	
	printf("-------------------------------\n");
	
	} while(Operador != 0);								// Si ingresa 0 en vez de 1,2,3,4,5,6,7. El programa finaliza con el texto "Ingrese un operador Existente"
		printf("Ingrese Un Operador Existente\n");
				
		//Mostrar Cantidad de Ventas que superan las 4 unidades.
	printf("Cantidad de ventas que superan las 4 unidades: %d\n", CantidadTotal);
	
	//Mostrar Ganancias de las Viandas
	
	printf("La Ganancia de Tipo de Vianda de Vegetales: %d\n", VentaDeVegetales);
	printf("La Ganancia de Tipo de Vianda de Carne: %d\n", VentaDeCarne);
	printf("La Ganancia de Tipo de Vianda de Pescado o Frutas: %d\n", VentaDePescadoOFrutas);
	
	// Cantidad de Viandas vendidas por el operador
	
	
	
	
}


	
