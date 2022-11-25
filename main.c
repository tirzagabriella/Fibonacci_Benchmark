#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int N = 10;

    printf("The fibonacci number for %d is %d\n", N, fibonacciIterative(10));
    printf("The fibonacci number for %d is %d\n", N, fibonacciRecursive(10));

    for (int i = 0; i<= N; i++){
        if (fibonacciIterative(i) != fibonacciRecursive(i)){
            printf ("error at %i\n",i);
        } else {
            printf ("The fibonaaci number F%d = %d = %d\n", i , fibonacciIterative(i), fibonacciRecursive(i));

        }
    }
    return 0;
}
