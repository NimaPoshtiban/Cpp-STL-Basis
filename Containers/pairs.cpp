#include <iostream>
#include <utility>

/*
 * The std::pair class template is a wrapper that can represent a pair of values
 * of different types.
 */

int main()
{
    // initialize a pair of int and double
    std::pair<int, double> mypair = {1, 2.0};
    std::cout << "Pair: " << mypair.first << " " << mypair.second << std::endl;

    // making a pair
    int x = 41;
    double y = 42.0;
    std::pair<int, double> mypair2 = std::make_pair(x, y);
    std::cout << "Pair: " << mypair2.first << " " << mypair2.second << std::endl;
}