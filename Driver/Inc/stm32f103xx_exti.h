#ifndef __STM32F103XX_EXTI_H
#define __STM32F103XX_EXTI_H
#include "stm32f103xx.h"
#pragma once

typedef struct
{
    volatile unsigned int IMR;
    volatile unsigned int EMR;
    volatile unsigned int RTSR;
    volatile unsigned int FTSR;
    volatile unsigned int SWIER;
    volatile unsigned int PR;

} EXTI_Typedef_t;

#define EXTI ((EXTI_Typedef_t *)EXTI_BASEADDR);

#endif