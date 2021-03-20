
#include <stdio.h>

int znajdz_znak(char znak, char tablica[]){
    for(int i = 0; i < 64; i++){
        if(tablica[i] == znak){
            return i;
        }
    }
    return 0;
}


int main()
{
    char ch[64];
    gets(ch);
    printf("Podaj znak do znalezienia: ");
    char znak = getchar();
    printf("%d", znajdz_znak(znak,ch));
    return 0;
}
