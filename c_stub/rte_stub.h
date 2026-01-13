#ifndef RTE_STUB_H
#define RTE_STUB_H

#include <stdint.h>

uint8_t Rte_Read_SensorValue(uint16_t* value);
uint8_t Rte_Write_ActuatorValue(uint16_t value);

#endif
uint16_t Rte_Get_LastWrittenValue(void);
