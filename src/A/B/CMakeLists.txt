add_library(Ba Ba.cpp)

add_library(${PROJECT_NAME}::Ba ALIAS Ba)

add_library(Bb Bb.cpp)
add_library(${PROJECT_NAME}::Bb ALIAS Bb)

target_include_directories(Bb PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_link_libraries(Ba PUBLIC H)
target_link_libraries(Bb PUBLIC H)

target_include_directories(Ba PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
)

target_compile_features(Bb
    PRIVATE cxx_std_11)

set_target_properties(Ba PROPERTIES
    PUBLIC_HEADER "Ba.h")

set_target_properties(Bb PROPERTIES
    PUBLIC_HEADER "Bb.h")

install(TARGETS Ba Bb EXPORT ${PROJECT_NAME}Config
        PUBLIC_HEADER DESTINATION include
        LIBRARY DESTINATION lib 
        ARCHIVE DESTINATION lib
)