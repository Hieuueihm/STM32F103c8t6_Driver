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
#define GPIO_Remap_SPI1 ((uint32_t)0x00000001)             /*!< SPI1 Alternate Function mapping */
#define GPIO_Remap_I2C1 ((uint32_t)0x00000002)             /*!< I2C1 Alternate Function mapping */
#define GPIO_Remap_USART1 ((uint32_t)0x00000004)           /*!< USART1 Alternate Function mapping */
#define GPIO_Remap_USART2 ((uint32_t)0x00000008)           /*!< USART2 Alternate Function mapping */
#define GPIO_PartialRemap_USART3 ((uint32_t)0x00140010)    /*!< USART3 Partial Alternate Function mapping */
#define GPIO_FullRemap_USART3 ((uint32_t)0x00140030)       /*!< USART3 Full Alternate Function mapping */
#define GPIO_PartialRemap_TIM1 ((uint32_t)0x00160040)      /*!< TIM1 Partial Alternate Function mapping */
#define GPIO_FullRemap_TIM1 ((uint32_t)0x001600C0)         /*!< TIM1 Full Alternate Function mapping */
#define GPIO_PartialRemap1_TIM2 ((uint32_t)0x00180100)     /*!< TIM2 Partial1 Alternate Function mapping */
#define GPIO_PartialRemap2_TIM2 ((uint32_t)0x00180200)     /*!< TIM2 Partial2 Alternate Function mapping */
#define GPIO_FullRemap_TIM2 ((uint32_t)0x00180300)         /*!< TIM2 Full Alternate Function mapping */
#define GPIO_PartialRemap_TIM3 ((uint32_t)0x001A0800)      /*!< TIM3 Partial Alternate Function mapping */
#define GPIO_FullRemap_TIM3 ((uint32_t)0x001A0C00)         /*!< TIM3 Full Alternate Function mapping */
#define GPIO_Remap_TIM4 ((uint32_t)0x00001000)             /*!< TIM4 Alternate Function mapping */
#define GPIO_Remap1_CAN1 ((uint32_t)0x001D4000)            /*!< CAN1 Alternate Function mapping */
#define GPIO_Remap2_CAN1 ((uint32_t)0x001D6000)            /*!< CAN1 Alternate Function mapping */
#define GPIO_Remap_PD01 ((uint32_t)0x00008000)             /*!< PD01 Alternate Function mapping */
#define GPIO_Remap_TIM5CH4_LSI ((uint32_t)0x00200001)      /*!< LSI connected to TIM5 Channel4 input capture for calibration */
#define GPIO_Remap_ADC1_ETRGINJ ((uint32_t)0x00200002)     /*!< ADC1 External Trigger Injected Conversion remapping */
#define GPIO_Remap_ADC1_ETRGREG ((uint32_t)0x00200004)     /*!< ADC1 External Trigger Regular Conversion remapping */
#define GPIO_Remap_ADC2_ETRGINJ ((uint32_t)0x00200008)     /*!< ADC2 External Trigger Injected Conversion remapping */
#define GPIO_Remap_ADC2_ETRGREG ((uint32_t)0x00200010)     /*!< ADC2 External Trigger Regular Conversion remapping */
#define GPIO_Remap_ETH ((uint32_t)0x00200020)              /*!< Ethernet remapping (only for Connectivity line devices) */
#define GPIO_Remap_CAN2 ((uint32_t)0x00200040)             /*!< CAN2 remapping (only for Connectivity line devices) */
#define GPIO_Remap_SWJ_NoJTRST ((uint32_t)0x00300100)      /*!< Full SWJ Enabled (JTAG-DP + SW-DP) but without JTRST */
#define GPIO_Remap_SWJ_JTAGDisable ((uint32_t)0x00300200)  /*!< JTAG-DP Disabled and SW-DP Enabled */
#define GPIO_Remap_SWJ_Disable ((uint32_t)0x00300400)      /*!< Full SWJ Disabled (JTAG-DP + SW-DP) */
#define GPIO_Remap_SPI3 ((uint32_t)0x00201100)             /*!< SPI3/I2S3 Alternate Function mapping (only for Connectivity line devices) */
#define GPIO_Remap_TIM2ITR1_PTP_SOF ((uint32_t)0x00202000) /*!< Ethernet PTP output or USB OTG SOF (Start of Frame) connected \
                                                                to TIM2 Internal Trigger 1 for calibration                    \
                                                                (only for Connectivity line devices) */
#define GPIO_Remap_PTP_PPS ((uint32_t)0x00204000)          /*!< Ethernet MAC PPS_PTS output on PB05 (only for Connectivity line devices) */

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
                                                             only for High density Value line devices) */
/*
       Initialization and Deinitialization functions
*/
void GPIO_Clock_Control(GPIO_Typedef_t *GPIOx, GPIO_En_Dis_Clk ClkControl);
void GPIO_Init(GPIO_Typedef_t *GPIOx, GPIO_PinConfig_t *PinConfig);
void GPIO_DeInit(GPIO_Typedef_t *GPIOx);

// /*
//        IO Operations function
// */

GPIO_PinState GPIO_ReadPin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin);
void GPIO_WritePin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin, GPIO_PinState PinState);
void GPIO_TogglePin(GPIO_Typedef_t *pGPIOx, GPIO_Pin Pin);
void GPIO_EXTI_IRQHandler(GPIO_Pin Pin);

#endif
