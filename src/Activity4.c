#include <avr/io.h>
#include<util/delay.h>
#include "activity3.h"
#include "activity4.h"

#define F_CPU 1600000UL

void USARTInit(uint16_t ubrr_value)
{
    //Set Baud Rate
    UBRR0L=ubrr_value;
    UBRR0H=(ubrr_value>>8)& 0x00ff;
    //8 bit size
    UCSR0C=(1<<UCSZ00)|(1<<UCSZ01);
    //Enable receiver and transmitter
    UCSR0B=(1<<RXCIE0)|(1<<TXCIE0)|(1<<TXEN0)|(1<<RXEN0);

}
char USARTReadChar()
{
    while(!(UCSR0A &(1<<RXC0))) //wait till data is received
    {
        //do nothing
    }
    return UDR0;
}
void USARTWriteChar(char data)

{
    while (!(UCSR0A & (1<<UDRE0))) //wait till data transmitted
    {
        //do nothing
    }
    UDR0=data;

}

void activity4()
{

     USARTInit(103); //UBRR Value =(F_CPU/(16* 9600))-1

     char temp=0;
     temp=activity3();



        if(temp==20)
        {
            USARTWriteChar(temp); // temperature=20 transmitted by micro to serail monitor
            _delay_ms(200);
        }
         if(temp==25)
        {
            USARTWriteChar(temp); // temperature=20 transmitted by micro to serial monitor
            _delay_ms(200);
        }
         if(temp==29)
        {
            USARTWriteChar(temp);//temperature=20 transmitted by micro to serial monitor
            _delay_ms(200);
        }
         if(temp==33)
        {
            USARTWriteChar(temp);//temperature=20 transmitted by micro to serial monitor
            _delay_ms(200);
        }




}

