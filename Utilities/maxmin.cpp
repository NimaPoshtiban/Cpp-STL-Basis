#include <iostream>
#include <algorithm>
#include <vector>

/*
 * working with std::max::element and std::min::element
 * find the max and min element in a container
 * std::max_element(container.begin(), container.end());
 * std::min_element(container.begin(), container.end());
 * if the container is empty, std::max_element and std::min_element throw an exception
 * returns the iterator to the element
 */

int main()
{
    std::vector<int> v{2, 5, 21, 24, 12, 98, 32, 1};
    std::cout << "finding the max and min element in a container" << std::endl;
    auto max_it = std::max_element(v.begin(), v.end());
    auto min_it = std::min_element(v.begin(), v.end());
    std::cout << "max element is " << *max_it << " at position " << std::distance(v.begin(), max_it) << std::endl;
    std::cout << "min element is " << *min_it << " at position " << std::distance(v.begin(), min_it) << std::endl;
    return 0;
}