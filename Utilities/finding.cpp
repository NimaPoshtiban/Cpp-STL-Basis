#include <iostream>
#include <algorithm>
#include <vector>

/*
 * working with std::find
 * search for an element in a container
 * std::find(container.begin(), container.end(), element);
 * if element is not found, std::find returns container.end()
 * if element is found, std::find returns the first element's iterator
 */
int main()
{
    std::vector<int> v{2, 5, 21, 24, 12, 98, 32, 1};
    std::cout << "searching for an element in a container" << std::endl;
    auto it = std::find(v.begin(), v.end(), 24);
    if (it != v.end())
    {
        std::cout << "element found at position " << std::distance(v.begin(), it) << std::endl;
    }
    else
    {
        std::cout << "element not found" << std::endl;
    }
    return 0;
}