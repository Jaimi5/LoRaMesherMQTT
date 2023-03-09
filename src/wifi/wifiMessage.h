#pragma once

#include <Arduino.h>

#include "message/dataMessage.h"

#pragma pack(1)

enum WiFiMessageType: uint8_t {
    addSSID = 1,
    addPSD = 2,
    connectWiFi = 3,
    getIP = 4,
    saveConfig = 5,
    resetConfig = 6
};

class WiFiMessage: public DataMessageGeneric {
public:
    uint8_t url;
    uint8_t payload[];
};
#pragma pack()