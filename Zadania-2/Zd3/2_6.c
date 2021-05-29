#include <stdio.h>
#include <stdlib.h>

float x(int, int);

int main()
{
    int n, m;
    printf("Podaj pierwsza dodatnia liczbe calkowita: ");
    scanf("%d", &n);
    printf("Podaj druga  dodatnia liczbe calkowita: ");
    scanf("%d", &m);
    while((n < 0 || m < 0) || (n == 0 && m == 0)) // sprawdzamy czy n i m nie są mniejsze od zera, oraz czy obie nie sa rowne 0
    {
        printf("Blad! Zle dane\n");
        printf("Podaj ponownie pierwsza dodatnia liczbe calkowita: ");
        scanf("%d", &n);
        printf("Podaj ponownie druga dodatnia liczbe calkowita: ");
        scanf("%d", &m);
    }

    printf("%d do potegi %d to: %.3f\n", n, m, x(n, m));

    getchar();
    return 0;
}

float x(int n, int m)
{
    float wynik = 1;

    for(int i = 0; i < m; i++)
    {
        wynik = wynik * n;
    }
    return wynik;
}
