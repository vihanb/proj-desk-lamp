#include "App.hpp"
#include <esp_event.h>

App app;

extern "C" void app_main(void) {
    ESP_ERROR_CHECK(esp_event_loop_create_default());

    app.init();
    app.start();
}
