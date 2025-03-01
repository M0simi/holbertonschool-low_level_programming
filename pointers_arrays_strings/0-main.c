#include "main.h"
#include <stdio.h>

int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n); /* Prints: n=402*/
    reset_to_98(&n);      /* Call the function and pass the address of n*/
    printf("n=%d\n", n); /* Prints: n=98 (value updated)*/
    return (0);
}
