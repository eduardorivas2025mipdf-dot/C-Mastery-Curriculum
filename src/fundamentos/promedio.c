/*
 * programa_promedio.c
 * Descripción: Programa que solicita al usuario dos numeros y entrega el promedio de su suma
 * Autor: Eduardo Rivas
 * Fecha: 18/04/2026
 */

#include <stdio.h>

int main (){
    // Declaracion de Variables
    int num_1, num_2, sum;
    float promedio;

    // Solicitud de datos al usuario
    printf("Introduzca el primer numero: ");
    scanf("%d", &num_1);

    printf("Introduzca el segundo numero: ");
    scanf("%d", &num_2);

    sum = num_1 + num_2;
    promedio = sum / 2.0;

    // Presentacion de resultados
    printf("La suma de %d y %d es %d\n", num_1, num_2, sum);
    printf("El promedio de dicha suma es: %f\n", promedio);

    return 0;


    
}