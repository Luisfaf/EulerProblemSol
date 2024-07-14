/*
 * Solution to Project Euler problem 3
 * Copyright (c) Project LFAF. All rights reserved.
 *
 * https://www.nayuki.io/page/project-euler-solutions
 * https://github.com/Luisfaf/EulerProblemSol
 */
 /*
* By the fundamental theorem of arithmetic, every integer n > 1 has a unique factorization as a product of prime numbers.
* In other words, the theorem says that n = p_0 * p_1 * ... * p_{m-1}, where each p_i > 1 is prime but not necessarily unique.
* Now if we take the number n and repeatedly divide out its smallest factor (which must also be prime), then the last
* factor that we divide out must be the largest prime factor of n. For reference, 600851475143 = 71 * 839 * 1471 * 6857.
*/
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(void) {

long long i=2;
long long int n = 600851475143;
//long int n = 10;
long long int primeFactor = 1;
    if( n < 0) return 0;
    while( i <= n/i ) {
        if(n%i == 0){
            primeFactor = i;
            n /= i;
        }
        else {
            i += 1;
        }
    }
    if (primeFactor < n)
        primeFactor = n;
    return primeFactor;
}
