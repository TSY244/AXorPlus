//
// Created by au9u5t on 24-10-12.
//

#include "../include/AXorPlus.h"

void AXorPlus::printHelp() {

}

bool AXorPlus::XOR2File(const std::string &filename, const std::string &outputFilename, const std::string &key,
                        const uint8_t &mode) {
    // 1. mode 0: use key
    // 2. mode 1: use file

    std::ifstream inputFile{};
    inputFile.open(filename, std::ios::binary);
    if (!inputFile.is_open())
    {
        std::cout<<"Error opening file "<<filename<<std::endl;
        return false;
    }
    auto inputString = std::string((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());

    std::ofstream outputFile{};
    outputFile.open(outputFilename, std::ios::binary);
    if (!outputFile.is_open())
    {
        std::cout<<"Error opening file "<<outputFilename<<std::endl;
        return false;
    }
    if (0 == mode)
    {

        std::string xorString{};
        for (auto i{0}; i < inputString.size(); ++i)
        {
            xorString += inputString[i] ^ key[i % key.size()];
        }
        outputFile << xorString;
    }
    else if (1 == mode)
    {
        std::ifstream keyFile{};
        keyFile.open(key, std::ios::binary);
        if (!keyFile.is_open())
        {
            return false;
        }

        std::string keyString = std::string((std::istreambuf_iterator<char>(keyFile)), std::istreambuf_iterator<char>());

        std::string xorString{};
        for (auto i{0}; i < inputString.size(); ++i)
        {
            xorString += inputString[i] ^ keyString[i % keyString.size()];
        }
        outputFile << xorString;
        keyFile.close();
    }
    inputFile.close();
    outputFile.close();

    return true;
}
