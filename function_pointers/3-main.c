#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Perform simple operations based on user input.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
 int num1, num2, result;
 int (*operation)(int, int); /* Function pointer for the operation */

 /* Check if there are exactly 4 arguments (program name + num1 + operator + num2) */
 if (argc != 4)
 {
 printf("Error\n");
 exit(98);
 }

 /* Convert arguments to integers */
 num1 = atoi(argv[1]);
 num2 = atoi(argv[3]);

 /* Get the appropriate function for the operator */
 operation = get_op_func(argv[2]);

 /* Check if the operator is valid */
 if (operation == NULL)
 {
 printf("Error\n");
 exit(99);
 }

 /* Check for division or modulo by zero */
 if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
 {
 printf("Error\n");
 exit(100);
 }

 /* Perform the operation and print the result */
 result = operation(num1, num2);
 printf("%d\n", result);

 return (0);
}
