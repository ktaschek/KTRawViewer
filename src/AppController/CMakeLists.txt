add_executable(KTRawViewer
    main.cpp
)

target_link_libraries(KTRawViewer
    Core
    Theme
    UI
    Qt6::Core
    Qt6::Widgets
)

if(WIN32)
    set_target_properties(KTRawViewer PROPERTIES WIN32_EXECUTABLE TRUE)
endif()
