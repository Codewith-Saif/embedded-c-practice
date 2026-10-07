#include <stdio.h>
#include <stdint.h>

uint16_t highest_set_bit(uint16_t reg) {
    for (int i = 15; i >= 0; i--) {
        if (reg & (1U << i)) {
            return (1U << i);
        }
    }

    return 0;
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("%hu", result);
    return 0;
}
