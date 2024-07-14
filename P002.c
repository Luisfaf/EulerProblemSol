/*
 * Solution to Project Euler problem 2
 * Copyright (c) Project LFAF. All rights reserved.
 *
 * https://www.nayuki.io/page/project-euler-solutions
 * https://github.com/Luisfaf/EulerProblemSol
 */
 /*
	 * Computers are fast, so we can implement this solution directly without any clever math.
	 * Because the Fibonacci sequence grows exponentially by a factor of 1.618, the sum is
	 * bounded above by a small multiple of 4 million. Thus the answer fits in a Java int type.
	 */
#include <stdio.h>
#include <stdlib.h>

#define MAXIMO 4000000

int main()

{
    int x = 1; /* Represents the current Fibonacci number being processed */
    int y = 2; /* Represents the next Fibonacci number in the sequence */
    int z;
    int suma = 0;
    while(x<MAXIMO){
        if(x % 2 == 0)
            suma += x;
        z = x + y;
        x = y;
        y = z;
    }
    printf("Suma %d\n", suma);
    return 0;
}
