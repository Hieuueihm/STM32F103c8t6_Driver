#ifndef __STM32F013XX_RCC_H
#define __STM32F013XX_RCC_H
#pragma once

#include "stm32f103xx.h"

typedef struct
{
    volatile unsigned int CR;
    volatile unsigned int CFRG;
    volatile unsigned int CIR;
    volatile unsigned int APB2RSTR;
    volatile unsigned int APB1RSTR;
    volatile unsigned int AHBENR;
    volatile unsigned int APB2ENR;
    volatile unsigned int ABP1ENR;
    volatile unsigned int BDCR;
    volatile unsigned int CSR;
    volatile unsigned int AHBRSTR;
    volatile unsigned int CFGR2;
} RCC_Typedef_t;

#define RCC ((RCC_Typedef_t *)RCC_BASEADDR)

// APB2ENR CLK EN
#define AFIO_CLK_EN() (RCC->APB2ENR |= (1 << 0))
#define GPIOA_CLK_EN() (RCC->APB2ENR |= (1 << 2))
#define GPIOB_CLK_EN() (RCC->APB2ENR |= (1 << 3))
#define GPIOC_CLK_EN() (RCC->APB2ENR |= (1 << 4))
#define GPIOD_CLK_EN() (RCC->APB2ENR |= (1 << 5))
#define GPIOE_CLK_EN() (RCC->APB2ENR |= (1 << 6))
#define GPIOF_CLK_EN() (RCC->APB2ENR |= (1 << 7))
#define GPIOG_CLK_EN() (RCC->APB2ENR |= (1 << 8))
#define ADC1_CLK_EN() (RCC->APB2ENR |= (1 << 9))
#define ADC2_CLK_EN() (RCC->APB2ENR |= (1 << 10))
#define TIM1_CLK_EN() (RCC->APB2ENR |= (1 << 11))
#define SPI1_CLK_EN() (RCC->APB2ENR |= (1 << 12))
#define TIM8_CLK_EN() (RCC->APB2ENR |= (1 << 13))
#define USART1_CLK_EN() (RCC->APB2ENR |= (1 << 14))
#define ADC3_CLK_EN() (RCC->APB2ENR |= (1 << 152))
#define TIM9_CLK_EN() (RCC->APB2ENR |= (1 << 19))
#define TIM10_CLK_EN() (RCC->APB2ENR |= (1 << 20))
#define TIM11_CLK_EN() (RCC->APB2ENR |= (1 << 21))

// APB2 CLK DIS

#define AFIO_CLK_DIS() (RCC->APB2ENR &= ~(1 << 0))
#define GPIOA_CLK_DIS() (RCC->APB2ENR &= ~(1 << 2))
#define GPIOB_CLK_DIS() (RCC->APB2ENR &= ~(1 << 3))
#define GPIOC_CLK_DIS() (RCC->APB2ENR &= ~(1 << 4))
#define GPIOD_CLK_DIS() (RCC->APB2ENR &= ~(1 << 5))
#define GPIOE_CLK_DIS() (RCC->APB2ENR &= ~(1 << 6))
#define GPIOF_CLK_DIS() (RCC->APB2ENR &= ~(1 << 7))
#define GPIOG_CLK_DIS() (RCC->APB2ENR &= ~(1 << 8))
#define ADC1_CLK_DIS() (RCC->APB2ENR &= ~(1 << 9))
#define ADC2_CLK_DIS() (RCC->APB2ENR &= ~(1 << 10))
#define TIM1_CLK_DIS() (RCC->APB2ENR &= ~(1 << 11))
#define SPI1_CLK_DIS() (RCC->APB2ENR &= ~(1 << 12))
#define TIM8_CLK_DIS() (RCC->APB2ENR &= ~(1 << 13))
#define USART1_CLK_DIS() (RCC->APB2ENR &= ~(1 << 14))
#define ADC3_CLK_DIS() (RCC->APB2ENR &= ~(1 << 152))
#define TIM9_CLK_DIS() (RCC->APB2ENR &= ~(1 << 19))
#define TIM10_CLK_DIS() (RCC->APB2ENR &= ~(1 << 20))
#define TIM11_CLK_DIS() (RCC->APB2ENR &= ~(1 << 21))

