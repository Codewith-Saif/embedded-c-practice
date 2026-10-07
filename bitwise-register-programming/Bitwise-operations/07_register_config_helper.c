#include <stdio.h>
#include <stdint.h>

#define Setenable(val)  ((val)<<0)
#define Setmode(val)     ((val)<<1)
#define Setspeed(val)    ((val)<<3)
uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
   
    return (Setenable(enable))|((Setmode(mode)))|((Setspeed(speed)));
    
}

int main() {
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);

    uint16_t reg = build_register(enable, mode, speed);
    printf("%u", reg);
    return 0;
}
