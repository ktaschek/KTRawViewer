add_library(UI STATIC
    #CPP
    mainwindow.cpp

    #UI
    mainwindow.ui
)

target_link_libraries(UI
    Qt6::Core
    Qt6::Widgets
)

target_include_directories(UI PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)