// ABP1 CLK EN
#define TIME2_CLK_EN() (RCC->APB1ENR |= (1 << 0))
#define TIME3_CLK_EN() (RCC->APB1ENR |= (1 << 1))
#define TIME4_CLK_EN() (RCC->APB1ENR |= (1 << 2))
#define TIME5_CLK_EN() (RCC->APB1ENR |= (1 << 3))
#define TIME6_CLK_EN() (RCC->APB1ENR |= (1 << 4))
#define TIME7_CLK_EN() (RCC->APB1ENR |= (1 << 5))
#define TIME12_CLK_EN() (RCC->APB1ENR |= (1 << 6))
#define TIME13_CLK_EN() (RCC->APB1ENR |= (1 << 7))
#define TIME14_CLK_EN() (RCC->APB1ENR |= (1 << 8))
#define WWDG_CLK_EN() (RCC->APB1ENR |= (1 << 11))
#define SPI2_CLK_EN() (RCC->APB1ENR |= (1 << 14))
#define SPI3_CLK_EN() (RCC->APB1ENR |= (1 << 15))
#define USART2_CLK_EN() (RCC->APB1ENR |= (1 << 17))
#define USART3_CLK_EN() (RCC->APB1ENR |= (1 << 18))
#define USART4_CLK_EN() (RCC->APB1ENR |= (1 << 19))
#define USART5_CLK_EN() (RCC->APB1ENR |= (1 << 20))
#define I2C1_CLK_EN() (RCC->APB1ENR |= (1 << 21))
#define I2C2_CLK_EN() (RCC->APB1ENR |= (1 << 22))
#define USB_CLK_EN() (RCC->APB1ENR |= (1 << 23))
#define CAN_CLK_EN() (RCC->APB1ENR |= (1 << 25))
#define BKP_CLK_EN() (RCC->APB1ENR |= (1 << 27))
#define PWR_CLK_EN() (RCC->APB1ENR |= (1 << 28))
#define DAC_CLK_EN() (RCC->APB1ENR |= (1 << 29))

#define TIME2_CLK_DIS() (RCC->APB1ENR &= ~(1 << 0))
#define TIME3_CLK_DIS() (RCC->APB1ENR &= ~(1 << 1))
#define TIME4_CLK_DIS() (RCC->APB1ENR &= ~(1 << 2))
#define TIME5_CLK_DIS() (RCC->APB1ENR &= ~(1 << 3))
#define TIME6_CLK_DIS() (RCC->APB1ENR &= ~(1 << 4))
#define TIME7_CLK_DIS() (RCC->APB1ENR &= ~(1 << 5))
#define TIME12_CLK_DIS() (RCC->APB1ENR &= ~(1 << 6))
#define TIME13_CLK_DIS() (RCC->APB1ENR &= ~(1 << 7))
#define TIME14_CLK_DIS() (RCC->APB1ENR &= ~(1 << 8))
#define WWDG_CLK_DIS() (RCC->APB1ENR &= ~(1 << 11))
#define SPI2_CLK_DIS() (RCC->APB1ENR &= ~(1 << 14))
#define SPI3_CLK_DIS() (RCC->APB1ENR &= ~(1 << 15))
#define USART2_CLK_DIS() (RCC->APB1ENR &= ~(1 << 17))
#define USART3_CLK_DIS() (RCC->APB1ENR &= ~(1 << 18))
#define USART4_CLK_DIS() (RCC->APB1ENR &= ~(1 << 19))
#define USART5_CLK_DIS() (RCC->APB1ENR &= ~(1 << 20))
#define I2C1_CLK_DIS() (RCC->APB1ENR &= ~(1 << 21))
#define I2C2_CLK_DIS() (RCC->APB1ENR &= ~(1 << 22))
#define USB_CLK_DIS() (RCC->APB1ENR &= ~(1 << 23))
#define CAN_CLK_DIS() (RCC->APB1ENR &= ~(1 << 25))
#define BKP_CLK_DIS() (RCC->APB1ENR &= ~(1 << 27))
#define PWR_CLK_DIS() (RCC->APB1ENR &= ~(1 << 28))
#define DAC_CLK_DIS() (RCC->APB1ENR &= ~(1 << 29))

/*
    Control Register define
*/

#define RCC_CR_HSE_ON ((uint32_t)(1 << 16))
#define RCC_CR_HSE_READY ((uint32_t)(1 << 17))
#define RCC_CR_HSE_BYSPASS_ON ((uint32_t)(1 << 18))

#define RCC_CR_HSI_ON ((uint32_t)(1 << 0))
#define RCC_CR_HSI_READY ((uint32_t)(1 << 1))

#define RCC_CR_PLL_ON ((uint32_t)(1 << 24))
#define RCC_CR_PLL_LOCKED ((uint32_t)(1 << 25))

