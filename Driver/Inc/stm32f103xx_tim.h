#ifndef __STM32F103XX_TIM_H
#define __STM32F103XX_TIM_H

#include "stm32f103xx.h"
typedef struct
{
    volatile unsigned int CR1;
    volatile unsigned int CR2;
    volatile unsigned int SMCR;
    volatile unsigned int DIER;
    volatile unsigned int SR;
    volatile unsigned int EGR;
    volatile unsigned int CCMR1;
    volatile unsigned int CCMR2;
    volatile unsigned int CCER;
    volatile unsigned int CNT;
    volatile unsigned int PSC;
    volatile unsigned int ARR;
    volatile unsigned int RCR;
    volatile unsigned int CCR1;
    volatile unsigned int CCR2;
    volatile unsigned int CCR3;
    volatile unsigned int CCR4;
    volatile unsigned int BDTR;
    volatile unsigned int DCR;
    volatile unsigned int DMAR;

} TIM_Typedef_t;

#define TIM1 ((TIM_Typedef_t *)TIM1_BASEADDR)
#define TIM2 ((TIM_Typedef_t *)TIM2_BASEADDR)
#define TIM3 ((TIM_Typedef_t *)TIM3_BASEADDR)
#define TIM4 ((TIM_Typedef_t *)TIM4_BASEADDR)
#define TIM5 ((TIM_Typedef_t *)TIM5_BASEADDR)
#define TIM6 ((TIM_Typedef_t *)TIM6_BASEADDR)
#define TIM7 ((TIM_Typedef_t *)TIM7_BASEADDR)
#define TIM8 ((TIM_Typedef_t *)TIM8_BASEADDR)
#define TIM9 ((TIM_Typedef_t *)TIM9_BASEADDR)
#define TIM10 ((TIM_Typedef_t *)TIM10_BASEADDR)
#define TIM11 ((TIM_Typedef_t *)TIM11_BASEADDR)
#define TIM12 ((TIM_Typedef_t *)TIM12_BASEADDR)
#define TIM13 ((TIM_Typedef_t *)TIM13_BASEADDR)
#define TIM14 ((TIM_Typedef_t *)TIM14_BASEADDR)
#endif