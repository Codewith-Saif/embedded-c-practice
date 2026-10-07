#include <stdio.h>
#include <stdint.h>

#define Setbits(reg,mask)  ((reg)|=(mask))
#define Clearbit(reg,bit)  ((reg) &= ~(1U<<(bit)))
#define Togglebit(reg, bit) ((reg)^= (1U<<(bit)))

uint8_t modify_register(uint8_t reg) {
     Setbits(reg,(1U<<2)|(1U<<7));
     Clearbit(reg,3);
     Togglebit(reg,5);

    return reg;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}
