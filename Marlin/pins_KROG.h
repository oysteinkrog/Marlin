#define IS_RAMPS_EFB


#include "pins_RAMPS_13.h"

//#define FAN_PIN             6
#define SERVO0_PIN         42

#if NUM_SERVOS > 1
#error Motherboard does not support more than one servo (you can try to define more in pins.h)
#endif

