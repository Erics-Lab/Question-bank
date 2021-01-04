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
