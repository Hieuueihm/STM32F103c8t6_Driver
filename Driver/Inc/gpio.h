#ifndef __GPIO_H
#define __GPIO_H

#include "stm32f103xx.h"
#include "rcc.h"

typedef struct
{
       unsigned long CRL;
       unsigned long CRH;
       unsigned long IDR;
       unsigned long ODR;
       unsigned long BSRR;
       unsigned long BRR;
       unsigned long LCKR;
} GPIO_Typedef_t;

#define GPIOA ((GPIO_Typedef_t *)GPIOA_BASEADDR)
#define GPIOB ((GPIO_Typedef_t *)GPIOB_BASEADDR)
#define GPIOC ((GPIO_Typedef_t *)GPIOC_BASEADDR)

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
       GPIO_MODE_OUTPUT_2HZ_AF_OPEN_DRAIN = (3 << 2) | 2,

       GPIO_MODE_OUTPUT_50HZ_PP = (0 << 2) | 3,
       GPIO_MODE_OUTPUT_50HZ_OPEN_DRAIN = (1 << 2) | 3,
       GPIO_MODE_OUTPUT_50HZ_AF_PP = (2 << 2) | 3,
       GPIO_MODE_OUTPUT_50HZ_AF_OPEN_DRAIN = (3 << 2) | 3,
} GPIO_Mode;

typedef enum
{
       GPIO_Pin_0 = 0,
       GPIO_Pin_1,
       GPIO_Pin_2,
       GPIO_Pin_3,
       GPIO_Pin_4,
       GPIO_Pin_5,
       GPIO_Pin_6,
       GPIO_Pin_7,
       GPIO_Pin_8,
       GPIO_Pin_9,
       GPIO_Pin_10,
       GPIO_Pin_11,
       GPIO_Pin_12,
       GPIO_Pin_13,
       GPIO_Pin_14,
       GPIO_Pin_15,
} GPIO_Pin;

typedef struct
{
       GPIO_Pin Pin;
       GPIO_Mode Mode;
} GPIO_PinConfig_t;

typedef enum
{
       GPIO_PinReset = LOW,
       GPIO_PinSet = HIGH
} GPIO_PinState;
typedef struct
{
       GPIO_PinConfig_t *GPIO_PinConfig;
       GPIO_Typedef_t *pGPIOx;
} GPIO_Handle_t;

/*
       Initialization and Deinitialization functions
*/
void GPIO_Init(GPIO_Handle_t *pGPIOx);
void GPIO_DeInit(GPIO_Handle_t *pGPIOx);

/*
       IO Operations function
*/

GPIO_PinState GPIO_ReadPin(GPIO_Handle_t *pGPIOx, GPIO_Pin Pin);
void GPIO_WritePin(GPIO_Handle_t *pGPIOx, GPIO_Pin Pin, GPIO_PinState PinState);
void GPIO_TogglePin(GPIO_Handle_t *pGPIOx, GPIO_Pin Pin);
void GPIO_EXTI_IRQHandler(GPIO_Pin Pin);
;

#endif
