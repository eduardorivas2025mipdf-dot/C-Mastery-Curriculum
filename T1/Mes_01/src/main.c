#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int main(void) {
    printf("=== EXPLORADOR DE SISTEMA ===\n");
    
    // %zu es el formato correcto para size_t (tamaños)
    printf("Un char ocupa:   %zu byte\n", sizeof(char));
    printf("Un int ocupa:    %zu bytes\n", sizeof(int));
    printf("Un double ocupa: %zu bytes\n", sizeof(double));
    printf("Un ptr ocupa:    %zu bytes\n", sizeof(void*));
    
    printf("\n=== LÍMITES DE ENTEROS ===\n");
    printf("Max Int: %d\n", INT_MAX);
    printf("Min Int: %d\n", INT_MIN);

    return 0;
}