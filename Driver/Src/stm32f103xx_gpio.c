#include "stm32f103xx_gpio.h"

/*
       Initialization and Deinitialization functions
*/

#define IS_GPIO_PIN(__PIN__) (__PIN__ >= GPIO_Pin_0 && __PIN__ <= GPIO_Pin_15)
#define IS_GPIO_INSTANCE(__INSTANCE__) ((__INSTANCE__ == GPIOA) || (__INSTANCE__ == GPIOB) || (__INSTANCE__ == GPIOC))
#define IS_GPIO_MODE(__MODE__) (                         \
    (__MODE__ == GPIO_MODE_INPUT_ANALOG) ||              \
    (__MODE__ == GPIO_MODE_INPUT_FLOATING) ||            \
    (__MODE__ == GPIO_MODE_INPUT_PU_PD) ||               \
                                                         \
    (__MODE__ == GPIO_MODE_OUTPUT_10HZ_PP) ||            \
    (__MODE__ == GPIO_MODE_OUTPUT_10HZ_OPEN_DRAIN) ||    \
    (__MODE__ == GPIO_MODE_OUTPUT_10HZ_AF_OPEN_DRAIN) || \
    (__MODE__ == GPIO_MODE_OUTPUT_10HZ_AF_PP) ||         \
                                                         \
    (__MODE__ == GPIO_MODE_OUTPUT_2HZ_PP) ||             \
    (__MODE__ == GPIO_MODE_OUTPUT_2HZ_OPEN_DRAIN) ||     \
    (__MODE__ == GPIO_MODE_OUTPUT_2HZ_AF_PP) ||          \
    (__MODE__ == GPIO_MODE_OUTPUT_2HZ_AF_OPEN_DRAIN) ||  \
                                                         \
    (__MODE__ == GPIO_MODE_OUTPUT_50HZ_PP) ||            \
    (__MODE__ == GPIO_MODE_OUTPUT_50HZ_OPEN_DRAIN) ||    \
    (__MODE__ == GPIO_MODE_OUTPUT_50HZ_AF_PP) ||         \
    (__MODE__ == GPIO_MODE_OUTPUT_50HZ_AF_OPEN_DRAIN))

#define IS_GPIO_REMAP(__REMAP__) (((__REMAP__) == GPIO_Remap_SPI1) || ((__REMAP__) == GPIO_Remap_I2C1) ||                   \
                                  ((__REMAP__) == GPIO_Remap_USART1) || ((__REMAP__) == GPIO_Remap_USART2) ||               \
                                  ((__REMAP__) == GPIO_PartialRemap_USART3) || ((__REMAP__) == GPIO_FullRemap_USART3) ||    \
                                  ((__REMAP__) == GPIO_PartialRemap_TIM1) || ((__REMAP__) == GPIO_FullRemap_TIM1) ||        \
                                  ((__REMAP__) == GPIO_PartialRemap1_TIM2) || ((__REMAP__) == GPIO_PartialRemap2_TIM2) ||   \
                                  ((__REMAP__) == GPIO_FullRemap_TIM2) || ((__REMAP__) == GPIO_PartialRemap_TIM3) ||        \
                                  ((__REMAP__) == GPIO_FullRemap_TIM3) || ((__REMAP__) == GPIO_Remap_TIM4) ||               \
                                  ((__REMAP__) == GPIO_Remap1_CAN1) || ((__REMAP__) == GPIO_Remap2_CAN1) ||                 \
                                  ((__REMAP__) == GPIO_Remap_PD01) || ((__REMAP__) == GPIO_Remap_TIM5CH4_LSI) ||            \
                                  ((__REMAP__) == GPIO_Remap_ADC1_ETRGINJ) || ((__REMAP__) == GPIO_Remap_ADC1_ETRGREG) ||   \
                                  ((__REMAP__) == GPIO_Remap_ADC2_ETRGINJ) || ((__REMAP__) == GPIO_Remap_ADC2_ETRGREG) ||   \
                                  ((__REMAP__) == GPIO_Remap_ETH) || ((__REMAP__) == GPIO_Remap_CAN2) ||                    \
                                  ((__REMAP__) == GPIO_Remap_SWJ_NoJTRST) || ((__REMAP__) == GPIO_Remap_SWJ_JTAGDisable) || \
                                  ((__REMAP__) == GPIO_Remap_SWJ_Disable) || ((__REMAP__) == GPIO_Remap_SPI3) ||            \
                                  ((__REMAP__) == GPIO_Remap_TIM2ITR1_PTP_SOF) || ((__REMAP__) == GPIO_Remap_PTP_PPS) ||    \
                                  ((__REMAP__) == GPIO_Remap_TIM15) || ((__REMAP__) == GPIO_Remap_TIM16) ||                 \
                                  ((__REMAP__) == GPIO_Remap_TIM17) || ((__REMAP__) == GPIO_Remap_CEC) ||                   \
                                  ((__REMAP__) == GPIO_Remap_TIM1_DMA) || ((__REMAP__) == GPIO_Remap_TIM9) ||               \
                                  ((__REMAP__) == GPIO_Remap_TIM10) || ((__REMAP__) == GPIO_Remap_TIM11) ||                 \
                                  ((__REMAP__) == GPIO_Remap_TIM13) || ((__REMAP__) == GPIO_Remap_TIM14) ||                 \
                                  ((__REMAP__) == GPIO_Remap_FSMC_NADV) || ((__REMAP__) == GPIO_Remap_TIM67_DAC_DMA) ||     \
                                  ((__REMAP__) == GPIO_Remap_TIM12) || ((__REMAP__) == GPIO_Remap_MISC))
