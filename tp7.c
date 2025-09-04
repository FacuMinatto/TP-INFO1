#include <stdio.h>
#define M 5

int main(void) {

	int cod[M];
	float pre[M];
	float maxpre = 0;	
	float minpre = 999999999;
	int maxcod;
	int mincod;
	
	
	printf("Ingrese 5 productos, se solicitará el código y precio.\n\n");
	
	for (int i = 0; i < M; i++){
	
		printf("Ingrese el código de barras (1-999999999): ");
		scanf("%d", &cod[i]);
		
		while (cod[i] < 1 || cod[i] > 999999999){
			
			printf("\nIngrese un valor dentro del rango permitido.\n\n");
			
			printf("Ingrese el código de barras (1-999999999): ");
			scanf("%d", &cod[i]);
		}
		
		printf("Ingrese el precio: ");
		scanf("%f", &pre[i]);
		
		while (pre[i] < 0){
			
			printf("\nIngrese un valor del precio positivo.\n\n");
			
			printf("Ingrese el precio: ");
			scanf("%f", &pre[i]);
		}
		
		if (maxpre < pre[i]){
			
			maxpre = pre[i];
			maxcod = cod[i];
		}
		
		if (minpre > pre[i]){
			
			minpre = pre[i];
			mincod = cod[i];
		}
	}
	
	printf("\n\nCodigos			Precios\n\n");
	
	for (int i = 0; i < M; i++){
		
		printf("%d			%.2f\n\n", cod[i], pre[i]);
	}
	
	printf("\nMas caro: [%d] $%.2f\n", maxcod, maxpre);
	printf("Mas barato: [%d] $%.2f\n", mincod, minpre);
	
	return 0;
}

