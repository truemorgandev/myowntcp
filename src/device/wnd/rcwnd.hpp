#pragma once
#include "src/utilitiies.hpp"
#include <unistd.h>
#include <fcntl.h>
class rcWnd {
private:
    int fd;
public: 

     rcWnd(int fileDescriptor) : fd(fileDescriptor) {}


    int getBufferFreeSpace(){
        Buffer buf = {0};
        buf.len = read(fd, buf.data, sizeof(buf.data));
        size_t used = buf.len;
        size_t free = sizeof(buf.data) - buf.len;
        return free;    
    }



};