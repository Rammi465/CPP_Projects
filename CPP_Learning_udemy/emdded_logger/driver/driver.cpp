#include "driver.hpp"

void IODriver::mode0_communication(const uint8_t* data, uint8_t size) {
    gpio_out_t ctrl(PIN_CTRL);
    gpio_out_t nRST(PIN_NRST);
    gpio_in_t done(PIN_DONE);
    gpio_in_t success(PIN_SUCCESS);

    // Select mode 0
    ctrl.init(PUPD_UP, OUT_OPENDRAIN);
    ctrl.write(false);
    
    // Hold device in reset
    nRST.init(PUPD_UP, OUT_OPENDRAIN);
    nRST.write(false);
    delay_us(1000);  // Hold for at least 1ms
    
    // Enter configuration mode
    nRST.write(true);
    
    // Wait until DONE is high
    done.init(PUPD_UP);
    while (!done.read());
    
    // Check if configuration was successful
    success.init(PUPD_UP);
    if (!success.read()) {
        // Handle error
        return;
    }
    
    // Communication
    for (uint8_t i = 0; i < size; i++) {
        // Send each byte of data
        if (!send_communications_nonblocking(&data[i], 1)) {
            // Handle communication error
            return;
        }
        delay_us(1 + (size * 8 / 1000000)); // Communication time in microseconds
    }
}

void IODriver::mode1_configuration() {
    gpio_out_t ctrl(PIN_CTRL);
    gpio_out_t nRST(PIN_NRST);
    gpio_in_t done(PIN_DONE);
    gpio_in_t success(PIN_SUCCESS);
    gpio_in_t select(PIN_SELECT);

    // Select mode 1
    ctrl.init(PUPD_UP, OUT_OPENDRAIN);
    ctrl.write(true);
    
    // Hold device in reset
    nRST.init(PUPD_UP, OUT_OPENDRAIN);
    nRST.write(false);
    delay_us(1000);  // Hold for at least 1ms
    
    // Enter configuration mode
    nRST.write(true);
    
    // External Control
    select.init(PUPD_UP);
    
    // Wait until DONE is high
    done.init(PUPD_UP);
    while (!done.read());
    
    // Check if configuration was successful
    success.init(PUPD_UP);
    if (!success.read()) {
        // Handle error
        return;
    }
}

void IODriver::mode2_configuration() {
    gpio_out_t ctrl(PIN_CTRL);
    gpio_out_t nRST(PIN_NRST);
    gpio_in_t done(PIN_DONE);
    gpio_in_t success(PIN_SUCCESS);
    gpio_in_t select(PIN_SELECT);

    // Select mode 2
    ctrl.init(PUPD_UP, OUT_OPENDRAIN);
    ctrl.write(true);
    
    // Hold device in reset
    nRST.init(PUPD_UP, OUT_OPENDRAIN);
    nRST.write(false);
    delay_us(1000);  // Hold for at least 1ms
    
    // Enter configuration mode
    nRST.write(true);
    
    // External Control
    select.init(PUPD_UP);
    
    // Wait until DONE is high
    done.init(PUPD_UP);
    while (!done.read());
    
    // Check if configuration was successful
    success.init(PUPD_UP);
    if (!success.read()) {
        // Handle error
        return;
    }
}