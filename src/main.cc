#include <iostream>
#include <pybind11/pybind11.h>
namespace py = pybind11;

int add(int i, int j)
{
    std::cout << "add() called with i = " << i << ", j = " << j << std::endl;
    return i + j;
}

int diff(int i, int j)
{
    std::cout << "diff() called with i = " << i << ", j = " << j << std::endl;
    return i - j;
}

int mul(int i, int j)
{
    std::cout << "mul() called with i = " << i << ", j = " << j << std::endl;
    return i * j;
}

PYBIND11_MODULE(explore_pybind11, m)
{
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function that adds two numbers");
    m.def("diff", &diff, "A function that substracts two numbers");
    m.def("mul", &mul, "A function that multiplies two numbers");
}
