#ifndef __RCC_H
#define __RCC_H

#include "stm32f103xx.h"
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
    unsigned long AHBRSTR;
    unsigned long CFGR2;
} RCC_Typedef;

#define RCC ((RCC_Typedef *)RCC_BASEADDR)

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

#endif