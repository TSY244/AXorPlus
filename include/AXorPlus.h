//
// Created by au9u5t on 24-10-12.
//

#ifndef AXORPLUS_AXORPLUS_H
#define AXORPLUS_AXORPLUS_H

#include <string>
#include <iostream>
#include <fstream>

class AXorPlus {
private:
    void printHelp();
public:
    bool XOR2File(const std::string &filename,
                  const std::string &outputFilename,
                  const std::string &key,
                  const uint8_t &mode);
};


#endif //AXORPLUS_AXORPLUS_H
