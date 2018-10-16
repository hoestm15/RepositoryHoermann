#define F_CPU 1000000UL
 #include <avr/io.h>
#include <util/delay.h> 

int main() {
	DDRB = (1 << PB5);
	while (1) {
	PORTB = (1 << PB5 );
	_delay_ms (200);
	PORTB = 0;
	_delay_ms(800);
	 }
	return 0;
}
