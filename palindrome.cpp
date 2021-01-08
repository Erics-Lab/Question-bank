/*
    Objective of the code: To test whether an integer representation is palindrome.
*/
#include <iostream>

bool palindrome(int x)
{
    if (x <= 0)
    {
        return (!(x * x > 0));  //x = 0 => retirn true, x < 0 => return false
    }
    else
    {
        long pal = 0;
        int old = x;

        while (x != 0)  //get the digits reversed
        {
            pal = pal * 10 + x % 10;
            x /= 10;
        }

        return (pal == old);
    }
}

int main()  //testing
{
    std::cout << palindrome(99) << std::endl;   //should show 1
    std::cout << palindrome(156) << std::endl;  //should show 0;
    return 0;
}
