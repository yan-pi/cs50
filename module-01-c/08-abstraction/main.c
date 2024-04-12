#include <cs50.h>
#include <stdio.h>

void repeat_string(string word, int times); // prototype
int get_positive(void); // prototype

int main(void)
{
    string word = get_string("Digite a palavra que você quer repetir:\n");
    int repetitions = get_positive(); // Pega o número de repetições

    repeat_string(word, repetitions); // Chama a função para repetir a palavra
}

void repeat_string(string word, int times)
{
    for (int i = 0; i < times; i++)
    {
        printf("%s\n", word);
    }
}

int get_positive(void)
{
    int num;

    do
    {
        num = get_int("Quantas vezes deseja repetir a palavra?\n");
    } 
    while (num < 1);
    
    return num;
}
