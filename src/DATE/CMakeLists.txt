string(TIMESTAMP BUILD_TIME "%Y-%m-%d")

configure_file(BuildTime.h.in ${CMAKE_CURRENT_SOURCE_DIR}/BuildTime.h)
