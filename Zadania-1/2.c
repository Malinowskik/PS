#include <stdio.h>
#include <conio.h>
int pobierz_znaki(int n){
    char ch;
    for(int i = 0; i < n; i++){
        ch = getch();
        putchar(ch);
        if(ch == 13 || ch == 32 || ch == 9) break;
    }
    return 0;
}

int main()
{
    pobierz_znaki(8);
    return 0;
}
