

#include "R_LCD_I2C.h" 


void R_LCD_WRITE_NIBLE(uint8_t nibble, uint8_t r_select )
{
    uint8_t data  = nibble <<D4_BIT; 
    data |= r_select <<RS_BIT; 
    data |= backlight <<BL_BIT; 
    data |= 1 <<EN_BIT; 
    tw_master_transmit(LCD_DDR<<1 ,&data,1,0); 
    _delay_ms(10); 
    data &=~(1<<EN_BIT); 
    tw_master_transmit(LCD_DDR<<1 ,&data,1,0); 
    _delay_ms(10); 

}