/*
 * Lcd.h
 *
 * Created: 7/24/2021 10:38:01 AM
 *  Author: Ahmed Nabil
 */ 


#ifndef LCD_H_
#define LCD_H_

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*- INCLUDES *-*-*-*-*-*/
#include "Lcd_Cfg.h"
/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*- CONSTANTS -*-*-*-*-*-*/
#define LCD_MODE_4_BIT				0x28U
#define LCD_MODE_8_BIT				0x38U

#define LCD_ROW_1_INDEX				0x80
#define LCD_ROW_2_INDEX				0xC0
#define CURSOR_1stEND				(CURSOR_1stSTART + LCD_COLUMNS_NUM)
#define CURSOR_2ndEND				(CURSOR_2ndSTART + LCD_COLUMNS_NUM)

#define LCD_DISPLAY_OFF		0x08
#define LCD_CLEAR_DISP		0x01
#define LCD_SHIFT_RIGHT		0x1C
#define LCD_SHIFT_LEFT		0x18

#define LCD_ENTRY_MODE      (1 << 2) | (INC_DEC << 1) | (SHIFT << 0)
#define LCD_DISPLAY_SETTING (1 << 3) | (DISPLAY_ON << 2) | (CURSOR_ON << 1) | (BLINKING_ON << 0)

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/*-*-*-*-*-*- MACROS -*-*-*-*-*-*-*/
#define READ			 Dio_writePin(LCD_RW,PIN_HIGH)
#define WRITE			 Dio_writePin(LCD_RW,PIN_LOW)
#define CMD				 Dio_writePin(LCD_RS,PIN_LOW)
#define DATA			 Dio_writePin(LCD_RS,PIN_HIGH)
#define ENABLE			 Dio_writePin(LCD_E,PIN_HIGH)
#define DISABLE			 Dio_writePin(LCD_E,PIN_LOW)

/*******************************************************************************
 *                          Module Data Types                                  *
 *******************************************************************************/
/*
 * Data Type for LCD return status
 */
typedef enum
{
	LCD_STATUS_ERROR_NOK,
	LCD_STATUS_ERROR_OK,
	LCD_STATUS_ERROR_COL_INVALID,
	LCD_STATUS_ERROR_ROW_INVALID,
	LCD_STATUS_ERROR_NULL,
	LCD_STATUS_NOT_INIT,
	LCD_STATUS_INIT
}enuLcd_Status_t;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/
/* Function to initialize the Lcd module */
enuLcd_Status_t Lcd_init(void);

/* Function to send command to the LCD */
enuLcd_Status_t Lcd_sendCommand(uint8_t u8_command);

/* Function to print character on the LCD */
enuLcd_Status_t Lcd_printChar(uint8_t u8_data);

/* Function to print string on the LCD */
enuLcd_Status_t Lcd_printString(uint8_t *pu8_data);

/* Function to set the cursor of the LCD */
enuLcd_Status_t Lcd_setCursor(uint8_t u8_Row, uint8_t u8_Column);


#endif /* LCD_H_ */