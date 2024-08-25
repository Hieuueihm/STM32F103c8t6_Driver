#ifndef __STM32F103XX_GPIO_H
#define __STM32F103XX_GPIO_H

#include "stm32f103xx.h"
#include "stm32f103xx_rcc.h"
#pragma once

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

typedef struct
{
       volatile unsigned int EVCR;
       volatile unsigned int MAPR;
       volatile unsigned int EXTICR1;
       volatile unsigned int EXTICR2;
       volatile unsigned int EXTICR3;
       volatile unsigned int EXTICR4;
       volatile unsigned int MAPR2;

} AFIO_Typedef_t;

#define GPIOA ((GPIO_Typedef_t *)GPIOA_BASEADDR)
#define GPIOB ((GPIO_Typedef_t *)GPIOB_BASEADDR)
#define GPIOC ((GPIO_Typedef_t *)GPIOC_BASEADDR)

#define AFIO ((AFIO_Typedef_t *)AFIO_BASEADDR)

typedef enum
{
       GPIO_MODE_INPUT_ANALOG = (0 << 2) | 0,
       GPIO_MODE_INPUT_FLOATING = (1 << 2) | 0,
       GPIO_MODE_INPUT_PU = (2 << 2) | 0,
       GPIO_MODE_INPUT_PD = (2 << 2) | 0,
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

typedef enum
{
       GPIO_EN_CLK = 0u,
       GPIO_DIS_CLK
} GPIO_En_Dis_Clk;
/*
       AFIO Remap define
*/

/*
       MAPR
*/
#define GPIO_Remap_SPI1 DEFINE_UINT32_MASK(0)
#define GPIO_Remap_I2C1 DEFINE_UINT32_MASK(1)
#define GPIO_Remap_USART1 DEFINE_UINT32_MASK(2)
#define GPIO_Remap_USART2 DEFINE_UINT32_MASK(3)
#define GPIO_PartialRemap_USART3 DEFINE_UINT32_MASK(4)
#define GPIO_FullRemap_USART3 DEFINE_UINT32_MASK(4, 5)
#define GPIO_PartialRemap_TIM1 DEFINE_UINT32_MASK(6)
#define GPIO_FullRemap_TIM1 DEFINE_UINT32_MASK(7, 6)
#define GPIO_PartialRemap_TIM2 DEFINE_UINT32_MASK(9)
#define GPIO_FullRemap_TIM2 DEFINE_UINT32_MASK(9, 8)
#define GPIO_PartialRemap_TIM3 DEFINE_UINT32_MASK(11)
#define GPIO_FullRemap_TIM3 DEFINE_UINT32_MASK(11, 10)
#define GPIO_Remap_TIM4 DEFINE_UINT32_MASK(12)
#define GPIO_Remap1_CAN DEFINE_UINT32_MASK(14)
#define GPIO_Remap2_CAN DEFINE_UINT32_MASK(14, 13)
#define GPIO_Remap_PD01 DEFINE_UINT32_MASK(15)
#define GPIO_Remap_SWJ_NoNJTRST DEFINE_UINT32_MASK(24)
#define GPIO_Remap_SWJ_JTAGDisable DEFINE_UINT32_MASK(25)
#define GPIO_Remap_SWJ_Disable DEFINE_UINT32_MASK(26)

/*
       MAPR2
*/

#define GPIO_Remap_TIM15 ((uint32_t)0x80000001)    /*!< TIM15 Alternate Function mapping (only for Value line devices) */
#define GPIO_Remap_TIM16 ((uint32_t)0x80000002)    /*!< TIM16 Alternate Function mapping (only for Value line devices) */
#define GPIO_Remap_TIM17 ((uint32_t)0x80000004)    /*!< TIM17 Alternate Function mapping (only for Value line devices) */
#define GPIO_Remap_CEC ((uint32_t)0x80000008)      /*!< CEC Alternate Function mapping (only for Value line devices) */
#define GPIO_Remap_TIM1_DMA ((uint32_t)0x80000010) /*!< TIM1 DMA requests mapping (only for Value line devices) */

#define GPIO_Remap_TIM9 ((uint32_t)0x80000020)      /*!< TIM9 Alternate Function mapping (only for XL-density devices) */
#define GPIO_Remap_TIM10 ((uint32_t)0x80000040)     /*!< TIM10 Alternate Function mapping (only for XL-density devices) */
#define GPIO_Remap_TIM11 ((uint32_t)0x80000080)     /*!< TIM11 Alternate Function mapping (only for XL-density devices) */
#define GPIO_Remap_TIM13 ((uint32_t)0x80000100)     /*!< TIM13 Alternate Function mapping (only for High density Value line and XL-density devices) */
#define GPIO_Remap_TIM14 ((uint32_t)0x80000200)     /*!< TIM14 Alternate Function mapping (only for High density Value line and XL-density devices) */
#define GPIO_Remap_FSMC_NADV ((uint32_t)0x80000400) /*!< FSMC_NADV Alternate Function mapping (only for High density Value line and XL-density devices) */

#define GPIO_Remap_TIM67_DAC_DMA ((uint32_t)0x80000800) /*!< TIM6/TIM7 and DAC DMA requests remapping (only for High density Value line devices) */
#define GPIO_Remap_TIM12 ((uint32_t)0x80001000)         /*!< TIM12 Alternate Function mapping (only for High density Value line devices) */
#define GPIO_Remap_MISC ((uint32_t)0x80002000)          /*!< Miscellaneous Remap (DMA2 Channel5 Position and DAC Trigger remapping, \
                                                         */

#define IS_GPIO_REMAP(REMAP) (((REMAP) == GPIO_Remap_SPI1) || ((REMAP) == GPIO_Remap_I2C1) ||                   \
                              ((REMAP) == GPIO_Remap_USART1) || ((REMAP) == GPIO_Remap_USART2) ||               \
                              ((REMAP) == GPIO_PartialRemap_USART3) || ((REMAP) == GPIO_FullRemap_USART3) ||    \
                              ((REMAP) == GPIO_PartialRemap_TIM1) || ((REMAP) == GPIO_FullRemap_TIM1) ||        \
                              ((REMAP) == GPIO_PartialRemap1_TIM2) || ((REMAP) == GPIO_PartialRemap2_TIM2) ||   \
                              ((REMAP) == GPIO_FullRemap_TIM2) || ((REMAP) == GPIO_PartialRemap_TIM3) ||        \
                              ((REMAP) == GPIO_FullRemap_TIM3) || ((REMAP) == GPIO_Remap_TIM4) ||               \
                              ((REMAP) == GPIO_Remap1_CAN1) || ((REMAP) == GPIO_Remap2_CAN1) ||                 \
                              ((REMAP) == GPIO_Remap_PD01) || ((REMAP) == GPIO_Remap_TIM5CH4_LSI) ||            \
                              ((REMAP) == GPIO_Remap_ADC1_ETRGINJ) || ((REMAP) == GPIO_Remap_ADC1_ETRGREG) ||   \
                              ((REMAP) == GPIO_Remap_ADC2_ETRGINJ) || ((REMAP) == GPIO_Remap_ADC2_ETRGREG) ||   \
                              ((REMAP) == GPIO_Remap_ETH) || ((REMAP) == GPIO_Remap_CAN2) ||                    \
                              ((REMAP) == GPIO_Remap_SWJ_NoJTRST) || ((REMAP) == GPIO_Remap_SWJ_JTAGDisable) || \
                              ((REMAP) == GPIO_Remap_SWJ_Disable) || ((REMAP) == GPIO_Remap_SPI3) ||            \
                              ((REMAP) == GPIO_Remap_TIM2ITR1_PTP_SOF) || ((REMAP) == GPIO_Remap_PTP_PPS) ||    \
                              ((REMAP) == GPIO_Remap_TIM15) || ((REMAP) == GPIO_Remap_TIM16) ||                 \
                              ((REMAP) == GPIO_Remap_TIM17) || ((REMAP) == GPIO_Remap_CEC) ||                   \
                              ((REMAP) == GPIO_Remap_TIM1_DMA) || ((REMAP) == GPIO_Remap_TIM9) ||               \
                              ((REMAP) == GPIO_Remap_TIM10) || ((REMAP) == GPIO_Remap_TIM11) ||                 \
                              ((REMAP) == GPIO_Remap_TIM13) || ((REMAP) == GPIO_Remap_TIM14) ||                 \
                              ((REMAP) == GPIO_Remap_FSMC_NADV) || ((REMAP) == GPIO_Remap_TIM67_DAC_DMA) ||     \
                              ((REMAP) == GPIO_Remap_TIM12) || ((REMAP) == GPIO_Remap_MISC))

