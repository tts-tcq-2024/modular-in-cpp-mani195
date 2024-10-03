#include "colorManual.h"

ColorPair colorGuide::getColorFromPairNumber(int pairNumber)
 {
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColorHandler::Name majorColor =  static_cast<MajorColorHandler::Name>(zeroBasedPairNumber / MinorColorHandler::getNumberOfColors());
    MinorColorHandler::Name minorColor = static_cast<MinorColorHandler::Name>(zeroBasedPairNumber % MinorColorHandler::getNumberOfColors());
    return ColorPair(majorColor, minorColor);
}

int colorGuide::getPairNumberFromColor(MajorColorHandler::Name major, MinorColorHandler::Name minor)
{
    return MajorColorHandler::getColorCode(major) * MinorColorHandler::getNumberOfColors() + MinorColorHandler::getColorCode(minor) + 1;
}

std::map<std::uint8_t, ColorPair> colorGuide::getColorPairList()
{
  std::map<std::uint8_t, ColorPair> colorPairList;
  for(std::size_t pairNo = 1; pairNo <=  maxColorPair; pairNo++)
   {
      colorPairList.insert({pairNo, getColorFromPairNumber(static_cast<int>(pairNo))});
   }
   return colorPairList;
}
