set(LIBRARY_SOURCES
    "position.cc"
    "2d_object.cc"
    "2d_compute.cc"
    )
set(LIBRARY_HEADERS
    "position.hpp"
    "2d_object.hpp"
    "2d_compute.hpp"
    )

add_library(${LIBRARY_NAME} STATIC
    ${LIBRARY_SOURCES}
    ${LIBRARY_HEADERS})
target_include_directories(${LIBRARY_NAME} PUBLIC
    "./"
    "${CMAKE_BINARY_DIR}/configured_files/include")
