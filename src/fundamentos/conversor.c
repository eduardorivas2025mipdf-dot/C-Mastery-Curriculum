/*
 * programa_conversor.c
 * Descripción: Convertidor de Grados Celsius a grados Farenheit
 * Autor: Eduardo Rivas
 * Fecha: 14/04/2026
 */

#include <stdio.h>

int main(){
    float grados_celsius;
    float grados_farenheit;

    printf("Introduzca los grados celsius a convertir: ");
    scanf("%f", &grados_celsius);

    grados_farenheit = (grados_celsius * 1.8) + 32;

    printf("%.1f grados celsius equivalen a %.1f grados farenheit\n", grados_celsius, grados_farenheit);

    return 0;
    
}

