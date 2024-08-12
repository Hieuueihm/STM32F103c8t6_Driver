#ifndef __GPIO_H
#define __GPIO_H

#include "define.h"
#include "stm32f103c8t6.h"

typedef struct
{
       BUNION(CRL, unsigned long,
              MODE_0, 2,
              CNF_0, 2,
              MODE_1, 2,
              CONF_1, 2,
              MODE_2, 2,
              CNF_2, 2,
              MODE_3, 2,
              CONF_3, 2,
              MODE_4, 2,
              CNF_4, 2,
              MODE_5, 2,
              CONF_5, 2,
              MODE_6, 2,
              CNF_6, 2,
              MODE_7, 2,
              CONF_7, 2);
       BUNION(CRH, unsigned long,
              MODE_8, 2,
              CNF_8, 2,
              MODE_9, 2,
              CONF_9, 2,
              MODE_10, 2,
              CNF_10, 2,
              MODE_11, 2,
              CONF_11, 2,
              MODE_12, 2,
              CNF_12, 2,
              MODE_13, 2,
              CONF_13, 2,
              MODE_14, 2,
              CNF_14, 2,
              MODE_15, 2,
              CONF_15, 2);

       union
       {
              unsigned long REG;
              struct
              {
                     BITS(unsigned long,
                          B0, 1,
                          B1, 1,
                          B2, 1,
                          B3, 1,
                          B4, 1,
                          B5, 1,
                          B6, 1,
                          B7, 1,
                          B8, 1,
                          B9, 1,
                          B10, 1,
                          B11, 1,
                          B12, 1,
                          B13, 1,
                          B14, 1,
                          B15, 1);
                     unsigned long _reserved : 16;
              } BITS;
       } IDR;
       union
       {
              unsigned long REG;
              struct
              {
                     BITS(unsigned long,
                          B0, 1,
                          B1, 1,
                          B2, 1,
                          B3, 1,
                          B4, 1,
                          B5, 1,
                          B6, 1,
                          B7, 1,
                          B8, 1,
                          B9, 1,
                          B10, 1,
                          B11, 1,
                          B12, 1,
                          B13, 1,
                          B14, 1,
                          B15, 1);
                     unsigned long _reserved : 16;
              } BITS;
       } ODR;
       union
       {
              unsigned long REG;
              struct
              {
                     BITS(unsigned long,
                          BSR0, 1,
                          BSR1, 1,
                          BSR2, 1,
                          BSR3, 1,
                          BSR4, 1,
                          BSR5, 1,
                          BSR6, 1,
                          BSR7, 1,
                          BSR8, 1,
                          BSR9, 1,
                          BSR10, 1,
                          BSR11, 1,
                          BSR12, 1,
                          BSR13, 1,
                          BSR14, 1,
                          BSR15, 1);
                     BITS(unsigned long,
                          BR0, 1,
                          BR1, 1,
                          BR2, 1,
                          BR3, 1,
                          BR4, 1,
                          BR5, 1,
                          BR6, 1,
                          BR7, 1,
                          BR8, 1,
                          BR9, 1,
                          BR10, 1,
                          BR11, 1,
                          BR12, 1,
                          BR13, 1,
                          BR14, 1,
                          BR15, 1);
              } BITS;
       } BSRR;
       union
       {
              unsigned long REG;
              struct
              {
                     BITS(unsigned long,
                          B0, 1,
                          B1, 1,
                          B2, 1,
                          B3, 1,
                          B4, 1,
                          B5, 1,
                          B6, 1,
                          B7, 1,
                          B8, 1,
                          B9, 1,
                          B10, 1,
                          B11, 1,
                          B12, 1,
                          B13, 1,
                          B14, 1,
                          B15, 1);
                     unsigned long _reserved : 16;
              } BITS;
       } BRR;
       union
       {
              unsigned long REG;
              struct
              {
                     BITS(unsigned long,
                          B0, 1,
                          B1, 1,
                          B2, 1,
                          B3, 1,
                          B4, 1,
                          B5, 1,
                          B6, 1,
                          B7, 1,
                          B8, 1,
                          B9, 1,
                          B10, 1,
                          B11, 1,
                          B12, 1,
                          B13, 1,
                          B14, 1,
                          B15, 1,
                          B16, 1);
                     unsigned long _reserved : 15;
              } BITS;
       } LCKR;
} GPIO_Typedef;

#define GPIOA ((GPIO_Typedef *)GPIOA_BASEADDR)
#define GPIOB ((GPIO_Typedef *)GPIOB_BASEADDR)
#define GPIOC ((GPIO_Typedef *)GPIOC_BASEADDR)

typedef enum
{
       GPIO_MODE_INPUT_ANALOG = (0 << 2) | 0,
       GPIO_MODE_INPUT_FLOATING = (1 << 2) | 0,
       GPIO_MODE_INPUT_PU_PD = (2 << 2) | 0,

       GPIO_MODE_OUTPUT_10HZ_PP = (0 << 2) | 1,
       GPIO_MODE_OUTPUT_10HZ_OPEN_DRAIN = (1 << 2) | 1,
       GPIO_MODE_OUTPUT_10HZ_AF_PP = (2 << 2) | 1,
       GPIO_MODE_OUTPUT_10HZ_AF_OPEN_DRAIN = (3 << 2) | 1,

       GPIO_MODE_OUTPUT_2HZ_PP = (0 << 2) | 2,
       GPIO_MODE_OUTPUT_2HZ_OPEN_DRAIN = (1 << 2) | 2,
       GPIO_MODE_OUTPUT_2HZ_AF_PP = (2 << 2) | 2,
       GPIO_MODE_OUTPUT_HZ_AF_OPEN_DRAIN = (3 << 2) | 2,

       GPIO_MODE_OUTPUT_50HZ_PP = (0 << 2) | 3,
       GPIO_MODE_OUTPUT_50HZ_OPEN_DRAIN = (1 << 2) | 3,
       GPIO_MODE_OUTPUT_50HZ_AF_PP = (2 << 2) | 3,
       GPIO_MODE_OUTPUT_50HZ_AF_OPEN_DRAIN = (3 << 2) | 3,
} GPIO_CR;

#endif
