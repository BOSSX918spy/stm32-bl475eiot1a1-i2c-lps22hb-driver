/*
 * lps22hb_driver.h
 *
 *  Created on: Feb 11, 2026
 *      Author: bossx918spy
 */

#ifndef INC_LPS22HB_DRIVER_H_
#define INC_LPS22HB_DRIVER_H_

#ifndef LPS22HB_DRIVER_H
#define LPS22HB_DRIVER_H

#include <stdbool.h>

typedef struct
{
    float pressure_hpa;
} lps22hb_data_t;

bool LPS22HB_Init(void);
bool LPS22HB_Read(lps22hb_data_t *data);

#endif /* LPS22HB_DRIVER_H */


#endif /* INC_LPS22HB_DRIVER_H_ */
