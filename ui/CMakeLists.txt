
# find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_library(ui)
target_sources(ui
        PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src/mainwindow.cpp ${CMAKE_CURRENT_LIST_DIR}/src/mainwindow.ui
                ${CMAKE_CURRENT_LIST_DIR}/src/sampletablewidget.cpp ${CMAKE_CURRENT_LIST_DIR}/src/sampletablewidget.ui
        PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include/ui/mainwindow.h ${CMAKE_CURRENT_LIST_DIR}/include/ui/sampletablewidget.h)

target_include_directories(ui PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

target_link_libraries(ui Qt5::Core Qt5::Widgets)
