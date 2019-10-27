link_directories(
    ${GTKMM_LIBRARY_DIRS}  )

include_directories(
    ${GTKMM_INCLUDE_DIRS}  )

add_executable(hello-gtk # name of the executable on Windows will be example.exe
    main.cc
    hello.h
    hello.cc )

target_link_libraries(hello-gtk
    ${GTKMM_LIBRARIES}  )
