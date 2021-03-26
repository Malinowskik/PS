#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct ksiazka{
    char tytul[40];
    char autor[40];
    float wartosc;
}ksiazka;


void srtbooks(struct ksiazka * Ksiazka, int size){
    ksiazka temp[size];
    for(int i = 0; i < size; i++){
    strcpy(temp[i].tytul,Ksiazka[i].tytul);
    strcpy(temp[i].autor,Ksiazka[i].autor);
    temp[i].wartosc = Ksiazka[i].wartosc;
    }
    for(int i = 0; i < size; i++){
        int sorted_index = i;
        for(int n = i+1; n < size; n++){
        if(temp[sorted_index].tytul[0] > temp[n].tytul[0])
            sorted_index = n;
        }

        char temp_tytul[40];
        char temp_autor[40];
        float temp_wartosc;

        strcpy(temp_tytul,temp[sorted_index].tytul);
        strcpy(temp_autor,temp[sorted_index].autor);
        temp_wartosc = temp[sorted_index].wartosc;


        strcpy(temp[sorted_index].tytul, temp[i].tytul);
        strcpy(temp[i].tytul,temp_tytul);
        strcpy(temp[sorted_index].autor, temp[i].autor);
        strcpy(temp[i].autor,temp_autor);
        temp[sorted_index].wartosc =  temp[i].wartosc;
        temp[i].wartosc = temp_wartosc;
    }

    for(int i = 0; i < size; i++){
    strcpy(Ksiazka[i].tytul,temp[i].tytul);
    strcpy(Ksiazka[i].autor,temp[i].autor);
    Ksiazka[i].wartosc = temp[i].wartosc;
    }
}

int main(){
    ksiazka ksiazka[100];
    printf("Podaj tytul ksiazki.\n");
    printf("Aby zakonczyc, wcisnij [enter] na poczatku wiersza.\n");
    int i;
    for(i = 0; i < 100; i++){
        if(gets(ksiazka[i].tytul) != NULL && ksiazka[i].tytul[0] != '\0'){
        }
        else break;
        printf("Teraz podaj autora: ");
        gets(ksiazka[i].autor);
        printf("Teraz podaj wartosc: ");
        scanf("%f",&ksiazka[i].wartosc);
        getchar();
        system("cls");
        printf("Podaj kolejny tytul: ");
    }
    system("cls");
    printf("Lista twoich ksiazek: \n");
    srtbooks(ksiazka,i);
    for(int n = 0; n < i; n++){
        printf("[%d]Tytul: %s, Autor: %s, Wartosc: %.2f\n",n,ksiazka[n].tytul,ksiazka[n].autor,ksiazka[n].wartosc);
    }
    return 0;
}
