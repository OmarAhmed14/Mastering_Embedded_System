/*
 * KeyPad.h
 *
 * Created: 3/15/2023 5:14:01 PM
 *  Author: OMAR
 */ 


#ifndef KEYPAD_H_
#define KEYPAD_H_

#define F_CPU      8000000UL
/************ROWS************/
#define R1        PD0
#define R2        PD1
#define R3        PD2
#define R4        PD3
/****************************/

/************COLOUMS************/
#define C1        PD4
#define C2        PD5
#define C3        PD6
/****************************/

#define KEYPAD_PORT        PORTD


void KeyPad_Init (void);

unsigned char Get_PressButton (void);

#endif /* KEYPAD_H_ */