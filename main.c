#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>
#include <conio.h>
int main()
{
    char seguir='s';
    char opcion;
    float A;
    float B;
    float suma;
    float multip;
    float divi;
    float resta;
    float factorial;

    fflush(stdin);
    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%f)\n",A);
        printf("2- Ingresar 2do operando (B=%f)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("Ingrese el numero de opcion: ");
        fflush(stdin);
        scanf("%c",&opcion);
        getch();


        while (!(opcion >=49 && opcion<= 58))
        {
            printf("Error. Ingrese un numero entre 1 y 9 para la opcion: ");
            scanf("%c",&opcion);
            getchar();
        }

        /*while((scanf("%d",&opcion))!=0)
        {
            printf("Ingrese una opcion valida: ");
            //scanf("%d",&opcion);
        }*/

        switch(opcion)
        {
            case 1:
                A=AsignarA();
                printf("Se ha asignado %f a la variable A\n\n",A);
                break;

            case 2:
                B=AsignarB();
                printf("Se ha asignado %f a la variable B\n\n",B);
                break;
            case 3:
                suma=Suma(A,B);
                printf("La suma de A y B es %f\n\n",suma);
                break;
            case 4:
                resta=Resta(A,B);
                printf("La resta de A y B es %f\n\n",resta);
                break;
            case 5:
                divi=Division(A,B);
                printf("La division de A y B es %f\n\n",divi);
                break;
            case 6:
                multip=Multiplicacion(A,B);
                printf("La multiplicacion de A y B es %f\n\n",multip);
                break;
            case 7:
                factorial=Factorial(A);
                printf("El factorial de A es %f\n\n",factorial);
                break;
            case 8:
                suma=Suma(A,B);
                resta=Resta(A,B);
                multip=Multiplicacion(A,B);
                printf("La suma de A y B es %f\n",suma);
                printf("La resta de A y B es %f\n",resta);
                printf("La multiplicacion de A y B es %f\n",multip);
                if (B!=0)
                {
                    divi=Division(A,B);
                    printf("La division de A y B es %f\n",divi);
                }
                else
                {
                    printf("No se pudo realizar la division; el divisor debe ser distinto de 0. Asigne nuevamente otro valor a B.\n");
                }
                if (A<0)
                {
                    factorial=Factorial(A);
                    printf("El factorial de A es %f\n\n",factorial);
                }
                else
                {
                    printf("No existe el factorial de un numero negativo. Cambie el valor de A a un numero positivo.\n\n");
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;
}

