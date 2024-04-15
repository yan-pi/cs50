#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{ 
    double troco;
    int centavos = 0;
    int moedas = 0;

    do
    {
        troco = get_float("Troca devida: ");
    } while (troco < 0);
    
    centavos = (int)round(troco * 100);

    while (centavos > 0)
    {
        if (centavos >= 25)
        {
            centavos -= 25;
        }
        else if (centavos >= 10)
        {
            centavos -= 10;
        }
        else if (centavos >= 5)
        {
            centavos -= 5;
        }
        else
        {
            centavos -= 1;
        }
        
        moedas++;
    }
    
    printf("%d moedas\n", moedas);
}
