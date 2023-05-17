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

zero_to_nine;

void main(){

	SET_BIT(DDRA,0);
	SET_BIT(DDRA,1);
	SET_BIT(DDRA,2);
	DDRC = 0xff;
	PORTC = 0x00;
	DDRD = 0xff;
	PORTD = 0X00;

	while(1){

		/*set the red light for 10 seconds*/

		SET_BIT(PORTA,0);
		for(int i =1; i<11; i++){
			PORTD = display[i];
			if(i == 10){
				PORTC = display[0];
			}
			_delay_ms(1000);
		}
	//	_delay_ms(10000);
		CLR_BIT(PORTA,0);
		PORTC = 0x00;

/*======================================================================*/

		/*set the yellow light for 3 seconds*/

		SET_BIT(PORTA,1);
		for(int i =1; i<4; i++){
			PORTD = display[i];
			if(i == 10){
				PORTC = display[0];
			}
			_delay_ms(1000);
		}
		//_delay_ms(3000);
		CLR_BIT(PORTA,1);

/*=========================================================================*/

		/* set the green light for 10 seconds */

		SET_BIT(PORTA,2);
		for(int i =1; i<11; i++){
			PORTD = display[i];
			if(i == 10){
				PORTC = display[0];
			}
			_delay_ms(1000);
		}
		CLR_BIT(PORTA,2);
		PORTC = 0x00;
	}
}
