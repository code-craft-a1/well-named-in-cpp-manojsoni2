#pragma once
#include "ColorTypes.h"
#include "ColorPair.h"
#include "ColorConverter.h"

namespace TelCoColorCoder {
    class ColorTest {
    public:
        static void testNumberToPair(int pairNumber,
            MajorColor expectedMajor,
            MinorColor expectedMinor);
        
        static void testPairToNumber(
            MajorColor major,
            MinorColor minor,
            int expectedPairNumber);
    
    private:
        ColorTest() = delete; // Prevent instantiation since all methods are static
    };
} 