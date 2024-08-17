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

void GPIO_Init(GPIO_Typedef_t *GPIOx, GPIO_PinConfig_t *PinConfig)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    assert_param(IS_GPIO_PIN(PinConfig->Pin));
    assert_param(IS_GPIO_MODE(PinConfig->Mode));
    /*
        enable clock for GPIO
    */
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
        }
        position++;
    }
}

void GPIO_DeInit(GPIO_Typedef_t *GPIOx)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
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
    memset(GPIOx, 0, sizeof(GPIO_Typedef_t));
}

/*
       IO Operations function
*/

GPIO_PinState GPIO_ReadPin(GPIO_Typedef_t *GPIOx, GPIO_Pin Pin)
{
    assert_param(IS_GPIO_INSTANCE(GPIOx));
    assert_param(IS_GPIO_PIN(Pin));
    if ((GPIOx->IDR) != (uint32_t)GPIO_PIN_RESET)
    {
        return GPIO_PIN_SET;
    }
    else
    {

        return GPIO_PIN_RESET;
    }
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
    if (Pin != 0)
    {
        // Toggle the pin - XOR
        GPIOx->ODR ^= (uint32_t)(1 << Pin);
    }
}
void GPIO_EXTI_IRQHandler(GPIO_Pin Pin);
