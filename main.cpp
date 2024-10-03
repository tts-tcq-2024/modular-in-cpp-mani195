#include <iostream>
#include <assert.h>
#include "colorManual.h"

void testNumberToPair(int pairNumber, majorColor::Name expectedMajor, minorColor::Name expectedMinor)
{
    ColorPair colorPair = TeleComm::getColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.toString() << std::endl;
    assert(colorPair.getMajorColor() == expectedMajor);
    assert(colorPair.getMinorColor() == expectedMinor);
}

void testPairToNumber(majorColor::Name major, minorColor::Name minor, int expectedPairNumber)
{
    int pairNumber = TeleComm::getPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

int main() {
    testNumberToPair(4, majorColor::Name::WHITE,  minorColor::Name::BROWN);
    testNumberToPair(5, majorColor::Name::WHITE,  minorColor::Name::SLATE);

    testPairToNumber(majorColor::Name::BLACK,  minorColor::Name::ORANGE, 12);
    testPairToNumber(majorColor::Name::VIOLET,  minorColor::Name::SLATE, 25);

    for(const auto& colorPairInfo : TeleComm::getColorPairList())
    {
        std::cout<< "Pair number " << std::to_string(colorPairInfo.first) << " Color Pair "  << colorPairInfo.second.toString() << std::endl;
    }

    return 0;
}
