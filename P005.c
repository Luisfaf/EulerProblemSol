/*
 * Solution to Project Euler problem 5
 * Copyright (c) Project LFAF. All rights reserved.
 *
 * https://www.nayuki.io/page/project-euler-solutions
 * https://github.com/Luisfaf/EulerProblemSol
 */
 /*
	 * The smallest number n that is evenly divisible by every number in a set {k1, k2, ..., k_m}
	 * is also known as the lowest common multiple (LCM) of the set of numbers.
	 * The LCM of two natural numbers x and y is given by LCM(x, y) = x * y / GCD(x, y).
	 * When LCM is applied to a collection of numbers, it is commutative, associative, and idempotent.
	 * Hence LCM(k1, k2, ..., k_m) = LCM(...(LCM(LCM(k1, k2), k3)...), k_m).
	 */
/* execution time: 0.535 s.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int num = 10, flag = 0;

    while(flag == 0)
    {
        if((num%2) == 0 && (num%3) == 0 && (num%4) == 0 && (num%5) == 0 && (num%6) == 0 &&
           (num%7) == 0 && (num%8) == 0 && (num%9) == 0 && (num%10) == 0 && (num%11) == 0 &&
           (num%12) == 0 && (num%13) == 0 && (num%14) == 0 && (num%15) == 0 && (num%16) == 0 &&
           (num%17) == 0 && (num%18) == 0 && (num%19) == 0 && (num%20) == 0 && (num%21) == 0)
        {
            flag = 1;
            printf("Lowest divisible number from 1 up to 20 is: %d", num);
        }
        num++;
    }
}

/* execution time: 11 s.*/

//#include<stdio.h>
//#include<conio.h>
//void main()
//{
//
//int a,b,flag=0;
//
//for(a=1; ; a++)
//{
//    for(b=1; b<=20; b++)
//    {
//        if (a%b==0)
//            {
//                flag++;
//            }
//
//    }
//    if (flag==20)
//        {
//            printf("The least num divisible by 1 to 20 is = %d",a);
//            break;
//        }
//        flag=0;
//}
//
//
//getch();
//}