#define IS_RCC_HSE(__HSE__) ((__HSE__ == RCC_CR_HSE_ON) ||         \
                             (__HSE__ == RCC_CR_HSE_BYSPASS_ON) || \
                             (__HSE__ == RCC_CR_HSE_READY))

/*
    Configuration register define
*/
#define RCC_CFGR_SYSCLK_SELECTED ((uitn32_t)1 << 26)
#define RCC_CFGR_HSICLK_SELECTED ((uint32_t)((1 << 26) | (1 << 24)))
#define RCC_CFGR_HSECLK_SELECTED ((uint32_t)((1 << 26) | (1 << 25)))
#define RCC_CFGR_PLLDIV2_SELECTED ((uint32_t)((1 << 26) | (1 << 25) | (1 << 24)))
#define RCC_CFGR_USB_PRESCALER_NOT_DIVIDED ((uint32_t)(1 << 22))

#define RCC_CFGR_PLL_MUL_3 ((uint32_t)(1 << 18))
#define RCC_CFGR_PLL_MUL_4 ((uint32_t)(1 << 19))
#define RCC_CFGR_PLL_MUL_4 ((uint32_t)(1 << 19))
#define RCC_CFGR_PLL_MUL_5 ((uint32_t)((1 << 19) | (1 << 18)))
#define RCC_CFGR_PLL_MUL_6 ((uint32_t)((1 << 20)))
#define RCC_CFGR_PLL_MUL_7 ((uint32_t)((1 << 20) | (1 << 18)))
#define RCC_CFGR_PLL_MUL_8 ((uint32_t)((1 << 20) | (1 << 19)))
#define RCC_CFGR_PLL_MUL_9 ((uint32_t)((1 << 20) | (1 << 19) | (1 << 18)))
#define RCC_CFGR_PLL_MUL_10 ((uint32_t)((1 << 21)))
#define RCC_CFGR_PLL_MUL_11 ((uint32_t)((1 << 21) | (1 << 18)))
#define RCC_CFGR_PLL_MUL_12 ((uint32_t)((1 << 21) | (1 << 19)))
#define RCC_CFGR_PLL_MUL_13 ((uint32_t)((1 << 21) | (1 << 19) | (1 << 18)))
#define RCC_CFGR_PLL_MUL_14 ((uint32_t)((1 << 21) | (1 << 20)))
#define RCC_CFGR_PLL_MUL_15 ((uint32_t)((1 << 21) | (1 << 20) | (1 << 18)))
#define RCC_CFGR_PLL_MUL_16 ((uint32_t)((1 << 21) | (1 << 20) | (1 << 19)))

#define PLL_CFGR_HSECLK_DIV_2 ((uint32_t)(1 << 17))
#define PLL_CFGR_PLL_SRC ((uint32_t)(1 << 16))

#define PLL_CFGR_ADC_DIV_4 ((uint32_t)(1 << 14))
#define PLL_CFGR_ADC_DIV_6 ((uint32_t)(1 << 15))
#define PLL_CFGR_ADC_DIV_8 ((uint32_t)((1 << 15) | (1 < 14)))

#define PLL_CFGR_APB2_DIV_2 ((uint32_t)(1 << 13))
#define PLL_CFGR_APB2_DIV_4 ((uint32_t)((1 << 13) | (1 << 11)))
#define PLL_CFGR_APB2_DIV_8 ((uint32_t)((1 << 13) | (1 << 12)))
#define PLL_CFGR_APB2_DIV_16 DEFINE_UINT32_MASK(13, 12, 11)

#define PLL_CFGR_APB1_DIV_2 DEFINE_UINT32_MASK(13)
#define PLL_CFGR_APB1_DIV_4 DEFINE_UINT32_MASK(13, 11)
#define PLL_CFGR_APB1_DIV_8 DEFINE_UINT32_MASK(13. 12)
#define PLL_CFGR_APB1_DIV_16 DEFINE_UINT32_MASK(13. 12, 11)

#define PLL_CFGR_AHB_DIV_2 DEFINE_UINT32_MASK(7)
#define PLL_CFGR_AHB_DIV_4 DEFINE_UINT32_MASK(7, 4)
#define PLL_CFGR_AHB_DIV_8 DEFINE_UINT32_MASK(7, 5)
#define PLL_CFGR_AHB_DIV_16 DEFINE_UINT32_MASK(7, 5, 4)
#define PLL_CFGR_AHB_DIV_64 DEFINE_UINT32_MASK(7, 6)
#define PLL_CFGR_AHB_DIV_128 DEFINE_UINT32_MASK(7, 6, 4)
#define PLL_CFGR_AHB_DIV_256 DEFINE_UINT32_MASK(7, 6, 5)
#define PLL_CFGR_AHB_DIV_512 DEFINE_UINT32_MASK(7, 6, 5, 4)

