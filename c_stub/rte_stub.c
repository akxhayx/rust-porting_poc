#include "rte_stub.h"

static uint16_t last_written_value = 0;

uint8_t Rte_Read_SensorValue(uint16_t* value) {
    if (value == 0) return 1;
    *value = 42;
    return 0;
}

uint8_t Rte_Write_ActuatorValue(uint16_t value) {
    last_written_value = value;
    return 0;
}

uint16_t Rte_Get_LastWrittenValue(void) {
    return last_written_value;
}
