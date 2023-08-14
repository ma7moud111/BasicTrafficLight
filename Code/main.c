/*
 * main.c
 *
 *  Created on: Sep 30, 2022
 *      Author: Eng.M
 */

/*
 *  SOURCE CODE VIA : ENG. Mahmoud Sayed
 */
#include <avr/io.h>
#include <util/delay.h>
#include "BIT_MATH.h"
#include "SEV_SEG.h"

zero_to_nine

void main(){

	SET_BIT(DDRA,0);
	SET_BIT(DDRA,1);
	SET_BIT(DDRA,2);
	DDRC = 0xff;
	PORTC = 0x00;
	DDRD = 0xff;
	PORTD = 0X00;
	int i;
	while(1){

		/*set the red light for 15 seconds*/
		PORTA = 0b00000001;
		PORTD = display[2];
		for(i = 6 ; i>= 1; i--){
			PORTC = display[i];
			_delay_ms(1000);
		}
		if(i == 0){
			PORTD = display[1];
			for(i = 10; i>= 1; i--){
				PORTC = display[i];
				_delay_ms(1000);
			}
		}
		PORTA = 0x00;


/*======================================================================*/

		/*set the yellow light for 3 seconds*/

		PORTA = 0b00000010;
		PORTD = display[1];
		for(i = 4 ; i>= 1; i--){
			PORTC = display[i];
			_delay_ms(1000);
		}
		PORTA = 0x00;

/*=========================================================================*/

		/* set the green light for 15 seconds */
		PORTA = 0b00000100;
		PORTD = display[2];
		for(i = 6 ; i>= 1; i--){
			PORTC = display[i];
			_delay_ms(1000);
		}
		if(i == 0){
			PORTD = display[1];
			for(i = 10; i>= 1; i--){
				PORTC = display[i];
				_delay_ms(1000);
			}
		}
		PORTA = 0x00;
	}
}
