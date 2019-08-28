cmake_minimum_required(VERSION 3.15)
project(cmake_training)

add_subdirectory(A)
add_subdirectory(H)
add_subdirectory(C)
add_subdirectory(D)
add_subdirectory(DATE)
add_executable(ATest ATest.cpp)
target_link_libraries(ATest
       PRIVATE ${PROJECT_NAME}::A
       PRIVATE ${PROJECT_NAME}::C
       PRIVATE ${PROJECT_NAME}::D
)

add_executable(CTest CTest.cpp)
target_link_libraries(CTest
       PRIVATE ${PROJECT_NAME}::C
)

add_executable(DTest DTest.cpp)
target_link_libraries(DTest
       PRIVATE ${PROJECT_NAME}::D
)
add_executable(DATETest DATETest.cpp)

enable_testing()
include(CTest)

add_test(NAME ATest COMMAND ./ATest)
add_test(NAME CTest COMMAND ./CTest)
add_test(NAME DTest COMMAND ./DTest)
add_test(NAME DATETest COMMAND ./DATETest == `date -I`)

install(EXPORT ${PROJECT_NAME}Config DESTINATION lib NAMESPACE ${PROJECT_NAME}::)

include(CPack)