/*
 * lps22hb_driver.c
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */

#include "lps22hb_driver.h"
#include "stm32l475e_iot01_psensor.h"

bool LPS22HB_Init(void)
{
    if (BSP_PSENSOR_Init() != PSENSOR_OK)
        return false;

    return true;
}

bool LPS22HB_Read(lps22hb_data_t *data)
{
    if (data == NULL)
        return false;

    data->pressure_hpa = BSP_PSENSOR_ReadPressure();
    return true;
}
