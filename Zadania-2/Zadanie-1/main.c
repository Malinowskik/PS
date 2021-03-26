#include <stdio.h>
#include "main.h"

int daysclc(char name[16], struct year Year)
{
    int i;
    int d = 0;
    for(i = 0; i < 12; i++)
    {
        if(strcmp(name,Year.month[i].name) == 0)
        {
        break;
        }
    }
    for(int n = 0; n <= i; n++)
    {
        d += Year.month[n].days;
    }
    return d;
}
int main()
{
    year Year;
    Year = (year)
    {.month[0].num = 1, .month[0].days = 31, .month[0].name = "styczen", .month[0].short_name = "sty",
                   .month[1].num = 2, .month[1].days = 28, .month[1].name = "luty", .month[1].short_name = "lut",
                   .month[2].num = 3, .month[2].days = 31, .month[2].name = "marzec", .month[2].short_name = "mar",
                   .month[3].num = 4, .month[3].days = 30, .month[3].name = "kwiecien", .month[3].short_name = "kwi",
                   .month[4].num = 5, .month[4].days = 31, .month[4].name = "maj", .month[4].short_name = "maj",
                   .month[5].num = 6, .month[5].days = 30, .month[5].name = "czerwiec", .month[5].short_name = "cze",
                   .month[6].num = 7, .month[6].days = 31, .month[6].name = "lipiec", .month[6].short_name = "lip",
                   .month[7].num = 8, .month[7].days = 31, .month[7].name = "sierpien", .month[7].short_name = "sie",
                   .month[8].num = 9, .month[8].days = 30, .month[8].name = "wrzesien", .month[8].short_name = "wrz",
                   .month[9].num = 10, .month[9].days = 31, .month[9].name = "pazdziernik", .month[9].short_name = "paz",
                   .month[10].num = 11, .month[10].days = 30, .month[10].name = "listopad", .month[10].short_name = "lis",
                   .month[11].num = 12, .month[11].days = 31, .month[11].name = "grudzien", .month[11].short_name = "gru"
    };
    char month[16];
    printf("Podaj miesiac: ");
    gets(month);
    printf("%d",daysclc(month,Year)); //przekazuje strukture do funkcji
    return 0;
}
