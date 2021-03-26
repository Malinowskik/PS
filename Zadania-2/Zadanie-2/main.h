
#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

typedef struct month
{
    int num;
    int days;
    char name[16];
    char short_name[3];
} month;

typedef struct year
{
    month month[12];
} year;


#endif
