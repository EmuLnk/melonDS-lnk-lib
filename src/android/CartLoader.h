#ifndef CARTLOADER_H
#define CARTLOADER_H

#include <string>
#include "Args.h"
#include "Configuration.h"
#include "NDSCart.h"

namespace MelonDSAndroid
{

std::optional<melonDS::NDSCart::CartCommon> LoadNdsCart(EmulatorConfiguration configuration, std::string romPath, std::string sramPath);
void SetLastRomHash(std::string hash);
std::string GetLastRomHash();

}

#endif
