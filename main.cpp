#include <iostream>
#include "ColorTypes.h"
#include "ColorPair.h"
#include "ColorConverter.h"
#include "ColorTest.h"

// Forward declarations of test functions
void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor);
void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);

int main() {
    TelCoColorCoder::ColorTest::testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    TelCoColorCoder::ColorTest::testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    TelCoColorCoder::ColorTest::testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    TelCoColorCoder::ColorTest::testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    return 0;
}
