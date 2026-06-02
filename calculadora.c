#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}

int subtracao(int a, int b)
{
    return a - b;
}

int main()
{
    printf("Soma: %d\n", soma(3, 4));
    printf("Subtracao: %d\n", subtracao(10, 3));
    return 0;
}