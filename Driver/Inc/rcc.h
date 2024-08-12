#ifndef __RCC_H
#define __RCC_H

#include "stm32f103c8t6.h"
#include "define.h"

typedef struct
{
    union
    {
        unsigned long REG;
        BITS(unsigned long,
             HSION, 1,
             HSIRDY, 1,
             _reserved, 1,
             HSITRIM, 5,
             HSICAL, 8,
             HSEON, 1,
             HSERDY, 1,
             _reserved, 4,
             PLLON, 1,
             PLLRDY, 1,
             PLL2ON, 1,
             PLL2RDY, 1,
             PLL3ON, 1,
             PLL3RDY, 1,
             _reserved, 2);
    } CR;

    union
    {
        unsigned long REG;
        BITS(unsigned long,
             SW, 2,
             SWS, 2,
             HPRE, 4,
             PPRE1, 3,
             PPRE2, 3, ADCPRE, 2,
             PLLSRC, 1,
             PLLXTPRE, 1,
             PLLMUL, 4,
             OTGFSPRE, 1,
             _reserved, 1,
             MCO, 4,
             _reserved, 4);
    } CFGR;

    unsigned long CIR;
    unsigned long APB2RSTR;
    unsigned long APB1RSTR;
    unsigned long AHBENR;
    unsigned long APB2ENR;
    unsigned long ABP1ENR;
    unsigned long BDCR;
    unsigned long CSR;
    unsigned long AHBSTR;
    unsigned long CFGR2;
} RCC_Typedef;

#define RCC ((RCC_Typedef *)RCC_BASEADDR)

#endif