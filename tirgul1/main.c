#include "Fibonacci.h"
#include <stdio.h>
/**
 * @brief check the Fibonacci.h 
 * @return 0 for success
 * assumptions: exit in error of allocation
*/
int main()
{
    printf("fibonacci number possition 10: %llu\n", Fibonacci(10));
    printf("fibonacci number possition 100: %llu\n", Fibonacci(100));
    printf("fibonacci number possition 50: %llu\n", Fibonacci(50));
    printf("fibonacci number possition 10000: %llu\n", Fibonacci(10000));
    return 0;
}