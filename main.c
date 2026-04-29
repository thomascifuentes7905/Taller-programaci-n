#include <stdio.h>
#include "sumar.h"
<<<<<<< HEAD
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
=======
int main()
{
    int a,b;
printf("Ingrese el número ");
scanf("%d", &a);
printf("Ingrese 2do numero: ");
scanf("%d", &b);
printf("la suma es: %d\n", sumar(a, b));
return 0;
>>>>>>> 78f3543619da1c6de795d4c0f1593f7e2539f192
}