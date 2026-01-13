#include "c_stub/rte_stub.h"
#include <stdio.h>

extern void App_MainFunction(void);

int main(void) {
    App_MainFunction();

    printf("Actuator value = %u\n", Rte_Get_LastWrittenValue());
    return 0;
}
