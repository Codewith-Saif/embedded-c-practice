#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val) {
    int16_t result = 0;

    for (int i = 0; i < 8; i++) {
        result |= ((val >> i) & 1) << (2 * i);
    
}
return result;
}


int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint16_t result = spread_bits(val);
    printf("%u", result);
    return 0;
}
