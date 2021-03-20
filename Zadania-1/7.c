#include <stdio.h>

char zawiera_lan(char ch1[], char ch2[]){
    int dlugosc = 0;
    for(int i = 0; i < 64; i++){
        if(ch2[i] == NULL || ch2[i] == EOF){
            dlugosc--;
            break;
        }
        dlugosc++;
    }
    int check = 0;
    for(int i = 0; i < 64; i++){
            check = 0;
            for(int n = 0; n < dlugosc; n++){
                if(ch1[i+n] == ch2[n]){
                check++;
                if(check == dlugosc){
                    return i;
                }
            }
        }
    }
    return 0;
}


int main()
{
    char ch1[64];
    char ch2[64];

    printf("Zdanie nr 1: ");
    gets(ch1);
    printf("Zdanie nr 2: ");
    gets(ch2);
    printf("%d",zawiera_lan(ch1,ch2));



    return 0;
}
