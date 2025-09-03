#include <stdio.h>
#include <math.h>
#define pi 3.14

float calcularAreaCirculo (float rad);

float calcularPerimetroCirculo (float rad);

float calcularAreaRectangulo (float alto, float ancho);

float calcularPerimetroRectangulo (float alto, float ancho);

float calcularDiagonalRectangulo (float alto, float ancho);

void imprimirResultado (float resarea, float resper, float resdiag);



int main()
{
	int fig;
	float rad, alto, ancho, resarea, resper, resdiag = 0;
	
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
		
		resarea = calcularAreaRectangulo (alto, ancho);
		resper = calcularPerimetroRectangulo (alto, ancho);
		resdiag = calcularDiagonalRectangulo (alto, ancho);
		
		break;
		
	case 2: 
		
		printf("\n----------------------------------------------\n");
		printf("\nIngrese su radio (Utilice punto sino es entero): ");
		scanf("%f", &rad);
		
		resarea = calcularAreaCirculo (rad); 
		resper = calcularPerimetroCirculo (rad);
		
		break;
	}
	
	imprimirResultado (resarea, resper, resdiag);
	
	return 0;
}



float calcularAreaCirculo (float rad)
{
	float resarea;
	resarea = (rad * rad) * pi;
	return resarea;
}

float calcularPerimetroCirculo (float rad)
{
	float resper;
	resper = 2 * pi * rad;  
	return resper;
}

float calcularAreaRectangulo (float alto, float ancho)
{
	float resarea;
	resarea = alto * ancho;
	return resarea;
}

float calcularPerimetroRectangulo (float alto, float ancho)
{
	float resper;
	resper = alto * 2 + ancho * 2;
	return resper;
}

float calcularDiagonalRectangulo (float alto, float ancho)
{
	float resdiag = 0;
	resdiag = sqrt((alto*alto) + (ancho*ancho));
	return resdiag;
}

void imprimirResultado (float resarea, float resper, float resdiag)
{
	printf("\nEl Area es de: %f \n", resarea);
	printf("El Perimetro es de: %f \n", resper);
	
	if (resdiag != 0)
		printf("La diagonal de: %f \n", resdiag);	
}

