#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch[64];
    int slowa = 0;
    int slowa_start[64];
    int slowa_stop[64];
    gets(ch);

    for(int i = 0; i < 64; i++){
        if(isspace(ch[i]) && ch[i] != 10){
            slowa_start[slowa] = slowa_stop[slowa-1] +1;
            slowa_stop[slowa] = i;
            slowa++;
        }
        if((int)(ch[i+1]) == 0){
            slowa_start[slowa] = slowa_stop[slowa - 1] + 1;
            slowa_stop[slowa] = i+1;
            slowa++;
            break;
        }
    }

    slowa_start[0] = 0;
    for(int i = 1; i <= slowa; i++){
        for(int n = 0; n < slowa_stop[slowa-i] - slowa_start[slowa-i]; n++){
            if(isprint(ch[slowa_start[slowa-i] + n]))
            putchar(ch[slowa_start[slowa-i] + n]);
        }
        printf(" ");
    }
}

