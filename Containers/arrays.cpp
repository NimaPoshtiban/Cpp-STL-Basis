#include <iostream>
#include <array>

/*
* The std::array is a thin wrapper around a C-style array
*Arrays get converted to pointers when used as function arguments
* we should prefer std::array wrapper to old C-style arrays
* The std::array is of the following signature:
* std::array<type_name, array_size>
* It is a fixed size container.
* It is a sequence container.
* It is a random access container.
*/
int main()
{
    std::array<int, 3> array = {1, 2, 3};
    
    for(auto arr: array)
    {
        std::cout << arr << " ";
    }
    std::cout << std::endl;

    std::cout << "Changing the array values" << std::endl;
    std::cout << "array.size() = " << array.size() << std::endl;
    array.at(0) = 0;
    array.at(1) = 1;
    array.at(2) = 2;

    for(auto arr: array)
    {
        std::cout << arr << " ";
    }

    return 0;
}