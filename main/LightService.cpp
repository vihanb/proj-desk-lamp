#include "LightService.hpp"
#include <hap_apple_servs.h>
#include <hap_apple_chars.h>

LightService::LightService()
    : HomeKit::Service(
        hap_serv_lightbulb_create(false),
        {
                hap_char_name_create("My Desk Light"),
                hap_char_brightness_create(0),
                hap_char_color_temperature_create(50)
        }) {}