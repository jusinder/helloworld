add_executable(${CMAKE_PROJECT_NAME}
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Qt5::Widgets Qt5::DBus  businesslogic)

set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

