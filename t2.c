#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint16_t w ,h;
    scanf("%hu %hu", &w, &h);
    printf("%u\n", 2 * (w + h));
    printf("%llu %llu\n", sizeof(uint16_t), sizeof(uint32_t) );
    
    return 0;
}


