#include <stdio.h>
#include <stdint.h>

union byte_extract {
   uint32_t value;
   uint8_t bytes[4];
};

uint8_t get_third_byte(uint32_t value)
{
    union byte_extract ex;
    ex.value = value;
    return ex.bytes[2];
}

int main (int ac, char ** av)
{
	uint8_t third = get_third_byte(0xABCD1234); 

	printf("Third byte is %x\n", third);

	return 0;
}
