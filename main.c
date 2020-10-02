/* Main.c file generated by New Project wizard
 *
 * Created:   Thu Oct 1 2020
 * Processor: PIC16F876A
 * Compiler:  HI-TECH C for PIC10/12/16
 */

#ifndef _XTAL_FREQ
	// Unless already defined assume 4MHz system frequency
	// This definition is required to calibrate __delay_us() and __delay_ms()
	#define _XTAL_FREQ 4000000L // 4MHz
#endif

#define LED RB1


#include <htc.h>

// set chip configuration bits	
__CONFIG(FOSC_XT & WDTE_OFF & PWRTE_OFF & BOREN_OFF & LVP_OFF & WRT_OFF & DEBUG_OFF & CPD_OFF & CP_OFF);


void main(void) {
	TRISB = 0x00; // Set RB0-7 as outputs
	TRISC = 0x00; // Set RC0-7 as outputs
	TRISA = 0b00001100; // Set RA0-1 as outputs, RA2-3 as inputs, RA5 as output
	ADCON1 = 0b0110; // turn all of port a to digital I/O
	
	while(1) {  
		LED = 1;
		__delay_ms(2000);
		LED = 0;
		__delay_ms(2000);
	}
}