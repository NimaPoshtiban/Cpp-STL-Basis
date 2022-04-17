#include <iostream>
#include <algorithm>
#include <vector>

/*
 * working with std::sort algorithm
 * sort containers in ascending order by default
 * std::sort(container.begin(), container.end());
 * if you want to sort in descending order, use std::sort(container.begin(), container.end(), std::greater<int>());
 */
int main()
{
    std::vector<int> v{2, 5, 21, 24, 12, 98, 32, 1};
    std::cout << "sorting container in ascending order" << std::endl;
    std::sort(v.begin(), v.end());
    for (auto i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << "sorting container in descending order" << std::endl;
    std::sort(v.begin(), v.end(), std::greater<int>());
    for (auto i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}