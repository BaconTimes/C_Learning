// #ifndef sbit
// #define sbit sbit
// #endif

#include "reg52.h"
#define uint unsigned int
sbit pos_sel = P2^6;
sbit seg_sel = P2^7;
void delay(uint count);

int main(int argc, char const *argv[])
{
	pos_sel = 1;
	
	pos_sel = 0;
	return 0;
}

void delay(uint count) {
	char i = 1;
	for ( i = 0; i < count; ++i)
		for (int i = 0; i < 1100; ++i);
}
