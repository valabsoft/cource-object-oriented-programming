#include "leibniz.h"

namespace lb
{
    std::string calculatePI(int elementsCount, int digitsCount)
    {
        double PI = 3.00;
        short sign = 1;
        int n = 2;

        double tmp = 0;

        for (int i = 0; i < elementsCount; i++)
        {
            PI += sign * (4.00 / ((n) * (n + 1) * (n + 2)));
            sign *= -1;
            n += 2;
        }

        std::stringstream stream;
        stream << std::fixed;
        stream << std::setprecision(digitsCount) << PI;
        return stream.str();
    }
}