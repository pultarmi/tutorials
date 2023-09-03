#include "vector"

#include <pybind11/pybind11.h>


namespace py = pybind11;

int add_numbers(int number1, int number2){
    return number1 + number2;
}

PYBIND11_MODULE(binded_tools, m) {
    m.doc() = "Python bindings";

    m.def("add_numbers",
        &add_numbers, "Add two numbers",
        py::arg("number1"),
        py::arg("number2")
    );
}