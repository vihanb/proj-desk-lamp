#include "FanService.hpp"
#include <hap_apple_servs.h>
#include <hap_apple_chars.h>

FanService::FanService()
    : HomeKit::Service(hap_serv_fan_create(false), {
        hap_char_name_create("My Desk Fan"),
        hap_char_rotation_speed_create(0)
    }) {}

void FanService::writeCharacteristic(std::vector<HomeKit::WriteData> &writeData) {
    // TODO:
}
