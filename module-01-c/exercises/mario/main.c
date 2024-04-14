#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    } while (n < 1 || n > 8);
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if(j < n - i - 1)
            {
                printf(" ");
            } else 
            {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
    
}