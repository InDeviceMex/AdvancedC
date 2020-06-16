#include "../Header/main.h"

static int32_t MAIN_s32Favorite=0;

extern uint32_t ISOLATED_u32Number();
/**
 * @brief Main Function
 * 
 * @return int 
 */
int main (void)
{

    extern int32_t APP__s32MoveValue;
    uint32_t u32Number=0;
    auto int32_t s32LocalValue=0;
    s32LocalValue = APP__s32GetFavortiteNumber();
    APP__s32MoveValue = ISOLATED_u32Number();
    APP__s32MoveValue+=s32LocalValue;
    printf("Hello World\n\r");
    printf("My Favorite Number is: %d\n\r",s32LocalValue);
    printf("My Favorite Number is: %d\n\r",APP__s32MoveValue);
   
   
    s32LocalValue = APP__s32GetFavortiteNumber();
    printf("My Favorite Number is: %d\n\r",s32LocalValue);
    return  MAIN_enSTATUS_OK;
}