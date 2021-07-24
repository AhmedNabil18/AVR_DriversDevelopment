 /*
 * AVR_DriversDevelopment.c
 *
 * Created: 7/13/2021 11:39:49 PM
 * Author : Ahmed Nabil
 */ 




#include "ECUAL/Keypad Module/Keypad.h"
#include "ECUAL/Lcd Module/Lcd.h"
#include "ECUAL/Terminal Module/Terminal.h"
#include "MCAL/Delay Module/Delay.h"
int main(void)
{
	Keypad_init();
	Terminal_init();
	Lcd_init();
	uint8_t u8_KeyPressed[2]={0};
	u8_KeyPressed[1]='\0';
	enuKeypad_Status_t enu_KeypadStatus=0;
	while (1)
	{
		
		enu_KeypadStatus = Keypad_readKey(u8_KeyPressed);
		if(enu_KeypadStatus == KEYPAD_STATUS_PRESSED)
		{
			Terminal_Out(u8_KeyPressed);
			Lcd_setCursor(1,0);
			Lcd_printChar(u8_KeyPressed[0]);
			Lcd_setCursor(0,0);
			Lcd_printString((uint8_t*)"Keypad Feedback");
		}else if(enu_KeypadStatus == KEYPAD_STATUS_NOT_PRESSED)
		{
			
		}
		Delay_ms(200);
	}
}
