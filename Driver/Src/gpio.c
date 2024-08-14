#include "gpio.h"

/*
       Initialization and Deinitialization functions
*/

#define IS_GPIO_PIN(PIN) (PIN >= GPIO_Pin_0 && PIN <= GPIO_Pin_15)
#define IS_GPIO_INSTANCE(INSTANCE) ((INSTANCE == GPIOA) || (INSTANCE == GPIOB) || (INSTANCE == GPIOC))
#define IS_GPIO_MODE(MODE) (                         \
    (MODE == GPIO_MODE_INPUT_ANALOG) ||              \
    (MODE == GPIO_MODE_INPUT_FLOATING) ||            \
    (MODE == GPIO_MODE_INPUT_PU_PD) ||               \
                                                     \
    (MODE == GPIO_MODE_OUTPUT_10HZ_PP) ||            \
    (MODE == GPIO_MODE_OUTPUT_10HZ_OPEN_DRAIN) ||    \
    (MODE == GPIO_MODE_OUTPUT_10HZ_AF_OPEN_DRAIN) || \
    (MODE == GPIO_MODE_OUTPUT_10HZ_AF_PP) ||         \
                                                     \
    (MODE == GPIO_MODE_OUTPUT_2HZ_PP) ||             \
    (MODE == GPIO_MODE_OUTPUT_2HZ_OPEN_DRAIN) ||     \
    (MODE == GPIO_MODE_OUTPUT_2HZ_AF_PP) ||          \
    (MODE == GPIO_MODE_OUTPUT_2HZ_AF_OPEN_DRAIN) ||  \
                                                     \
    (MODE == GPIO_MODE_OUTPUT_50HZ_PP) ||            \
    (MODE == GPIO_MODE_OUTPUT_50HZ_OPEN_DRAIN) ||    \
    (MODE == GPIO_MODE_OUTPUT_50HZ_AF_PP) ||         \
    (MODE == GPIO_MODE_OUTPUT_50HZ_AF_OPEN_DRAIN))

void GPIO_Init(GPIO_Handle_t *pGPIOx)
{
    assert_err(IS_GPIO_INSTANCE(pGPIOx->pGPIOx));
    assert_err(IS_GPIO_MODE(pGPIOx->GPIO_PinConfig->Mode));
    assert_err(IS_GPIO_PIN(pGPIOx->GPIO_PinConfig->Pin));

    /*
        enable clock for GPIO
    */
    if (pGPIOx->pGPIOx == GPIOA)
    {
        GPIOA_CLK_EN();
    }
    else if (pGPIOx->pGPIOx == GPIOB)
    {
        GPIOB_CLK_EN();
    }
    else if (pGPIOx->pGPIOx == GPIOC)
    {
        GPIOC_CLK_EN();
    }
    uint8_t PinNumber = pGPIOx->GPIO_PinConfig->Pin;
    if (PinNumber < 8)
    {
        pGPIOx->pGPIOx->CRL |= ((pGPIOx->GPIO_PinConfig->Mode) << PinNumber);
    }
    else
    {
        pGPIOx->pGPIOx->CRH |= ((pGPIOx->GPIO_PinConfig->Mode) << (PinNumber - 8));
    }
}

void GPIO_DeInit(GPIO_Handle_t *pGPIOx)
{
    assert_err(IS_GPIO_INSTANCE(pGPIOx->pGPIOx));
    if (pGPIOx->pGPIOx == GPIOA)
    {
        GPIOA_CLK_DIS();
    }
    else if (pGPIOx->pGPIOx == GPIOB)
    {
        GPIOB_CLK_DIS();
    }
    else if (pGPIOx->pGPIOx == GPIOC)
    {
        GPIOC_CLK_DIS();
    }
    memset(pGPIOx, 0, sizeof(GPIO_Handle_t));
}

/*
       IO Operations function
*/

GPIO_PinState GPIO_ReadPin(GPIO_Handle_t *pGPIOx, GPIO_Pin Pin);
void GPIO_WritePin(GPIO_Handle_t *pGPIOx, GPIO_Pin Pin, GPIO_PinState PinState);
void GPIO_TogglePin(GPIO_Handle_t *pGPIOx, GPIO_Pin Pin);
void GPIO_EXTI_IRQHandler(GPIO_Pin Pin);