void GPIO_Clock_Control(GPIO_Typedef_t *GPIOx, GPIO_En_Dis_Clk ClkControl)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    if (ClkControl == GPIO_EN_CLK)
    {
        if (GPIOx == GPIOA)
        {
            GPIOA_CLK_EN();
        }
        else if (GPIOx == GPIOB)
        {
            GPIOB_CLK_EN();
        }
        else if (GPIOx == GPIOC)
        {
            GPIOC_CLK_EN();
        }
    }
    else if (ClkControl == GPIO_DIS_CLK)
    {
        if (GPIOx == GPIOA)
        {
            GPIOA_CLK_DIS();
        }
        else if (GPIOx == GPIOB)
        {
            GPIOB_CLK_DIS();
        }
        else if (GPIOx == GPIOC)
        {
            GPIOC_CLK_DIS();
        }
    }
}

void GPIO_Init(GPIO_Typedef_t *GPIOx, GPIO_PinConfig_t *PinConfig)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    assert_param(IS_GPIO_PIN(PinConfig->Pin));
    assert_param(IS_GPIO_MODE(PinConfig->Mode));

    uint32_t position = 0x00u; // the position of io pin -> determine the pin of io
    uint32_t ioposition;       // 0 -> 15 corresponding the number of io pin
    uint32_t iocurrent;        // the current io pin
    uint32_t mode = PinConfig->Mode;

    while ((PinConfig->Pin >> position) != 0x00u) // still io pin not implemented
    {
        ioposition = (uint32_t)(0x01u << position);
        iocurrent = (uint32_t)(PinConfig->Pin) & ioposition;
        if (iocurrent == ioposition)
        {
            if (iocurrent < 8)
            {
                GPIOx->CRL &= ~(0x0F << (iocurrent * 4));
                GPIOx->CRL |= (mode << iocurrent * 4);
            }
            else
            {
                GPIOx->CRH &= ~(0x0F << ((iocurrent - 8) * 4));
                GPIOx->CRH |= (mode << (iocurrent - 8) * 4);
            }
            if (mode == GPIO_MODE_INPUT_PU)
            {
                GPIOx->BSRR |= (((uint32_t)0x01) << (iocurrent));
            }
            else if (mode == GPIO_MODE_INPUT_PD)
            {
                GPIOx->BRR |= (((uint32_t)0x01) << (iocurrent));
            }
        }
        position++;
    }
}

void GPIO_DeInit(GPIO_Typedef_t *GPIOx)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    memset(GPIOx, 0, sizeof(GPIO_Typedef_t));
}

/*
       IO Operations function
*/

GPIO_PinState GPIO_ReadPin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    assert_param(IS_GPIO_PIN(Pin));
    return (((GPIOx->IDR) & (1 << Pin)) != (uint32_t)GPIO_PIN_RESET) ? GPIO_PIN_SET : GPIO_PIN_RESET;
}
void GPIO_WritePin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin, GPIO_PinState PinState)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    assert_param(IS_GPIO_PIN(Pin));
    if (PinState == GPIO_PIN_SET)
    {
        GPIOx->BSRR |= (uint32_t)(1 << Pin);
    }
    else
    {
        GPIOx->BSRR |= (uint32_t)(1 << (Pin + 16));
    }
}
void GPIO_TogglePin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    assert_param(IS_GPIO_PIN(Pin));

    GPIOx->ODR ^= (uint32_t)(1 << Pin);
}
void GPIO_EXTI_IRQHandler(GPIO_Pin Pin);
