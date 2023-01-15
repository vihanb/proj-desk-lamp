idf_component_register(SRCS "desk-lamp.cpp" "App.cpp" "FanService.cpp" "LightService.cpp"
                    INCLUDE_DIRS "."
                    REQUIRES WiFi homekit esp_hap_apple_profiles)

target_compile_options(${COMPONENT_LIB} PRIVATE -Wno-write-strings)