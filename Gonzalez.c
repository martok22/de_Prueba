#include <stdio.h>
float AsignarA()
{
    float a;
    printf("Ingrese el primer valor: ");
    fflush(stdin);
    scanf("%f",&a);
    return a;
}

float AsignarB()
{
    float b;
    printf("Ingrese el segundo valor: ");
    fflush(stdin);
    scanf("%f",&b);
    return b;
}

float Suma(float a, float b)
{
    float suma;
    suma = a+b;
    return suma;
}

float Resta(float a, float b)
{
    float resta;
    resta = a-b;
    return resta;
}

float Multiplicacion(float a, float b)
{
    float multip;
    multip = a*b;
    return multip;
}

float Division(float a, float b)
{
    float division;
    if (b!=0)
    {
        division = a/b;
    }
    else
    {
        printf("Error: el divisor no puede ser 0");
    }
    return division;
}

float Factorial(float a)
{
    float factorial=1;
    if (a>0)
    {
        while(a!=0)
        {
            factorial=factorial*a;
            a--;
        }
    }
    return factorial;
}
