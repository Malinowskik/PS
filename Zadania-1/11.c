#include <stdio.h>
#include <ctype.h>

typedef struct{
    int slowa;
    int wielkie_litery;
    int male_litery;
    int znaki_przestankowe;
    int cyfry;
} plik;

int main()
{
    plik plik = {0};
    char ch[64];
    for(int i = 0; i < 64; i++){
        ch[i] = getchar();
        if(ch[i] == EOF)break;
        if(islower(ch[i]))
            plik.male_litery++;
        if(isupper(ch[i]))
            plik.wielkie_litery++;
        if(isdigit(ch[i]))
            plik.cyfry++;
        if(ch[i] == '.' || ch[i] == ',' || ch[i] == ':' || ch[i] == '-')
            plik.znaki_przestankowe++;
        if(isspace(ch[i]))
            plik.slowa++;
    }
    printf("Slowa: %d\n",plik.slowa);
    printf("Wielkie litery: %d\n",plik.wielkie_litery);
    printf("Male litery: %d\n",plik.male_litery);
    printf("Znaki przestankowe: %d\n",plik.znaki_przestankowe);
    printf("Cyfry: %d\n",plik.cyfry);
}
