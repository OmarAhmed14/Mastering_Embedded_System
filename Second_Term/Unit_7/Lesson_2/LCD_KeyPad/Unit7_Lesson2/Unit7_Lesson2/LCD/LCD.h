/*
 * LCD.h
 *
 * Created: 3/15/2023 10:46:48 AM
 *  Author: OMAR
 */ 


#ifndef LCD_H_
#define LCD_H_

/***********Mode**********/
#define FOUR_BIT      1
#define EIGHT_BIT     0
/*************************/

#define F_CPU      8000000UL

/*****************BITS*****************/
#define LCD_DATA_PORT     PORTA

#define LCD_CTRL      PORTB
#define RW            PB1      
#define RS			  PB0 
#define ENA           PB2 

#define Busy_Flag     PORTD_PIN7  
/**************************************/

static void LCD_Bits (void);

void LCD_Init (void);

void LCD_SendData (unsigned char Data);

void LCD_SendCommand (unsigned char command);

void LCD_SendString (const char* Data);

void LCD_GoTO_XY (unsigned char Line , unsigned char Position);

#endif /* LCD_H_ */