#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct data{
    char first_name[64];
    char second_name[64];
    char surname[64];
}data;

typedef struct person{
    long long int PESEL;
    data data;

}person;

void print_persons(struct person * person, int size){
    for(int i = 0; i < size; i++){
    char scndn[2] = "";
    if(person[i].data.second_name[0] != '\0'){
        scndn[0] = '.';
        scndn[1] = person[i].data.second_name[0];
    }
    printf("%s %s, %s -- %lli\n",person[i].data.first_name,person[i].data.surname,scndn,person[i].PESEL);
    }
}

int main(){
    person Person[3];
    Person[0] = (person) {.PESEL = 62447678605, .data.first_name = "Lech", .data.second_name = "Artur", .data.surname = "Walensa"};
    Person[1] = (person) {.PESEL = 32345873101, .data.first_name = "Jarek", .data.second_name = "", .data.surname = "Polkowski"};
    Person[2] = (person) {.PESEL = 96345465921, .data.first_name = "Janina", .data.second_name = "Elzbieta", .data.surname = "Druga"};
    print_persons(Person,3);
    return 0;
}
