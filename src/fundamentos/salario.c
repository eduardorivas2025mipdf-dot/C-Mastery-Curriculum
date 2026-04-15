/*
 * programa_salario.c
 * Descripción: programa para determinar el impuesto sobre el salario bruto
 * Autor: Eduardo Rivas
 * Fecha: 15/04/2026
 */

//TAREA:

/*Define una constante IMPUESTO de 0.10 (10%).
 *Pide el salario bruto mensual.
 *Calcula el monto del impuesto y el salario neto (Salario Bruto - Impuesto).
 *Muestra: "Su descuento es de: [valor]" y "Su salario final es: [valor]".*/

const float IMPUESTO = 0.10;

#include <stdio.h>
int main(){
    float salario_bruto;
    float descuento;
    float salario_neto;

    // Paso 1: solcitamos al usuaio el salario bruto mensual
    printf("Introduzca su Salario Bruto Mensual: ");
    scanf("%f", &salario_bruto);

    // Paso 2: Calculo del monto del impuesto y el salario neto(Salario Bruto - Impuesto).
    descuento = salario_bruto * IMPUESTO;
    salario_neto = salario_bruto - descuento;

    // Presentación de resultados
    printf("Su descuento es de: %.2f y su salario final es de %.2f", descuento, salario_neto);

    return 0;

}


