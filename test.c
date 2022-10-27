#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2;
    printf("Zadej koeficient a: ");
    scanf("%f",&a);
    printf("Zadej koeficient b: ");
    scanf("%f",&b);
    printf("Zadej koeficient c: ");
    scanf("%f", &c);
    x1 = (-b+sqrt(b*b-4*a*c))/2;
    x2 = (-b-sqrt(b*b-4*a*c))/2;
    printf("vysledek jedna je %f\n", x1);
    printf("vysledek dva je %f", x2);
    return 0;
}
