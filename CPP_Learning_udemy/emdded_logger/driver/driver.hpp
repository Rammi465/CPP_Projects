#ifndef DRIVER_HPP
#define DRIVER_HPP

#include "board.h"
#include "coms.h"
#include "delay.h"
#include "gpio.hpp"

class IODriver {
public:
    void mode0_communication(const uint8_t* data, uint8_t size);
    void mode1_configuration();
    void mode2_configuration();
};

#endif // DRIVER_HPP