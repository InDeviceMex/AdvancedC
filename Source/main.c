#include "../Header/main.h"

static int32_t MAIN_s32Favorite=0;
/**
 * @brief Main Function
 * 
 * @return int 
 */
int main (void)
{

    extern int32_t APP__s32MoveValue;
    auto int32_t s32LocalValue=0;
    s32LocalValue = APP__s32GetFavortiteNumber();
    APP__s32MoveValue+=s32LocalValue;
    printf("Hello World\n\r");
    printf("My Favorite Number is: %d\n\r",s32LocalValue);
    printf("My Favorite Number is: %d\n\r",APP__s32MoveValue);
    return  MAIN_enSTATUS_OK;
}