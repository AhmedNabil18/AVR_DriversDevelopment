/*
 * Dio_Cfg.h
 *
 * Created: 7/13/2021 7:54:56 PM
 *  Author: Ahmed Nabil
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "..\ATMega32_Registers.h"

#define DIO_USED_PINS_NUM		14

/* DIO Configured Port ID's  */
#define DioConf_COL_1_PORT_NUM				PORT_A
#define DioConf_COL_2_PORT_NUM				PORT_A
#define DioConf_COL_3_PORT_NUM				PORT_A
#define DioConf_ROW_A_PORT_NUM				PORT_A
#define DioConf_ROW_B_PORT_NUM				PORT_A
#define DioConf_ROW_C_PORT_NUM				PORT_A
#define DioConf_ROW_D_PORT_NUM				PORT_A
#define DioConf_LCD_RS_PORT_NUM				PORT_C
#define DioConf_LCD_RW_PORT_NUM				PORT_C
#define DioConf_LCD_E_PORT_NUM				PORT_C
#define DioConf_LCD_D4_PORT_NUM				PORT_D
#define DioConf_LCD_D5_PORT_NUM				PORT_D
#define DioConf_LCD_D6_PORT_NUM				PORT_D
#define DioConf_LCD_D7_PORT_NUM				PORT_D

/* DIO Configured Channel ID's */
#define DioConf_COL_1_PIN_NUM				PIN_1
#define DioConf_COL_2_PIN_NUM				PIN_2
#define DioConf_COL_3_PIN_NUM				PIN_3
#define DioConf_ROW_A_PIN_NUM				PIN_4
#define DioConf_ROW_B_PIN_NUM				PIN_5
#define DioConf_ROW_C_PIN_NUM				PIN_6
#define DioConf_ROW_D_PIN_NUM				PIN_7
#define DioConf_LCD_RS_PIN_NUM				PIN_5
#define DioConf_LCD_RW_PIN_NUM				PIN_6
#define DioConf_LCD_E_PIN_NUM				PIN_7
#define DioConf_LCD_D4_PIN_NUM				PIN_4
#define DioConf_LCD_D5_PIN_NUM				PIN_5
#define DioConf_LCD_D6_PIN_NUM				PIN_6
#define DioConf_LCD_D7_PIN_NUM				PIN_7

/* Channel Index in the array of structures in Dio_Cfg.c */
#define DIO_COL_1_CHANNEL_ID				0
#define DIO_COL_2_CHANNEL_ID				1
#define DIO_COL_3_CHANNEL_ID				2
#define DIO_ROW_A_CHANNEL_ID				3
#define DIO_ROW_B_CHANNEL_ID				4
#define DIO_ROW_C_CHANNEL_ID				5
#define DIO_ROW_D_CHANNEL_ID				6
#define DIO_LCD_RS_CHANNEL_ID				7
#define DIO_LCD_RW_CHANNEL_ID				8
#define DIO_LCD_E_CHANNEL_ID				9
#define DIO_LCD_D4_CHANNEL_ID				10
#define DIO_LCD_D5_CHANNEL_ID				11
#define DIO_LCD_D6_CHANNEL_ID				12
#define DIO_LCD_D7_CHANNEL_ID				13

#endif /* DIO_CFG_H_ */