#include "../Header/main.h"

int main (void)
{
    int32_t s32Favorite=0;

    s32Favorite = APP_s32GetFavortiteNumber();
    printf("Hello World\n\r");
    printf("My Favorite Number is: %d\n\r",s32Favorite);
    return  MAIN_enSTATUS_OK;
}