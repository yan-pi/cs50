#include <cs50.h>
#include <stdio.h>

void meow(void);
int repeat(void);

int main(void)
{
    int c = repeat();
    
    for (size_t i = 0; i < c; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}

int repeat(void)
{
    int c = get_int("how many times will repeat?\n");
    return c;
}