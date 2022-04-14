#include <vector>
#include <iostream>

/*
 * A vector is a sequential container. It stores elements in a sequence
 * and allows random access to elements in constant time.
 * It is a dynamic array that can grow and shrink as needed.
 * It is a sequence container.
 * It is a random access container.
 * It is a contiguous container.
 */

int main()
{
    // creating  a vector of ints
    std::vector<int> v = {1, 2, 3};

    // adding elements at the end of the vector
    v.push_back(4);
    v.push_back(5);
    // adding elements at a specific position
    v.insert(v.begin(), 0);

    // printing the vector size and contents
    std::cout << "v.size() = " << v.size() << std::endl;
    std::cout << "v = ";
    for (auto i : v)
    {
        std::cout << i << " ";
    }

    // removing elements from the vector at a specific position
    v.erase(v.begin());
    std::cout << "\nafter using erase v.size() = " << v.size() << std::endl;
    std::cout << "v = ";
    for (auto i : v)
    {
        std::cout << i << " ";
    }

    // clearing the vector
    v.clear();

    // printing the vector size and contents
    std::cout << "\nafter clearing v.size() = " << v.size() << std::endl;
    std::cout << "v = ";
    for (auto i : v)
    {
        std::cout << i << " ";
    }

    return 0;
}