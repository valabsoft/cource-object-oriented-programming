#include "nilakanta.h"

namespace nl
{
    std::string calculatePI(int elementsCount, int digitsCount)
    {
        double PI = 1.00;
        short sign = -1;
        int n = 3;

        double tmp = 0;

        for (int i = 0; i < elementsCount; i++)
        {
            PI += sign * (1.00 / n);
            sign *= -1;
            n += 2;
        }
        PI *= 4;

        std::stringstream stream;
        stream << std::fixed;
        stream << std::setprecision(digitsCount) << PI;
        return stream.str();
    }
}