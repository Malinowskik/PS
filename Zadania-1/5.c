
#include <stdio.h>

int zawiera(char znak, char tablica[]){
    for(int i = 0; i < 64; i++){
        if(tablica[i] == znak){
            return 1;
        }
    }
    return 0;
}


int main()
{
    char ch[64];
    gets(ch);
    printf("Znak do sprawdzenia: ");
    char znak = getchar();
    if(zawiera(znak, ch) == 1){
        printf("Znak znaleziony!");
    }
    else{
        printf("Nie ma takiego znaku.");
    }
    return 0;
}
