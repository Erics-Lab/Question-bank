/*
    Objective of the code: To check if the given string s has pair(s) of '{}','[]', or '()' with nothing encapsulated between pairs.
*/
#include <iostream>
#include <vector>   //for std::vector
#include <map>  //for std::map

bool isValid(std::string s)
{
    if (s.length() == 0)
    {
        return true;
    }

    std::vector<char> stack;
    stack.push_back(s[0]);
    std::map<char, char> pairs = {{'{', '}'}, {'[', ']'}, {'(', ')'}};
    for (int i = 1; i < s.length(); i++)
    {
        if (pairs[stack.back()] == s[i])
        {
            stack.pop_back();
        }
        else
        {
            stack.push_back(s[i]);
        }
    }

    return stack.empty() ? true : false;
}

int main()
{
    std::cout << isValid("{}()") << std::endl;
}
