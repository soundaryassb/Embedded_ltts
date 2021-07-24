#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
/**
 * @brief For ARef=Avcc and enabling ADC
 *
 */
void InitADC();
/**
 * @brief For Selecting ADC channel,single conversion,and clearing ADIF
 *
 */
uint16_t ReadADC(uint8_t ch);
/**
 * @brief Will define activity2
 *
 */
void Activity2();




#endif // ACTIVITY2_H_INCLUDED
