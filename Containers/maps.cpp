#include <iostream>
#include <map>

/*
 * The map is an associative container that holds key-value pairs.
 * Keys are sorted and unique
 * A map is also implemented as a balanced binary tree/graph
 */

int main()
{
    // initialize a map of ints and strings
    std::map<int, std::string> mymap = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"}};

    // insert a new key-value pair
    mymap.insert({6, "six"});

    // print all the key-value pairs
    for (auto i : mymap)
    {
        //                key             value
        std::cout << i.first << " " << i.second << std::endl;
    }

    // print the value of the key "two"
    std::cout << "Map at [2] " << mymap[2] << std::endl;

    // print the size of the map
    std::cout << "Size of map: " << mymap.size() << std::endl;

    // search for a key in the map
    auto it = mymap.find(3);
    if (it != mymap.end())
    {
        std::cout << "Found 3: " << it->second << std::endl;
    }
}