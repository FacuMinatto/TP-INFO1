#include <stdio.h>

int main(void)
{
float peso;
float altura;
float BMI;

    printf("Esta es una calculadora de indice de masa corporal\n");
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    
    printf("Ahora coloque su estatura en metros: ");
    scanf("%f", &altura);
    
    BMI = peso / (altura * altura);
    
    printf("Su BMI o indice de masa corporal es de %.2f\n\n", BMI);
    
	printf("Indice - condición \n"); 
	printf("------------------\n"); 
	printf("<18.5 - Bajo peso\n");
	printf("18.5 a 24.9 - Normal\n");
	printf("25.0 a 29.9 - Sobrepeso \n");
	printf(">=30 - Obesidad\n\n");
    return 0;
}
