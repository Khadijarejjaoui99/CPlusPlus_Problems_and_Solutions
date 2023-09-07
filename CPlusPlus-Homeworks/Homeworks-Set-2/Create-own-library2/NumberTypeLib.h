#pragma once

#include <cmath>

enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};

namespace NumberTypeLib
{
    enPrimeNotPrime CheckPrime(int Number)
    {
        if (Number == 0 || Number == 1)
            return enPrimeNotPrime::NotPrime;

        int M = round(Number / 2);

        for (int i = 2; i <= M; i++)
        {
            if (Number % i == 0)
                return enPrimeNotPrime::NotPrime;
        }

        return enPrimeNotPrime::Prime;
    }
}