#include "App.hpp"
#include "FanService.hpp"
#include "LightService.hpp"
#include <nvs_flash.h>

void App::init() {
    ESP_ERROR_CHECK(nvs_flash_init());

    wifiModule.init();
    homekit.init();

    auto accessory = homekit.addAccessory("Desk Lamp", APP_NAME, "SERIALNO", "1.0", "1.0", HAP_CID_LIGHTING);
    accessory->addService(new FanService);
    accessory->addService(new LightService);
}

void App::start() {
    wifiModule.start();
    homekit.start();

    if (!homekit.isProbablyPaired()) {
        homekit.printQRCode();
    }
}