/**
 * Objetivo: Practicar la relación entre int y float con constantes.
 * Define una constante PRECIO_LITRO de 1.25.
 * Pide al usuario cuántos dólares quiere cargar.
 * Calcula cuántos litros recibirá (Dólares / Precio).
 * Muestra el resultado: "Usted recibirá %.2f litros por sus $%d dólares".
   (Ojo: Los dólares son enteros, los litros son decimales).
*/

#include <stdio.h>

int main(){
    const float PRECIO_LITRO = 1.25;
    float litros;
    int dolares;

    printf("Introduzca la cantidad de dolares que desea cargar: ");
    scanf("%d", &dolares);

    litros = dolares / PRECIO_LITRO;

    printf("\nUsted recibirá %.2f litros por sus $%d dólares\n", litros, dolares);

    return 0;

}