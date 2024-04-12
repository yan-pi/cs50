#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //sum long numbers, use int to sum short numbers but has datatype bug for int
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li\n", x + y);
}
