#include <stdio.h>

int pobierz_slowo(){
    char ch[64];
    for(int i = 0; i < 64; i++){
        ch[i] = getchar();
        if(ch[i] == 10)break; //NL
    }
    char ch_sl[64];
    for(int i = 0; i < 64; i++){
        if(ch[i] == 32 || ch[i] == 10 || ch[i] == 13 || ch[i] == 9){
            break;
        }
        if(ch[i] > 32 && ch[i] < 127){
        ch_sl[i] = ch[i];
        }
    }
    printf(ch_sl);
    return ch_sl;
}

int main()
{
    pobierz_slowo();
    return 0;
}
