#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to make change.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 if successful, 1 if error.
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;
int denominations[] = {25, 10, 5, 2, 1}; /* list of coins */
int i;

    /* checks for only one integer entry */
if (argc != 2)
{
printf("Error\n");
return (1);
}

    /* convert input to integer */
cents = atoi(argv[1]);

    /*if the number is negative, print 0  */
if (cents < 0)
{
printf("0\n");
return (0);
}

    /* calculate the minimum number of coins */
for (i = 0; i < 5; i++)
{
coins += cents / denominations[i]; /* number of coins of this denomination */
cents %= denominations[i]; /* update remaining value */
}

    /* print the minimum of coins */
printf("%d\n", coins);
return (0);
}
