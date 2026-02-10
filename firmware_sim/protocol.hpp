#pragma once
#include <string>

std::string packFrame(const std::string& payload);
bool verifyFrame(const std::string& frame);
std::string extractPayload(const std::string& frame);
