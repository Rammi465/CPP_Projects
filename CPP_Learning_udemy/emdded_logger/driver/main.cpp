#include "driver.hpp"

void application_mode0(IODriver& driver) {
    uint8_t data[] = {0x01, 0x02, 0x03, 0x04};
    uint8_t size = sizeof(data) / sizeof(data[0]);
    
    // Execute mode 0 communication
    driver.mode0_communication(data, size);
}

void application_mode1(IODriver& driver) {
    // Execute mode 1 configuration
    driver.mode1_configuration();
}

void application_mode2(IODriver& driver) {
    // Execute mode 2 configuration
    driver.mode2_configuration();
}

int main() {
    IODriver driver;
    
    // Example usage of each mode
    application_mode0(driver);
    application_mode1(driver);
    application_mode2(driver);
    
    return 0;
}