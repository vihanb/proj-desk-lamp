#ifndef DESK_LAMP_APP_HPP
#define DESK_LAMP_APP_HPP

#include <WiFi.hpp>
#include <homekit.hpp>
#include <optional>

#define APP_NAME "Desk Lamp"
#define ACCESSORY_SETUP_CODE    "123-45-678"
#define ACCESSORY_SETUP_ID      "ABCD"

class App {
private:
    WiFi wifiModule { APP_NAME };
    HomeKit::HomeKit homekit { ACCESSORY_SETUP_CODE, ACCESSORY_SETUP_ID };

public:
    void init();
    void start();
};


#endif //DESK_LAMP_APP_HPP
