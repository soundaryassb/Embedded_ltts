#ifndef ACTIVITY4_H_INCLUDED
#define ACTIVITY4_H_INCLUDED

void USARTInit(uint16_t ubrr_value);
/**
 * @brief for receiving data
 *
 */
char USARTReadChar();
/**
 * @brief For transmitting data
 *
 */
void USARTWriteChar(char data);
/**
 * @brief For defining activity4
 *
 */
void Activity4();

#endif // ACTIVITY4_H_INCLUDED

