#![no_std]

use core::panic::PanicInfo;

extern "C" {
    fn Rte_Read_SensorValue(value: *mut u16) -> u8;
    fn Rte_Write_ActuatorValue(value: u16) -> u8;
}

#[panic_handler]
fn panic(_info: &PanicInfo) -> ! {
    // AUTOSAR-style behavior:
    // no logging, no unwind, no recovery
    loop {}
}

#[no_mangle]
pub extern "C" fn App_MainFunction() {
    let mut sensor: u16 = 0;

    unsafe {
        if Rte_Read_SensorValue(&mut sensor as *mut u16) == 0 {
            let _ = Rte_Write_ActuatorValue(sensor + 1);
        }
    }
}
