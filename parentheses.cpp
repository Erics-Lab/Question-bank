#include <iostream>
#include <vector>
#include <map>

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
