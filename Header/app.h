#ifndef APP_H_INCLUDED
#define APP_H_INCLUDED

#include <stdint.h>
#include <stdio.h>

typedef enum
{
    APP_enSTATUS_OK =0,
    APP_enSTATUS_ERROR =1,
}APP_nSTATUS;

int32_t APP_s32GetFavortiteNumber(void);


#endif //APP_H_INCLUDED