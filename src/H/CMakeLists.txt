add_library(H INTERFACE)

target_include_directories(H INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)

set_target_properties(H PROPERTIES
        PUBLIC_HEADER "H.h;VersionInterface.h")

install(TARGETS H EXPORT ${PROJECT_NAME}Config
        PUBLIC_HEADER DESTINATION include)
