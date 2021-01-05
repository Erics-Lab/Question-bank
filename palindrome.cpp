#include <iostream>

bool palindrome(int x)
{
    if (x <= 0)
    {
        return (!(x * x > 0));
    }
    else
    {
        long pal = 0;
        int old = x;

        while (x != 0)
        {
            pal = pal * 10 + x % 10;
            x /= 10;
        }

        return (pal == old);
    }
}

int main()
{
    std::cout << palindrome(99) << std::endl;
    return 0;
}
