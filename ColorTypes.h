#pragma once

namespace TelCoColorCoder {
    enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
    enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

    extern const char* MajorColorNames[];
    extern const int numberOfMajorColors;
    extern const char* MinorColorNames[];
    extern const int numberOfMinorColors;
} 