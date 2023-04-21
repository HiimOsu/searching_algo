cmake_minimum_required(VERSION 3.24.2)
project(CY_sProject)
add_executable(
    main
    main.cpp
    ${SOURCE_FILES}
)

set(CMAKE_MODULE_PATH"${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
include_directories(${SFML_INCLUDE_DIR})
target_link_libraries(main ${SFML_LIBRARIES})

endif()