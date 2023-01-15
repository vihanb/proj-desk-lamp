

#ifndef DESK_LAMP_FANSERVICE_HPP
#define DESK_LAMP_FANSERVICE_HPP

#include <homekit.hpp>

class FanService : public HomeKit::Service {
public:
    explicit FanService();

    void writeCharacteristic(std::vector<HomeKit::WriteData> &writeData) override;
};


#endif //DESK_LAMP_FANSERVICE_HPP
