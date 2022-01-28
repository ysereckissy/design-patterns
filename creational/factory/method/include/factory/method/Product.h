#ifndef DESIGN_PATTERNS_PRODUCT_H
#define DESIGN_PATTERNS_PRODUCT_H
namespace factory {namespace method {
    class Product
    {
    public:
        virtual void Operation() = 0;
        virtual ~Product() = default;
    };
}}
#endif //DESIGN_PATTERNS_PRODUCT_H
