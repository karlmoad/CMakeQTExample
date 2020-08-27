
find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

target_sources(ui
        PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src/mainwindow.cpp ${CMAKE_CURRENT_LIST_DIR}/src/mainwindow.ui
        PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include/ui/mainwindow.h)

target_include_directories(ui PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)

target_link_libraries(ui Qt5::Core Qt5::Widgets)
