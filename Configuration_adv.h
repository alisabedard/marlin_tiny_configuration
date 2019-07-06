#ifndef CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H_VERSION 010109
#define THERMAL_PROTECTION_PERIOD 45
#define THERMAL_PROTECTION_HYSTERESIS 10
#define WATCH_TEMP_PERIOD 40
#define WATCH_TEMP_INCREASE 4
#define THERMAL_PROTECTION_BED_PERIOD 60
#define THERMAL_PROTECTION_BED_HYSTERESIS 5
#define WATCH_BED_TEMP_PERIOD 120
#define WATCH_BED_TEMP_INCREASE 2
#define X_HOME_BUMP_MM 5
#define Y_HOME_BUMP_MM 5
#define Z_HOME_BUMP_MM 1
#define HOMING_BUMP_DIVISOR { 2, 2, 4 }
#define QUICK_HOME
#define MICROSTEP_MODES { 16, 16, 16, 16, 16 }
#define MIN_STEPS_PER_SEGMENT 16
#define MINIMUM_STEPPER_DIR_DELAY 200
#define MINIMUM_STEPPER_PULSE 1
#define MAXIMUM_STEPPER_RATE 500000
#define BLOCK_BUFFER_SIZE 64
#define MAX_CMD_SIZE 128
#define BUFSIZE 8
#define TX_BUFFER_SIZE 128
#define RX_BUFFER_SIZE 4096
#define SERIAL_XON_XOFF
#define EMERGENCY_PARSER
#define NO_TIMEOUTS 1000
#define ADVANCED_OK
#define NO_VOLUMETRICS
#define FASTER_GCODE_PARSER
#endif//!CONFIGURATION_ADV_H
