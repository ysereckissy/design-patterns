set(MODULE_NAME factoryMethod)
set(MODULE_ALIAS_NAME factory::method)

add_library(${MODULE_NAME} OBJECT)
add_library(${MODULE_ALIAS_NAME} ALIAS ${MODULE_NAME})

target_sources(${MODULE_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/sources/ConcreteProduct.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/sources/Creator.cpp
        )

target_include_directories(${MODULE_NAME}
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include/factory/method
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        )
