#define IS_RAMPS_EEB

#define X2_STEP_PIN   64
#define X2_DIR_PIN    59
#define X2_ENABLE_PIN 44

#include "pins_RAMPS_14.h"

#define FAN_PIN             4
#define SERVO0_PIN         42

#if NUM_SERVOS > 1
#error Motherboard does not support more than one servo (you can try to define more in pins.h)
#endif

