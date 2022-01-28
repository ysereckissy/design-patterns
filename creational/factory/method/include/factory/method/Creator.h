#ifndef DESIGN_PATTERNS_CREATOR_H
#define DESIGN_PATTERNS_CREATOR_H
#include "Product.h"

namespace factory {namespace method {
    class Creator
    {
    public:
        void anOperation();
    private:
        Product *m_product;
    };
}}
#endif //DESIGN_PATTERNS_CREATOR_H
