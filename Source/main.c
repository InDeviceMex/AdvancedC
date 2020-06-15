#include "../Header/main.h"

static int32_t MAIN_s32Favorite=0;
int main (void)
{
    auto int jeje=0;
    jeje = APP_s32GetFavortiteNumber();
    printf("Hello World\n\r");
    printf("My Favorite Number is: %d\n\r",jeje);
    return  MAIN_enSTATUS_OK;
}