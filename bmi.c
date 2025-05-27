#include <stdio.h>

int main(void) {
	
float peso;
float altura;
float BMI;

    printf("Esta es una calculadora de indice de masa corporal\n");
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);
    
    printf("Ahora coloque su estatura en metros: ");
    scanf("%f", &altura);
    
    BMI = peso / (altura * altura);
    
    printf("Su BMI o indice de masa corporal es de %.2f", BMI);
    
    if (BMI <= 18.5)
    printf(", esto indica que tiene bajo peso");
    
    if (18.5 < BMI && BMI < 24.9)
      printf(", esto indica que su condicion es normal");
    
    if (25 < BMI && BMI < 29.9)
      printf(", esto indica que tiene sobrepeso");
    
    if (30 <= BMI)
    printf(", esto indica que usted tiene obesidad");
    
    return 0;
}
