#include <iostream>
#include <set>

/*
 * Set is a container that holds unique, sorted objects.
 * It is a binary tree of sorted objects
 * the attempt to insert duplicate values will not succeed.
 */

int main()
{
    // Create a set of ints
    std::set<int> myset = {1, 2, 3, 4, 5};

    myset.insert(0);
    myset.insert(7);
    myset.insert(2);

    for (auto i : myset)
    {
        std::cout << i << " ";
    }
}