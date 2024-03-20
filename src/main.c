#include <stdio.h>
#include "adder.h"

int main() {
    int a = 5;
    int b = 3;
    int resultado = sumar(a, b);
    printf("La suma de %d y %d es: %d\n", a, b, resultado);
    return 0;
}