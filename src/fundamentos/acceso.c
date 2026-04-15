/*
 * programa_acceso.c
 * Descripción: programa para determinar acceso a una discoteca
 * Autor: Eduardo Rivas
 * Fecha: 14/04/2026
 */

#include <stdio.h>

const int EDAD_MINIMA = 18;

int main(){
    
    int edad;
    int tiene_invitacion;
    int puede_entrar;

    printf("--- CONTROL DE ACCESO ---\n");

    // Paso 1: Pedir la edad
    printf("Por favor introduzca su edad: ");
    scanf("%d", &edad);

    // Paso 2: Pedir la invitación
    printf("Tiene invitación? (1 para SI / 0 Para NO):");
    scanf("%d", &tiene_invitacion);

    // Paso 3: Evaluar la lógica
    // Usamos || (OR) porque si se cumple una de las dos condiciones
    puede_entrar = (edad >= EDAD_MINIMA) || (tiene_invitacion == 1);

    printf("\nResultado de acceso (1 = Permitido, 0 = Denegado): %d\n", puede_entrar);

    return 0;

}