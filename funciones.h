#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Pide un n�mero al usuario mediante scanf, asigna a la variable A.
 * \return Devuelve el valor asignado.
 */

float AsignarA();

/** \brief Pide un n�mero al usuario mediante scanf, asigna a la variable B.
 * \return Devuelve el valor asignado.
 */

float AsignarB();

/** \brief Calcula la suma de los dos parametros enteros ingresados.
 *
 * \param primer n�mero a sumar
 * \param segundo n�mero a sumar
 * \return el resultado de la suma
 *
 */

float Suma(float, float);

/** \brief Calcula la resta de los dos parametros enteros ingresados.
 *
 * \param primer n�mero entero al cu�l se le va a restar el segundo
 * \param segundo n�mero entero
 * \return El resultado de la resta
 *
 */

float Resta(float, float);

/** \brief Calcula la multiplicaci�n de los dos par�metros.
 *
 * \param Primer n�mero entero ingresado a multiplicar
 * \param Segundo n�mero entero a multiplicar
 * \return El resultado de la multiplicaci�n
 *
 */

float Multiplicacion(float, float);

/** \brief Calcula la divisi�n de punto flotante de dos n�meros de punto flotante. El primero es el dividendo
 * \ el segundo es el divisor
 * \param Primer n�mero o dividendo
 * \param Segundo n�mero o divisor
 * \return El cociente de la divisi�n en punto flotante.
 *
 */

float Division(float, float);

/** \brief Calcula el factorial de un n�mero entero mayor o igual a 0.
 *
 * \param N�mero entero a calcular su factorial.
 * \return El factorial del n�mero si es mayor a 1, o 1 si es
 *
 */

float Factorial(float);

#endif // FUNCIONES_H_INCLUDED
