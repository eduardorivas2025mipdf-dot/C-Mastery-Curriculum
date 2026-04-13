#include <stdio.h>

int main(){
    int edad;
    float estatura;
    int es_apto;

    printf("Ingrese edad: ");
    scanf("%d", &edad);
    printf("Ingrese estatura (metros): ");
    scanf("%f", &estatura);

    // Aqui es donde usamos operadores relacionales y logicos

    es_apto = (edad >= 18) && (estatura > 1.50);

    printf("\nResultado de aptitud (1=Si, 0=NO): %d\n", es_apto);

    return 0;
}