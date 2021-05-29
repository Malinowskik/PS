#include <stdio.h>
#include <stdlib.h>

float x(int);

int main()
{
    int n;
    printf("Podaj liczbe calkowita n: ");
    scanf("%d", &n);

    printf("2 podniesione do potegi %d to: %.3f\n", n, x(n));

    getchar();
    return 0;
}

float x(int n)
{
    float y = 1;
    if(n >= 0) // n dodatnie lub rowne zeru
    {
        for(int i = 0; i < n; i++)
        {
            y = y * 2;
        }
    } else // n ujemne
    {
        for(int i = 0; i > n; i--)
        {
            y = y * 2;
        }
        y = 1 / y;
    }
    return y;
}
