#ifndef ACTIVITY1_H_INCLUDED
#define ACTIVITY1_H_INCLUDED
/**
 * @brief function for configuring the registers
 * @param DDRx for denoting the direction of registers (i.e input or output)
 * @param PORTx for setting the bit at the respective register (i.e logic HIGH or logic LOW)
 */
void pin_config();

/**
 * @brief function for determining the status of LED actuator depending on the status of both passenger seat and heater button 
 * @return int 
 */
void Activity1();
#endif // ACTIVITY1_H_INCLUDED
