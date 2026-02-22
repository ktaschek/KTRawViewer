add_library(Core STATIC

)

target_include_directories(Core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Core
    Qt6::Core
)
