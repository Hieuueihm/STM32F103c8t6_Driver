#include "gpio.h"
#include <stdint.h>
void delay_ms(int delay)
{
    for (int i = 0; i < delay * 100000; i++)
    {
    }
}
int main()
{
    test_rrcc();
    GPIOA_BSRR = (1 << 1); // Set bit 1 trong BSRR để bật PA1
    delay_ms(500);         // Trễ 500ms
    delay_ms(50000);
    while (1)
    {
        // Bật đèn LED (PA1 = 1)
        GPIOA_BSRR = (1 << 1); // Set bit 1 trong BSRR để bật PA1
        delay_ms(500);
        // Tắt đèn LED (PA1 = 0)
        GPIOA_BSRR = (1 << 17); // Set bit 17 trong BSRR để tắt PA1 (reset PA1)
        delay_ms(500);          // Trễ 500ms
    }
}