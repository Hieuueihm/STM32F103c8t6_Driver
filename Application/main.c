#include "stm32f103xx_gpio.h"
#include <stdint.h>
void delay_ms(int delay)
{
    for (int i = 0; i < delay * 100000; i++)
    {
    }
}
#define RCC_BASE 0x40021000
#define GPIOA_BASE 0x40010800

#define RCC_APB2ENR (*(volatile unsigned int *)(RCC_BASE + 0x18))
#define GPIOA_CRL (*(volatile unsigned int *)(GPIOA_BASE + 0x00))
#define GPIOA_CRL (*(volatile unsigned int *)(GPIOA_BASE + 0x00))

#define GPIOA_ODR (*(volatile unsigned int *)(GPIOA_BASE + 0x0C))
#define GPIOA_BSRR (*(volatile unsigned int *)(GPIOA_BASE + 0x10))

void GPIOA_Init(void)
{
    // Bật clock cho GPIOA
    RCC_APB2ENR |= (1 << 2); // Bit 2 của APB2ENR bật clock cho GPIOA

    // Cấu hình PA1 là output mode, tốc độ 50MHz, push-pull
    GPIOA_CRL &= ~(0xF << 4); // Xóa cấu hình hiện tại của PA1 (bit 4-7)
    GPIOA_CRL |= (0x3 << 4);  // MODE = 11 (Output mode, 50MHz)
    GPIOA_CRL |= (0x0 << 6);  // CNF = 00 (General purpose output push-pull)
}
int main()
{

    GPIO_Clock_Control(GPIOA, GPIO_EN_CLK);
    GPIO_PinConfig_t GPIO_config;
    GPIO_config.Pin = GPIO_PIN_2;
    GPIO_config.Mode = GPIO_MODE_OUTPUT_50HZ_PP;
    GPIO_Init(GPIOA, &GPIO_config);

    GPIO_PinConfig_t GPIO_config1;
    GPIO_config1.Pin = GPIO_PIN_1;
    GPIO_config1.Mode = GPIO_MODE_INPUT_PD;
    GPIO_Init(GPIOA, &GPIO_config1);
    // GPIOA_Init(); // Gọi hàm khởi tạo GPIOA
    // // GPIOA_Init();
    // RCC->APB2ENR |= (1 << 2);
    // // RCC_APB2ENR |= (1 << 2); // Bit 2 của APB2ENR bật clock cho GPIOA

    // RCC_APB2ENR |= (1 << 2); // Bit 2 của APB2ENR bật clock cho GPIOA
    // GPIOA->CRL |= (GPIO_MODE_OUTPUT_50HZ_PP << 8);
    // GPIOA->CRL &= ~(0xF << 4); // Xóa cấu hình hiện tại của PA1 (bit 4-7)
    // GPIOA->CRL |= (0x3 << 4);  // MODE = 11 (Output mode, 50MHz)
    // GPIOA->CRL |= (0x0 << 6);
    // GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);

    while (1)
    {
        // GPIOA_BSRR = (1 << 1); // Set bit 1 trong BSRR để bật PA1
        // delay_ms(500);
        // // Tắt đèn LED (PA1 = 0)
        // GPIOA_BSRR = (1 << 17); // Set bit 17 trong BSRR để tắt PA1 (reset PA1)
        // delay_ms(500);
        // GPIOA->BSRR |= (1 << 1); // Set bit 1 trong BSRR để bật PA1
        // delay_ms(500);
        // // Tắt đèn LED (PA1 = 0)
        // GPIOA->BSRR |= (1 << 17); // Set bit 17 trong BSRR để tắt PA1 (reset PA1)
        // delay_ms(500);
        // delay_ms(500);
        // Tắt đèn LED(PA1 = 0)
        // GPIO_TogglePin(GPIOA, GPIO_PIN_1);
        // GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_SET);
        // delay_ms(500);
        // GPIO_WritePin(GPIOA, GPIO_PIN_1, GPIO_PIN_RESET);
        // GPIO_TogglePin(GPIOA, GPIO_PIN_1);
        // delay_ms(500);
        GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_SET);
        delay_ms(500);
        GPIO_WritePin(GPIOA, GPIO_PIN_2, GPIO_PIN_RESET);
        delay_ms(500);
        }
}