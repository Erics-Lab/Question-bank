/*
Objective of the code: To give the number of combinations created by tossing n m-faces dices such that the sums of faces are s
, where n, m, s are all positive natural number. The program should automatically quit if the given conditions do not make sense (e.g. 0 dice with -2 faces).
*/

#include <iostream>
#include "assert.h"

int roll(int _n, int _m, int _s)    //parameters: number of dice(s), number of face(s) of dice(s), sum constraint
{
    assert((_n > 0) && (_m > 0) && (_n <= _s) && (_s <= _n * _m));  //check for rational dices and constraint, quit upon failed assertion

    int ret[_n + 1][_s + 1];    //declare a 2D array containing our result

    for (int i = 0; i <= _n; i++)
    {
        for (int j = 0; j <= _s; j++)
        {
            ret[i][j] = 0;  //initialize the 2D array
        }
    }

    for (int j = 1; j <= _m; j++)
    {
        ret[1][j] = 1;  //results when _n = 1
    }

    for (int i = 2; i <= _n; i++)
    {

        for (int j = 2; j <= _s; j++)
        {
            int num = 0, min = j - _m > 1 ? (j - _m) : 1;   //margin

            for (int k = j - 1; k >= min; k--)
            {
                num = num + ret[i - 1][k];
            }
            ret[i][j] = num;
        }
    }

    return ret[_n][_s];
}

int main()
{
    std::cout << roll(4, 12, 6) << std::endl; //the number of combinations created by tossing 4 dodecahedron dices such that the sums of faces are 6, the answer should be 14
    return 0;
}