#define GPIO_PortSourceGPIOA ((uint8_t)0x00)
#define GPIO_PortSourceGPIOB ((uint8_t)0x01)
#define GPIO_PortSourceGPIOC ((uint8_t)0x02)
#define GPIO_PortSourceGPIOD ((uint8_t)0x03)
#define GPIO_PortSourceGPIOE ((uint8_t)0x04)
#define GPIO_PortSourceGPIOF ((uint8_t)0x05)
#define GPIO_PortSourceGPIOG ((uint8_t)0x06)
#define IS_GPIO_EVENTOUT_PORT_SOURCE(PORTSOURCE) (((PORTSOURCE) == GPIO_PortSourceGPIOA) || \
                                                  ((PORTSOURCE) == GPIO_PortSourceGPIOB) || \
                                                  ((PORTSOURCE) == GPIO_PortSourceGPIOC) || \
                                                  ((PORTSOURCE) == GPIO_PortSourceGPIOD) || \
                                                  ((PORTSOURCE) == GPIO_PortSourceGPIOE))

#define GPIO_PinSource0 ((uint8_t)0x00)
#define GPIO_PinSource1 ((uint8_t)0x01)
#define GPIO_PinSource2 ((uint8_t)0x02)
#define GPIO_PinSource3 ((uint8_t)0x03)
#define GPIO_PinSource4 ((uint8_t)0x04)
#define GPIO_PinSource5 ((uint8_t)0x05)
#define GPIO_PinSource6 ((uint8_t)0x06)
#define GPIO_PinSource7 ((uint8_t)0x07)
#define GPIO_PinSource8 ((uint8_t)0x08)
#define GPIO_PinSource9 ((uint8_t)0x09)
#define GPIO_PinSource10 ((uint8_t)0x0A)
#define GPIO_PinSource11 ((uint8_t)0x0B)
#define GPIO_PinSource12 ((uint8_t)0x0C)
#define GPIO_PinSource13 ((uint8_t)0x0D)
#define GPIO_PinSource14 ((uint8_t)0x0E)
#define GPIO_PinSource15 ((uint8_t)0x0F)

