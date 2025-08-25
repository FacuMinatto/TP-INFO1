#include <stdio.h>

int main(void) {

    float cal;

    printf("Ingrese su calificación: ");
    scanf("%f", &cal);

    if (cal >= 90) {
        printf("Calificación: A");
    }
    else if (cal >= 80 && cal < 90) {
        printf("Calificación: B");
    }
    else if (cal >= 70 && cal < 80) {
        printf("Calificación: C");
    }
    else if (cal >= 60 && cal < 70) {
        printf("Calificación: D");
    }
    else {
        printf("Calificación: F");
    }

return 0;
}
