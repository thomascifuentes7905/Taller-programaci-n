#include <stdio.h>
#include "sumar.h"
#include "restar.h"

int main() {
    int a, b;
    printf("Ingrese el número ");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    printf("la suma es: %d\n", sumar(a, b));
    printf("la resta es: %d\n", restar(a, b));
    return 0;
}