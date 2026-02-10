#pragma once
#include <string>

struct TelemetryData {
    float temperature;
    float voltage;
    int rpm;
    bool system_ok;
};

TelemetryData generateTelemetry();
std::string toJson(const TelemetryData& data);
