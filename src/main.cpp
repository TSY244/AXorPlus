#include <iostream>
#include "AXorPlus.h"

int main(int argc, char **argv){
    auto xorPlus = AXorPlus{};
    if (argc != 5)
    {
        std::cout << "Usage: tool <input file> <output file> <key> <mode>" << std::endl;
        return 1;
    }
    // default mode is 1
    xorPlus.XOR2File(argv[1], argv[2], argv[3],1);

}
