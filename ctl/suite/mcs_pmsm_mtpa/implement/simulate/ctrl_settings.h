
#ifndef _FILE_CTRL_SETTINGS_H_
#define _FILE_CTRL_SETTINGS_H_

// invoke motor parameters
#include <ctl/component/motor_control/motor_preset/PMSRM_4P_15KW520V.h>

// invoke motor controller parameters
#include <ctl/component/motor_control/controller_preset/SE_PWR_BD.h>
// #include <ctl/component/motor_control/controller_preset/SE_PWR_BD.h>

// Controller Frequency
#define CONTROLLER_FREQUENCY (16000)

// PWM depth
#define CONTROLLER_PWM_CMP_MAX (6000)

// Speed controller Division ������3-5��
#define SPD_CONTROLLER_PWM_DIVISION (5)

// Controller Base Voltage and Base Current
#define MTR_CTRL_VOLTAGE_BASE ((MOTOR_PARAM_MAX_DC_VOLTAGE))
#define MTR_CTRL_CURRENT_BASE ((MOTOR_PARAM_RATED_CURRENT))

// Current ADC module default per unit parameter
#define MTR_CTRL_CURRENT_GAIN (ADC_FULLSCALE_CURRENT * 2 / MTR_CTRL_CURRENT_BASE)
#define MTR_CTRL_CURRENT_BIAS (ADC_CURRENT_REFERENCE_VOLTAGE / ADC_REFERENCE)

// Voltage ADC module default per unit parameter
#define MTR_CTRL_VOLTAGE_GAIN ((ADC_FULLSCALE_VOLTAGE / MTR_CTRL_VOLTAGE_BASE))
#define MTR_CTRL_VOLTAGE_BIAS ((0.0))

// Current Bandwidth
#define MTR_CTRL_CURRENT_LOOP_BW ((50))

// Speed Bandwidth
#define MTR_CTRL_SPEED_LOOP_BW ((10))

// BUILD_LEVEL 1: Voltage Open loop
// BUILD_LEVEL 2: Current Open loop
// BUILD_LEVEL 3: Actual Current loop
// BUILD_LEVEL 4: Speed Close loop
#define BUILD_LEVEL (1)

//
// Controller Settings
//

// Use discrete PID controller
// Discrete controller may bring more smooth response.
// #define PMSM_CTRL_USING_DISCRETE_CTRL

// Enable Discrete PID controller anti-saturation algorithm
#define _USE_DEBUG_DISCRETE_PID

// Enable ADC Calibrate
// #define SPECIFY_ENABLE_ADC_CALIBRATE

// Enable current distributor
#define PMSM_CTRL_USING_CURRENT_DISTRIBUTOR

#endif // _FILE_CTRL_SETTINGS_H_
