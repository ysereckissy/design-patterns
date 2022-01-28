target_sources(factory-method-basic
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/basic.cpp
        )
target_link_libraries(factory-method-basic
        PRIVATE
        factory::method
        )