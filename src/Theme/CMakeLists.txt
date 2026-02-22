# Shared: automatically uses libraries in runtime
# Static: the library creates a .lib or .s library used as a file
add_library(Theme STATIC
    theme_manager.cpp
    theme_manager.h
)

target_include_directories(Theme PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(Theme
    Qt6::Core
    Qt6::Widgets
)
