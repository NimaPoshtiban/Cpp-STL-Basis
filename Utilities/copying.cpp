#include <iostream>
#include <algorithm>
#include <vector>

/*
 *   working with std::copy
 *  copy elements from one container to another
 *  std::copy(container.begin(), container.end(), Target_container.begin());
 *  std::copy(container.begin(), container.end(), Target_container.begin(), Target_container.end());
 * if the target container is not big enough, std::copy throws an exception
 *
 */

int main()
{
    std::vector<int> copy_from{2, 5, 21, 24, 12, 98, 32, 1};
    std::vector<int> copy_to(8); // reserve  space for 8 elements
    std::cout << "copying elements from one container to another" << std::endl;
    std::copy(copy_from.begin(), copy_from.end(), copy_to.begin());
    for (auto i : copy_to)
    {
        std::cout << i << " ";
    }
}
