
#ifndef _FILE_CTRL_SETTINGS_H_
#define _FILE_CTRL_SETTINGS_H_


// BUILD_LEVEL 1: inverter, voltage open loop
// BUILD_LEVEL 2: inverter, current loop
// BUILD_LEVEL 3: inverter, current loop, feed forward control
// BUILD_LEVEL 4: inverter, current loop, feed forward control, negative current control
// BUILD_LEVEL 5: inverter, current loop, ff, neg, harmonic control
// BUILD_LEVEL 6: inverter, voltage loop, current loop, ff
#define BUILD_LEVEL (6)

// low voltage half bridge parameters
#include <ctl/component/digital_power/hardware_preset/gmp_lvhb_v1.h>

// Controller Frequency
#define CONTROLLER_FREQUENCY (20e3)

// PWM depth
#define CONTROLLER_PWM_CMP_MAX (4200 - 1)

// Voltage per unit base value, 100 V
#define CTRL_VOLTAGE_BASE (100.0)

// Current Per unit base value, 10 A
#define CTRL_CURRENT_BASE (10.0)

// Voltage reference, 2.5V
#define CTRL_ADC_VOLTAGE_REF (2.5)

// ADC resolution
#define CTRL_ADC_RESOLUTION (12)

// Current BIAS 
#define CTRL_CURRENT_ADC_BIAS (DSV1_CURRENT_SENSOR_BIAS)

// Current Gain
#define CTRL_CURRENT_ADC_GAIN (DSV1_CURRENT_SENSOR_GAIN)

// Voltage BIAS
#define CTRL_VOLTAGE_ADC_BIAS (DSV1_VOLTAGE_SENSOR_BIAS)

// Voltage Gain
#define CTRL_VOLTAGE_ADC_GAIN (DSV1_VOLTAGE_SENSOR_GAIN)
 
// SPLL Close loop criteria
#define CTRL_SPLL_EPSILON ((float2ctrl(0.005)))

// 
// Controller Settings
//

// Use discrete PID controller
// Discrete controller may bring more smooth response.
//#define PMSM_CTRL_USING_DISCRETE_CTRL

// Enable Discrete PID controller anti-saturation algorithm
#define _USE_DEBUG_DISCRETE_PID

// Enable ADC Calibrate
#define SPECIFY_ENABLE_ADC_CALIBRATE


#endif // _FILE_CTRL_SETTINGS_H_
 