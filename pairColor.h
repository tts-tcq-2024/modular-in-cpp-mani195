#pragma once

#include "majorColor.h"
#include "minorColor.h"

class ColorPair {
private:
  MajorColorHandler::Name majorColor;
  MinorColorHandler::Name minorColor;

public:
  ColorPair() = default;
  ColorPair(const MajorColorHandler::Name majorColor, const MinorColorHandler::Name minorColor);

  MajorColorHandler::Name getMajorColor() const;
  MinorColorHandler::Name getMinorColor() const;
  std::string toString() const;
};
