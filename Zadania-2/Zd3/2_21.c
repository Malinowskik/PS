#include <stdio.h>
#include <stdlib.h>

int x(int);

int main()
{
    int a;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%d", &a);

    while(a < 0 ){
        printf("Blad, liczba ujemna\n");
        printf("Podaj ponownie nieujemna liczbe calkowita: ");
        scanf("%d", &a);
    }

    printf("Wartosc elementu o indeksie '%d' ciagu: %d\n", a, x(a));

    getchar();
    return 0;
}

int x(int n){
    int a_n = 1;
    if(n > 0){
        a_n = 2 * x(n - 1) + 5;
    }
    return a_n;
}
