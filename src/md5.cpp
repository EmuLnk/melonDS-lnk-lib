#include "md5.h"
#include <cstdio>

// Reuse the MD5 implementation already compiled into the rcheevos library
#include "rcheevos/src/rhash/md5.h"

namespace EmuLnk {

std::string ComputeMD5Hex(const uint8_t* data, size_t length) {
    md5_state_t state;
    md5_byte_t digest[16];

    md5_init(&state);
    md5_append(&state, data, (int)length);
    md5_finish(&state, digest);

    char hex[33];
    for (int i = 0; i < 16; i++)
        snprintf(hex + i * 2, 3, "%02x", digest[i]);

    return std::string(hex);
}

}
