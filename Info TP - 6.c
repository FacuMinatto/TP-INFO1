#include <stdio.h>
#include <math.h>
#define pi 3.14

float rad, resarea, resper, alto, ancho, resdiag; 

void calcularAreaCirculo (float rad);

void calcularAreaCirculo (float rad)
{
	resarea = (rad * rad) * pi;
}

void calcularPerimetroCirculo (float rad);

void calcularPerimetroCirculo (float rad)
{
	resper = 2 * pi * rad;  
}

void calcularAreaRectangulo (float alto, float ancho);

void calcularAreaRectangulo (float alto, float ancho)
{
	resarea = alto * ancho;
}

void calcularPerimetroRectangulo (float alto, float ancho);

void calcularPerimetroRectangulo (float alto, float ancho)
{
	resper = alto * 2 + ancho * 2;
}

void calcularDiagonalRectangulo (float alto, float ancho);

void calcularDiagonalRectangulo (float alto, float ancho)
{
	resdiag = sqrt((alto*alto) + (ancho*ancho));
}

void imprimirResultado (void);

void imprimirResultado (void)
{
	printf("\nEl Area es de: %f \n", resarea);
	printf("El Perametro es de: %f \n", resper);
}


int main()
{
	int fig;
	
	printf("Bienvenido a la calculadora de Area y perimetro!\n");
	printf("¿Que figura desea calcular?\n\n");
	printf("| 1 | Rectangulo.\n| 2 | Circulo.\n\n");
	scanf("%d", &fig);
	
	while (fig < 1 || fig > 2){
		
		printf("\nIngrese un valor dentro del rango permitido.\n");
		printf("\n----------------------------------------------\n");
		printf("\n¿Que figura desea calcular?\n\n");
		printf("| 1 | Rectangulo.\n| 2 | Circulo.\n\n");
		scanf("%d", &fig);
		
	}
	
	switch(fig){
		
	case 1:
		
		printf("\n----------------------------------------------\n");
		printf("\nUsted selecciono la opción del rectangulo.\n\n");
		printf("(Utilice punto sino es entero)\n");
		printf("Ingrese su alto: ");
		scanf("%f", &alto);
		printf("Ingrese su ancho: ");
		scanf("%f", &ancho);
		
		calcularAreaRectangulo (alto, ancho);
		calcularPerimetroRectangulo (alto, ancho);
		calcularDiagonalRectangulo (alto, ancho);
		
		break;
		
	case 2: 
		
		printf("\n----------------------------------------------\n");
		printf("\nIngrese su radio (Utilice punto sino es entero): ");
		scanf("%f", &rad);
		
		calcularAreaCirculo (rad); 
		calcularPerimetroCirculo (rad);
		
		break;
		
	}
	
	imprimirResultado();
	
	return 0;
}
