add_library(C C.cpp)

target_compile_definitions(C
    INTERFACE Clib_USER
    PRIVATE Clib_INNER
)

add_library(${PROJECT_NAME}::C ALIAS C)

target_link_libraries(C
        PUBLIC H)

target_include_directories(C PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

set_target_properties(C PROPERTIES
        PUBLIC_HEADER "C.h")

install(TARGETS C EXPORT ${PROJECT_NAME}Config
        PUBLIC_HEADER DESTINATION include
        LIBRARY DESTINATION lib 
        ARCHIVE DESTINATION lib
)