#ifndef __STM32F103XX_GPIO_H
#define __STM32F103XX_GPIO_H

#include "stm32f103xx.h"
#include "stm32f103xx_rcc.h"

typedef struct
{
       volatile unsigned int CRL;
       volatile unsigned int CRH;
       volatile unsigned int IDR;
       volatile unsigned int ODR;
       volatile unsigned int BSRR;
       volatile unsigned int BRR;
       volatile unsigned int LCKR;
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
       GPIO_PIN_0 = 0,
       GPIO_PIN_1,
       GPIO_PIN_2,
       GPIO_PIN_3,
       GPIO_PIN_4,
       GPIO_PIN_5,
       GPIO_PIN_6,
       GPIO_PIN_7,
       GPIO_PIN_8,
       GPIO_PIN_9,
       GPIO_PIN_10,
       GPIO_PIN_11,
       GPIO_PIN_12,
       GPIO_PIN_13,
       GPIO_PIN_14,
       GPIO_PIN_15,
} GPIO_Pin;

typedef struct
{
       uint32_t Pin;
       GPIO_Mode Mode;
} GPIO_PinConfig_t;

typedef enum
{
       GPIO_PIN_RESET = 0u,
       GPIO_PIN_SET
} GPIO_PinState;
/*
       Initialization and Deinitialization functions
*/
void GPIO_Init(GPIO_Typedef_t *GPIOx, GPIO_PinConfig_t *PinConfig);
void GPIO_DeInit(GPIO_Typedef_t *GPIOx);

// /*
//        IO Operations function
// */

GPIO_PinState GPIO_ReadPin(GPIO_Typedef_t *pGPIOx, GPIO_Pin Pin);
void GPIO_WritePin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin, GPIO_PinState PinState);
void GPIO_TogglePin(GPIO_Typedef_t *pGPIOx, GPIO_Pin Pin);
void GPIO_EXTI_IRQHandler(GPIO_Pin Pin);

#endif
