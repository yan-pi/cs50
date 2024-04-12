#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int a = get_int("how many times you want repeat?\n");

    int i = 0;

    printf("we are repeating this %i times\n", a);

    while (i < a)
    {
        printf("hello world from while\n");
        i++;
    }

    for (int i = 0; i < a; i++)
    {
        printf("hello world from for\n");
    }
    
    
}
