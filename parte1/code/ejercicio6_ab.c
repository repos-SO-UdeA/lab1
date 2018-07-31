/**
 * @file ejercicio4a.c
 * @author labSO
 * @date 30/07/2018
 * @brief Archivo con codigo de trabajo para ecuaciones cuadraticas.
 *
 * Este codigo se enfoca solo en la parte a del ejercicio 6
 *
 * Nota: Usar -lm para compilar. Por ejemplo:
 * 
 * gcc ejercicio6_ab.c -Wall -lm -o ejercicio6_ab.out
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* DECLARACION DE FUNCIONES */

int discriminante(int a, int b, int c); 

/* FUNCION MAIN*/

int main () { 
  int x = 1,y = 2,z = 6,w;
  w = discriminante(1,0,1);
  printf("w = %d\n",w);
  w = discriminante(y,z,x);
  printf("w = %d\n",w);
  w = discriminante(y++,--z,5);
  printf("w = %d\n",w);
  return 0;
}

/* DEFINICION DE FUNCIONES */

/**
* @brief Metodo que calcula el discriminante de una ecuacion cuadratica a*x^2 + b*x + c
* @param a coeficiente de x^2
* @param b coeficiente de x
* @param c coeficiente independiante
* @return indicador del tipo de raies de la ecuacion cuadratica 
*         -> 1: raíces reales y distintas
*         ->  0: raíces reales iguales
*         -> -1: raíces complejas conjugadas
*/

int discriminante(int a, int b, int c) {
  int D = pow(b,2) - 4*a*c;
  if(D > 0) {
    // raíces reales y distintas
    return 1;
  }
  else if(D == 0) {
    // raíces reales iguales
    return 0;
  }
  else {
    // raíces complejas conjugadas
    return -1;
  }  
}