#include "ConcreteProduct.h"

#include <iostream>

namespace factory{namespace method {
    void ConcreteProduct::Operation()
    {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
}}