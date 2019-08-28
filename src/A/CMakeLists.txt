add_subdirectory(B)

add_library(A A.cpp)

add_library(${PROJECT_NAME}::A ALIAS A)

target_link_libraries(A
        PUBLIC Ba)

target_include_directories(A PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

set_target_properties(A PROPERTIES
        PUBLIC_HEADER "A.h")

install(TARGETS A EXPORT ${PROJECT_NAME}Config
        PUBLIC_HEADER DESTINATION include
        LIBRARY DESTINATION lib 
        ARCHIVE DESTINATION lib
)