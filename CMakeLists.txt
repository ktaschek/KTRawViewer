cmake_minimum_required(VERSION 3.16)

project(KTRawViewer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)
# find_package(QT NAMES Qt6 REQUIRED COMPONENTS Core Widgets LinguistTools)
# find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Widgets LinguistTools)

add_subdirectory(src)
add_subdirectory(tests)


# set(TS_FILES KTRawViewer_en_US.ts)

# set(PROJECT_SOURCES
#         ${TS_FILES}
# )

# if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
#     qt_add_executable(KTRawViewer
#         MANUAL_FINALIZATION
#         ${PROJECT_SOURCES}
#     )
#     qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

# else()
#     if(ANDROID)
#         add_library(KTRawViewer SHARED
#             ${PROJECT_SOURCES}
#         )
#     else()
#         add_executable(KTRawViewer
#             ${PROJECT_SOURCES}
#         )
#     endif()

# endif()

# target_link_libraries(KTRawViewer PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)


# set_target_properties(KTRawViewer PROPERTIES
#     ${BUNDLE_ID_OPTION}
#     MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
#     MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_MINOR}
#     MACOSX_BUNDLE TRUE
#     WIN32_EXECUTABLE TRUE
# )

# include(GNUInstallDirs)
# install(TARGETS KTRawViewer
#     BUNDLE DESTINATION .
#     LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#     RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
# )

# if(QT_VERSION_MAJOR EQUAL 6)
#     qt_finalize_executable(KTRawViewer)
# endif()
