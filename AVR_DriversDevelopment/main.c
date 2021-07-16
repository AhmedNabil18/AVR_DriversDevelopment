 /*
 * AVR_DriversDevelopment.c
 *
 * Created: 7/13/2021 11:39:49 PM
 * Author : Ahmed Nabil
 */ 


#include "MCAL/Gpt Module/Gpt.h"
#include "MCAL/Dio Module/Dio.h"
#include "MCAL/SWPwm Module/SWPwm.h"

#include "ECUAL/Button Module/Button.h"
#include "ECUAL/Motor Module/Motor.h"
int main(void)
{
	GptInit();
	Dio_init(strDio_pins);
	
	EnableGlbl_Interrupt();
	uint8_t u8_buttonValue=0;
	
	Dio_writePin(DIO_LED1_CHANNEL_ID, PIN_HIGH);
	
	while(1)
	{
		Button_updateState(BUTTON_1_M);
		Button_getState(BUTTON_1_M, &u8_buttonValue);
		
		if(u8_buttonValue == BUTTON_STATE_PRESSED)
		{
			Motor_run(MOTOR_RIGHT_ID,60,MOTOR_DIR_CLK_WISE);
			Motor_stop(MOTOR_LEFT_ID);
		}
		else
		{
			Motor_run(MOTOR_LEFT_ID,60,MOTOR_DIR_CLK_WISE);
			Motor_stop(MOTOR_RIGHT_ID);
		}
		
	}
}
