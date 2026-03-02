#define IMU IMU_LSM6DSR
#define SECOND_IMU IMU_LSM6DSR
#define BOARD BOARD_CUSTOM
#define IMU_ROTATION DEG_0
#define SECOND_IMU_ROTATION DEG_0

#define PRIMARY_IMU_OPTIONAL false
#define SECONDARY_IMU_OPTIONAL true

#define MAX_IMU_COUNT 2

#ifndef IMU_DESC_LIST
#define IMU_DESC_LIST \
    IMU_DESC_ENTRY(IMU,        PRIMARY_IMU_ADDRESS_ONE,   IMU_ROTATION,        PIN_IMU_SCL, PIN_IMU_SDA, PRIMARY_IMU_OPTIONAL,   PIN_IMU_INT) \
    IMU_DESC_ENTRY(SECOND_IMU, SECONDARY_IMU_ADDRESS_TWO, SECOND_IMU_ROTATION, PIN_IMU_SCL, PIN_IMU_SDA, SECONDARY_IMU_OPTIONAL, PIN_IMU_INT_2)
#endif

// Battery monitoring options (comment to disable):
// BAT_EXTERNAL for ADC pin, BAT_INTERNAL for internal - can detect only low battery, BAT_MCP3021 for external ADC
#define BATTERY_MONITOR BAT_EXTERNAL
#define BATTERY_SHIELD_RESISTANCE 180 //130k BatteryShield, 180k SlimeVR or fill in external resistor value in kOhm

#define PIN_IMU_SDA 4
#define PIN_IMU_SCL 5
#define PIN_IMU_INT 10
#define PIN_IMU_INT_2 13
#define PIN_BATTERY_LEVEL 17
#define LED_PIN 2
#define LED_INVERTED true
#define BATTERY_SHIELD_RESISTANCE 0
#define BATTERY_SHIELD_R1 100
#define BATTERY_SHIELD_R2 330
// ------------------------------
