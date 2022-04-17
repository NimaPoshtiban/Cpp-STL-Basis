#include <iostream>
#include <array>
#include <algorithm>

/*
 * working with lambda expression
 * lambda expression is a function without a name
 * [capture list](parameter list) -> return type {body}
 * [capture list] is a list of variables that are captured by the lambda expression
 * (parameter list) is a list of parameters that are passed to the lambda expression
 * -> return type is the return type of the lambda expression
 * {body} is the body of the lambda expression
 * the body of the lambda expression is executed when the lambda expression is called
 * the body of the lambda expression can be empty
 * the body of the lambda expression can be a single statement or a block of statements
 */

int main()
{
    std::array<int, 5> v{2, 5, 21, 24, 12};
    std::cout << "using lambda expressions sorting the container in descending order" << std::endl;
    std::sort(v.begin(), v.end(), [](int a, int b)
              { return a > b; });
    std::cout << "the sorted container is: ";
    for (auto i : v)
    {
        std::cout << i << " ";
    }
}