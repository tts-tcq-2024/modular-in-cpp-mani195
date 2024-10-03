#pragma once
#include "pairColor.h"
#include <vector>

class colorGuide
{
  private:
    static const std::uint8_t maxColorPair = 25;
  public:
    static ColorPair getColorFromPairNumber(int pairNumber);
    static int getPairNumberFromColor(MajorColorHandler::Name major, MinorColorHandler::Name minor);
    static std::map<std::uint8_t, ColorPair> getColorPairList();
};
