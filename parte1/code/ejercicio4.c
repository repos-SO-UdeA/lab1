/**
 * @file ejercicio4a.c
 * @author labSO
 * @date 30/07/2018
 * @brief Archivo que contiene un ejemplo con numeros aleatorios.
 * 
 * Archivo que contiene toda la logica (interaccion con el usuario y procesamiento de datos) 
 * de la aplicacion. Para ver como documentar se observaron los siguientes enlaces:
 * @see https://www.linuxquestions.org/questions/programming-9/using-doxygen-with-c-source-738747/
 * @see https://os.mbed.com/media/uploads/defiantgti/doxygentutorial.pdf
 * @see http://fnch.users.sourceforge.net/doxygen_c.html
 * @see https://www.stack.nl/~dimitri/doxygen/manual/docblocks.html
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* DECLARACION DE FUNCIONES */

int generarNumero(int max, int min);

/* FUNCION MAIN*/

int main () { 
  int n_min, n_max, cant, i, aleatorio;
  printf("Digite la cantidad de números que desea generar: ");
  scanf("%d",&cant);
  printf("Digite los limites (primero el superior, luego el inferior): \n");
  scanf("%d%d",&n_max,&n_min);
  srand(time(NULL)); // Inicializacion del generador
  for(i = 0; i < cant; i ++) { 
    aleatorio = generarNumero(n_max, n_min); //Genera un numero entre n_min y n_max
    printf("%d ", aleatorio);
  } 
  printf("\n");
  return 0;
}

/* DEFINICION DE FUNCIONES */

/**
* @brief Metodo que genera un numero aleatorio entre dos limites
* @param max es el limite superior
* @param min es el limite inferior
* @return el numero aleatorio
*/

int generarNumero(int max, int min) {
   int aleatorio;
   aleatorio = rand()%(max-min+1)+min; //Genera un numero entre max y min
   return aleatorio;  
}