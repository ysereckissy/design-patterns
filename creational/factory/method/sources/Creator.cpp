#include "Creator.h"
#include "ConcreteProduct.h"
namespace factory {namespace method {
    void Creator::anOperation()
    {
        m_product = new ConcreteProduct();
        m_product->Operation();
    }
    }}
