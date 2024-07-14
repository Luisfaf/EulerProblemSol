/*
 * Solution to Project Euler problem 6
 * Copyright (c) Project LFAF. All rights reserved.
 *
 * https://www.nayuki.io/page/project-euler-solutions
 * https://github.com/Luisfaf/EulerProblemSol
 */

/*
* Find the difference between the sum of the squares
* of the first one hundred natural numbers and the
* square of the sum.
*/

#include <stdio.h>
#include <stdlib.h>

static int N = 100;

int main()
{
    int sum = 0;
    int sum2 = 0;

    for(int i=1; i < N; i++){
        sum += i;
        sum2 += i*i;
    }
    printf("The difference between sum of the square and the square of the sum: %d\n", (sum*sum - sum2));
    return 0;
}
