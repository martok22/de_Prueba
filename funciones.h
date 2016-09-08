#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Pide un número al usuario mediante scanf, asigna a la variable A.
 * \return Devuelve el valor asignado.
 */

float AsignarA();

/** \brief Pide un número al usuario mediante scanf, asigna a la variable B.
 * \return Devuelve el valor asignado.
 */

float AsignarB();

/** \brief Calcula la suma de los dos parametros enteros ingresados.
 *
 * \param primer número a sumar
 * \param segundo número a sumar
 * \return el resultado de la suma
 *
 */

float Suma(float, float);

/** \brief Calcula la resta de los dos parametros enteros ingresados.
 *
 * \param primer número entero al cuál se le va a restar el segundo
 * \param segundo número entero
 * \return El resultado de la resta
 *
 */

float Resta(float, float);

/** \brief Calcula la multiplicación de los dos parámetros.
 *
 * \param Primer número entero ingresado a multiplicar
 * \param Segundo número entero a multiplicar
 * \return El resultado de la multiplicación
 *
 */

float Multiplicacion(float, float);

/** \brief Calcula la división de punto flotante de dos números de punto flotante. El primero es el dividendo
 * \ el segundo es el divisor
 * \param Primer número o dividendo
 * \param Segundo número o divisor
 * \return El cociente de la división en punto flotante.
 *
 */

float Division(float, float);

/** \brief Calcula el factorial de un número entero mayor o igual a 0.
 *
 * \param Número entero a calcular su factorial.
 * \return El factorial del número si es mayor a 1, o 1 si es
 *
 */

float Factorial(float);

#endif // FUNCIONES_H_INCLUDED
