#include <stdio.h>
#include "sumar.h"
int main()
{
    int a,b;
printf("Ingrese el número ");
scanf("%d", &a);
printf("Ingrese 2do numero: ");
scanf("%d", &b);
printf("la suma es: %d\n", sumar(a, b));
return 0;
}