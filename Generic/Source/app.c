#include "../Header/app.h"

int32_t APP__s32MoveValue=0;

int32_t APP__s32GetFavortiteNumber(void)
{
    static int32_t s32Myvalue=0;
    int32_t s32ValueReturned=0;
    s32ValueReturned = s32Myvalue;
    s32Myvalue++;
    return s32ValueReturned;
}