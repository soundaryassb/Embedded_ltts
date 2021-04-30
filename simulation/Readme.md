# Blinky Project In Action

|Logic-00|Logic-01|Logic-10|Logic-11|  
|:--:|:--:|:--:|:--:|  
|![Logic-00](Logic_00.PNG)|![Logic-01](Logic_01.PNG)|![Logic-10](logic_10.PNG)|![Logic-11](Logic_11.PNG)|  
|LED OFF|LED OFF|LED OFF|LED ON|   

## Code 
```c
	if(!(PIND&(1<<PD2)) && !(PIND&(1<<PD3)))
        {
            change_led_state(LED_ON);
            delay_ms(LED_ON_TIME);
        }
        else
        {
            change_led_state(LED_OFF);
            delay_ms(LED_OFF_TIME);
        }

```
