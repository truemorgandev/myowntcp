#pragma once
#include <string>

class Device {
private: 
    std::string name;
    int ip[3];
    static int numOfDevices;
public:
    Device(const std::string& name) {
        this->name = name;    
        ip[0] = 192;
        ip[1] = 168;
        ip[2] = 1;
        ip[3] = numOfDevices + 1;
    }
    ~Device() {
        numOfDevices--;
    }

    std::string getName() const {
        return name;
    }    
};

int Device::numOfDevices = 1;