/*
    APB2 Peripheral Reset Register -- APB2RSTR
*/
#define PLL_APB2RSTR_TIM11_RST DEFINE_UINT32_MASK(21)
#define PLL_APB2RSTR_TIM10_RST DEFINE_UINT32_MASK(20)
#define PLL_APB2RSTR_TIM9_RST DEFINE_UINT32_MASK(19)
#define PLL_APB2RSTR_ADC3_RST DEFINE_UINT32_MASK(15)
#define PLL_APB2RSTR_USART1_RST DEFINE_UINT32_MASK(14)
#define PLL_APB2RSTR_TIM8_RST DEFINE_UINT32_MASK(13)
#define PLL_APB2RSTR_SPI1_RST DEFINE_UINT32_MASK(12)
#define PLL_APB2RSTR_TIM1_RST DEFINE_UINT32_MASK(11)
#define PLL_APB2RSTR_ADC2_RST DEFINE_UINT32_MASK(10)
#define PLL_APB2RSTR_ADC1_RST DEFINE_UINT32_MASK(9)
#define PLL_APB2RSTR_IOPG_RST DEFINE_UINT32_MASK(8)
#define PLL_APB2RSTR_IOPF_RST DEFINE_UINT32_MASK(7)
#define PLL_APB2RSTR_IOPE_RST DEFINE_UINT32_MASK(6)
#define PLL_APB2RSTR_IOPD_RST DEFINE_UINT32_MASK(5)
#define PLL_APB2RSTR_IOPC_RST DEFINE_UINT32_MASK(4)
#define PLL_APB2RSTR_IOPB_RST DEFINE_UINT32_MASK(3)
#define PLL_APB2RSTR_IOPA_RST DEFINE_UINT32_MASK(2)
#define PLL_APB2RSTR_AFIO_RST DEFINE_UINT32_MASK(0)

/*
    APB1 Peripheral Reset Register -- APB1RSTR
*/

#define PLL_APB1RSTR_DAC_RST DEFINE_UINT32_MASK(29)
#define PLL_APB1RSTR_PWR_RST DEFINE_UINT32_MASK(28)
#define PLL_APB1RSTR_BKP_RST DEFINE_UINT32_MASK(27)
#define PLL_APB1RSTR_CAN_RST DEFINE_UINT32_MASK(25)
#define PLL_APB1RSTR_USB_RST DEFINE_UINT32_MASK(23)
#define PLL_APB1RSTR_I2C2_RST DEFINE_UINT32_MASK(22)
#define PLL_APB1RSTR_I2C1_RST DEFINE_UINT32_MASK(21)
#define PLL_APB1RSTR_UART5_RST DEFINE_UINT32_MASK(20)
#define PLL_APB1RSTR_UART4_RST DEFINE_UINT32_MASK(19)
#define PLL_APB1RSTR_UART3_RST DEFINE_UINT32_MASK(18)
#define PLL_APB1RSTR_UART2_RST DEFINE_UINT32_MASK(17)
#define PLL_APB1RSTR_SPI3_RST DEFINE_UINT32_MASK(15)
#define PLL_APB1RSTR_SPI2_RST DEFINE_UINT32_MASK(14)
#define PLL_APB1RSTR_WWDG_RST DEFINE_UINT32_MASK(11)
#define PLL_APB1RSTR_TIM14_RST DEFINE_UINT32_MASK(8)
#define PLL_APB1RSTR_TIM13_RST DEFINE_UINT32_MASK(7)
#define PLL_APB1RSTR_TIM12_RST DEFINE_UINT32_MASK(6)
#define PLL_APB1RSTR_TIM7_RST DEFINE_UINT32_MASK(5)
#define PLL_APB1RSTR_TIM6_RST DEFINE_UINT32_MASK(4)
#define PLL_APB1RSTR_TIM5_RST DEFINE_UINT32_MASK(3)
#define PLL_APB1RSTR_TIM4_RST DEFINE_UINT32_MASK(2)
#define PLL_APB1RSTR_TIM3_RST DEFINE_UINT32_MASK(1)
#define PLL_APB1RSTR_TIM2_RST DEFINE_UINT32_MASK(0)

#endif