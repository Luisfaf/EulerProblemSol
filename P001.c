/*
 * Solution to Project Euler problem 1
 * Copyright (c) Project LFAF. All rights reserved.
 *
 * https://www.nayuki.io/page/project-euler-solutions
 * https://github.com/Luisfaf/EulerProblemSol
 */
 /*
* Computers are fast, so we can implement this solution directly without any clever math.
*/
#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 1000

int main()
{
   int i = 0;
   int suma = 0;
   for(i=0 ; i<MAXIMO; i++) if ((i % 3 == 0) | (i % 5 == 0))
        suma = suma + i;
        printf("Suma: %d\n", suma);

    return 0;
}
