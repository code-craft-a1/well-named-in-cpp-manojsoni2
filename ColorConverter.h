#pragma once
#include "ColorTypes.h"
#include "ColorPair.h"

namespace TelCoColorCoder {
    class ColorConverter {
    public:
        static ColorPair GetColorFromPairNumber(int pairNumber);
        static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    private:
        ColorConverter() = delete; // Prevent instantiation since all methods are static
    };
} 