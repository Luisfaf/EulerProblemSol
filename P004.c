/*
 * Solution to Project Euler problem 4
 * Copyright (c) Project LFAF. All rights reserved.
 *
 * https://www.nayuki.io/page/project-euler-solutions
 * https://github.com/Luisfaf/EulerProblemSol
 */
/*
* A palindromic number reads the same both ways. The largest
* palindrome made from the product of two 2-digit numbers is
* 9009 = 91 x 99
* Find the largest palindrome made from the product of two
* 3-digit numbers.
*/
#include <stdio.h>
#include <stdlib.h>

#define atoa(x) #x

int EsPalindromo(char *cadena) {
    int longitud = strlen(cadena);
    int inicio = 0, fin = longitud -1;

    if(longitud <= 1) return 1;

    while(cadena[inicio] == cadena[fin]) {
        if (inicio >= fin) return 1;
        inicio ++;
        fin--;
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int maxPalin = -1;
    int prod = 0;
    char numeroCadena[10] = "lenguage";
    char *cadena;
    cadena = numeroCadena;
    int i, j, longitud;

    for (i = 100; i < 1000; i++){
        for (j = 100; j < 1000; j++){
            prod = i * j;
            sprintf (numeroCadena, "%d", prod);
                if(EsPalindromo(numeroCadena) && prod > maxPalin) {
                   maxPalin = prod;

                }
        }
    }
    printf("El maximo numero: %d  \n", maxPalin);
}




