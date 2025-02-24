#include <stdio.h>

/**
 * print_to_98 - Prints all natural number from n to 98
 * @n: The starting number
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n < 98; n++) /* a loop start from n and incrase to 98 */
printf("%d, ", n);
}
else /* if it "n" bigger than 98 */
{
for (; n > 98; n--) /* a loop start from "n" and dicrase to 98 */
printf("%d, ", n);
}
printf("98\n"); /* print the last number without comma */
}
