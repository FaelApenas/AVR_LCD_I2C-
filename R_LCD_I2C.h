#ifndef R_LCD_I2C 
#define R_LCD_I2C 


#include <avr/io.h> 
#include <avr/delay.h>
#include "twi_master.h"


#define LCD_DDR 0x80

#define I2C_ADDR 0x27 
#define RS_BIT 0 // Register select bit
#define EN_BIT 2 // Enable bit
#define BL_BIT 3 // Backlight bit
#define D4_BIT 4 // Data 4 bit
#define D5_BIT 5 // Data 5 bit
#define D6_BIT 6 // Data 6 bit
#define D7_BIT 7 // Data 7 bit

#define LCD_ROWS 4 // Number of rows on the LCD
#define LCD_COLS 20 // Number of columns on the LCD

//Commands---------
//-----------------
void R_LCD_WRITE_NIBLE(uint8_t nibble, uint8_t r_shift ); 
void R_LCD_CMD(uint8_t cmd ); 
void R_LCD_TRANSMIT(uint8_t data); 
void R_LCD_STR(char *str); 
void R_LCD_BACKLIGHT(bool state);
void R_LCD_XY(uint8_t x , uint8_t y); 
void R_LCD_CLEAR(); 



void R_LCD_INIT();




#endif 
