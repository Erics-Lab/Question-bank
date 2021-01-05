/*
    Objective of the code: To take a number x (-2^31 < x < 2^31-1) and return another number with its' digits in reverse order. 
*/

#include <iostream>

int reverse(int x)
{
    long ret = 0;

    while (x != 0)
    {
        ret = ret * 10 + x % 10;
        x /= 10;
    }

    return (int)ret;
}

int main() //testing
{
    std::cout << reverse(-16) << std::endl;
}
