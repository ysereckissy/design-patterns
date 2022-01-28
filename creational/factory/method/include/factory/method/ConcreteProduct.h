#ifndef DESIGN_PATTERNS_CONCRETEPRODUCT_H
#define DESIGN_PATTERNS_CONCRETEPRODUCT_H
#include "Product.h"

namespace factory {namespace method {
        class ConcreteProduct: public Product
        {
            void Operation() override;
        };
}}

#endif //DESIGN_PATTERNS_CONCRETEPRODUCT_H
