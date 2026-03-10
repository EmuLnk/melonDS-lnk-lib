#ifndef EMULNK_MD5_H
#define EMULNK_MD5_H

#include <string>
#include <cstdint>

namespace EmuLnk {
    std::string ComputeMD5Hex(const uint8_t* data, size_t length);
}

#endif
