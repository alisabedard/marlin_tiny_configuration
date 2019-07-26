#define ADVANCED_OK
#define AXIS_RELATIVE_MODES {false, false, false, false}
#define BANG_MAX 255
#define BAUDRATE 250000
#define BED_CHECK_INTERVAL 5000
#define BED_HYSTERESIS 5
#define BED_MAXTEMP 150
#define BED_MINTEMP 5
#define BLOCK_BUFFER_SIZE 32
#define BUFSIZE 16
#define CONFIGURATION_H_VERSION 010109
#define DEFAULT_ACCELERATION 1000
#define DEFAULT_AXIS_STEPS_PER_UNIT { 80, 80, 2267.72, 683 }
#define DEFAULT_EJERK 2
#define DEFAULT_Kd 55.71
#define DEFAULT_Ki 3.07
#define DEFAULT_Kp 26.16
#define DEFAULT_MAX_ACCELERATION    { 3000, 3000, 3000, 1000}
#define DEFAULT_MAX_FEEDRATE        { 200, 200, 5.5, 40 }
#define DEFAULT_MINIMUMFEEDRATE       1.0
#define DEFAULT_MINSEGMENTTIME        20000
#define DEFAULT_MINTRAVELFEEDRATE     1.0
#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75
#define DEFAULT_RETRACT_ACCELERATION  400
#define DEFAULT_STEPPER_DEACTIVE_TIME 30
#define DEFAULT_TRAVEL_ACCELERATION   3000
#define DEFAULT_XJERK                 5
#define DEFAULT_YJERK                 5
#define DEFAULT_ZJERK                 5
#define E0_DRIVER_TYPE A4988
#define E1_DRIVER_TYPE A4988
#define EEPROM_SETTINGS
#define EMERGENCY_PARSER
#define ENDSTOPPULLUPS
#define EXTRUDERS 1
#define E_ENABLE_ON 0
#define FASTER_GCODE_PARSER
#define HEATER_0_MAXTEMP 285
#define HEATER_0_MINTEMP 5
#define HOME_BUMP_MM 5
#define HOMING_BUMP_DIVISOR { 2, 2, 4 }
#define HOMING_FEEDRATE_XY 1200
#define HOMING_FEEDRATE_Z 300
#define INVERT_E0_DIR true
#define INVERT_E_STEP_PIN false
#define INVERT_X_DIR true
#define INVERT_X_STEP_PIN false
#define INVERT_Y_DIR true
#define INVERT_Y_STEP_PIN false
#define INVERT_Z_DIR false
#define INVERT_Z_STEP_PIN false
#define MAX_CMD_SIZE 96
#define MICROSTEP_MODES { 16, 16, 16, 16, 16 }
#define MINIMUM_PLANNER_SPEED 0.05
#define MINIMUM_STEPPER_DIR_DELAY 650
#define MINIMUM_STEPPER_PULSE 5
#define MIN_STEPS_PER_SEGMENT 6
#define MOTHERBOARD BOARD_RAMPS_14_EFB
#define NO_VOLUMETRICS
#define PID_FUNCTIONAL_RANGE 10
#define PID_K1 0.95
#define PID_MAX 255
#define PIDTEMP
#define PREHEAT_1_FAN_SPEED     0
#define PREHEAT_1_TEMP_BED     55
#define PREHEAT_1_TEMP_HOTEND 205
#define PREHEAT_2_FAN_SPEED     0
#define PREHEAT_2_TEMP_BED    90
#define PREHEAT_2_TEMP_HOTEND 230
#define PREVENT_COLD_EXTRUSION
#define PRINTCOUNTER
#define PRINTJOB_TIMER_AUTOSTART
#define PROPORTIONAL_FONT_RATIO 1.0
#define QUICK_HOME
#define RAMPS_D8_PIN 9 //fix blown mosfet
#define RAMPS_D9_PIN 8 //fix blown mosfet
#define RX_BUFFER_SIZE 1024
#define SERIAL_XON_XOFF
#define S_CURVE_ACCELERATION
#define TEMP_BED_HYSTERESIS 5
#define TEMP_HYSTERESIS 5
#define TEMP_SENSOR_0 5
#define TEMP_SENSOR_BED 1
#define THERMAL_PROTECTION_BED
#define THERMAL_PROTECTION_BED_HYSTERESIS 5
#define THERMAL_PROTECTION_BED_PERIOD 60
#define THERMAL_PROTECTION_HOTENDS
#define THERMAL_PROTECTION_HYSTERESIS 10
#define THERMAL_PROTECTION_PERIOD 45
#define TX_BUFFER_SIZE 32
#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
#define USE_ZMIN_PLUG
#define WATCH_BED_TEMP_INCREASE 2
#define WATCH_BED_TEMP_PERIOD 120
#define WATCH_TEMP_INCREASE 4
#define WATCH_TEMP_PERIOD 40
#define X_BED_SIZE 200
#define X_DRIVER_TYPE  A4988
#define X_ENABLE_ON 0
#define X_HOME_BUMP_MM 5
#define X_HOME_DIR 1
#define X_MAX_ENDSTOP_INVERTING false
#define X_MAX_POS X_BED_SIZE
#define X_MIN_ENDSTOP_INVERTING false
#define X_MIN_POS 0
#define Y_BED_SIZE 200
#define Y_DRIVER_TYPE  A4988
#define Y_ENABLE_ON 0
#define Y_HOME_BUMP_MM 5
#define Y_HOME_DIR 1
#define Y_MAX_ENDSTOP_INVERTING false
#define Y_MAX_POS Y_BED_SIZE
#define Y_MIN_ENDSTOP_INVERTING false
#define Y_MIN_POS 0
#define Z_DRIVER_TYPE  A4988
#define Z_ENABLE_ON 0
#define Z_HOME_BUMP_MM 1
#define Z_HOME_DIR -1
#define Z_MAX_ENDSTOP_INVERTING false
#define Z_MAX_POS 75
#define Z_MIN_ENDSTOP_INVERTING false
#define Z_MIN_POS 0
#pragma once