#define IS_GPIO_PIN_SOURCE(PINSOURCE) (((PINSOURCE) == GPIO_PinSource0) ||  \
                                       ((PINSOURCE) == GPIO_PinSource1) ||  \
                                       ((PINSOURCE) == GPIO_PinSource2) ||  \
                                       ((PINSOURCE) == GPIO_PinSource3) ||  \
                                       ((PINSOURCE) == GPIO_PinSource4) ||  \
                                       ((PINSOURCE) == GPIO_PinSource5) ||  \
                                       ((PINSOURCE) == GPIO_PinSource6) ||  \
                                       ((PINSOURCE) == GPIO_PinSource7) ||  \
                                       ((PINSOURCE) == GPIO_PinSource8) ||  \
                                       ((PINSOURCE) == GPIO_PinSource9) ||  \
                                       ((PINSOURCE) == GPIO_PinSource10) || \
                                       ((PINSOURCE) == GPIO_PinSource11) || \
                                       ((PINSOURCE) == GPIO_PinSource12) || \
                                       ((PINSOURCE) == GPIO_PinSource13) || \
                                       ((PINSOURCE) == GPIO_PinSource14) || \
                                       ((PINSOURCE) == GPIO_PinSource15))

/*
       IO Init Function
*/
void GPIO_Clock_Control(GPIO_Typedef_t *GPIOx, GPIO_En_Dis_Clk ClkControl);
void GPIO_Init(GPIO_Typedef_t *GPIOx, GPIO_PinConfig_t *PinConfig);
void GPIO_DeInit(GPIO_Typedef_t *GPIOx);
/*
       IO Operation Functions
*/

GPIO_PinState GPIO_ReadPin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin);
void GPIO_WritePin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin, GPIO_PinState PinState);
void GPIO_TogglePin(GPIO_Typedef_t *pGPIOx, GPIO_Pin Pin);
/*
       AFIO Functions
*/
void GPIO_EventOutputConfig(uint8_t GPIO_PortSource, uint8_t GPIO_PinSource);
void GPIO_PinRemapConfig(uint32_t GPIO_Remap);
#endif
