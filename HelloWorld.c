#include "stdio.h"

typedef enum
{
    MAIN_enOK =0,
    MAIN_enERROR =1,
}MAIN_nSTATUS;

int main (void)
{
    printf("Hello World\n\r");
    printf("First Prject\n\r");
    return  MAIN_enOK;
}